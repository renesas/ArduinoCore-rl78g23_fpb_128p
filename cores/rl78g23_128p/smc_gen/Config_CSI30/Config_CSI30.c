/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products.
* No other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED
* OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED.TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY
* LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE LIABLE FOR ANY DIRECT,
* INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR
* ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability 
* of this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2021, 2023 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : Config_CSI30.c
* Component Version: 1.4.1
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_CSI30.
* Creation Date    : 
***********************************************************************************************************************/

/***********************************************************************************************************************
Pragma directive
***********************************************************************************************************************/
/* Start user code for pragma. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_macrodriver.h"
#include "Config_CSI30.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint8_t * gp_csi30_tx_address;    /* csi30 send buffer address */
volatile uint16_t g_csi30_tx_count;        /* csi30 send data count */
volatile uint8_t * gp_csi30_rx_address;    /* csi30 receive buffer address */
/* Start user code for global. Do not edit comment generated here */
volatile uint16_t g_csi30_status_flag;

/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_CSI30_Create
* Description  : This function initializes the CSI30 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI30_Create(void)
{
    SPS1 &= _000F_SAU_CK01_CLEAR;
    SPS1 |= _0000_SAU_CK01_FCLK_0;
    /* Stop channel 2 */
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;
    /* Mask channel 2 interrupt */
    CSIMK30 = 1U;    /* disable INTCSI30 interrupt */
    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */
    /* Set INTCSI30 low priority */
    CSIPR130 = 1U;
    CSIPR030 = 1U;
    SIR12 = _0002_SAU_SIRMN_PECTMN | _0001_SAU_SIRMN_OVCTMN;    /* clear error flag */
    SMR12 = _0020_SAU_SMRMN_INITIALVALUE | _8000_SAU_CLOCK_SELECT_CK01 | _0000_SAU_CLOCK_MODE_CKS |
            _0000_SAU_TRIGGER_SOFTWARE | _0000_SAU_MODE_CSI | _0000_SAU_TRANSFER_END;
    SCR12 = _0004_SAU_SCRMN_INITIALVALUE | _C000_SAU_RECEPTION_TRANSMISSION | _3000_SAU_TIMING_4 | _0000_SAU_MSB | 
            _0003_SAU_LENGTH_8;
    SDR12 = _0600_SAU1_CH2_BAUDRATE_DIVISOR;

    SO1 &= (uint16_t)~_0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI30 output */
    /* Set SI30 pin */
    PM14 |= 0x08U;
    /* Set SO30 pin */
    P14 |= 0x10U;
    PM14 &= 0xEFU;
    /* Set SCK30 pin */
    P14 |= 0x04U;
    PM14 &= 0xFBU;
    
    R_Config_CSI30_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI30_Start
* Description  : This function starts the CSI30 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI30_Start(void)
{
//    SO1 |= _0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
//    SO1 &= (uint16_t)~_0004_SAU_CH2_DATA_OUTPUT_1;    /* CSI30 SO initial level */
    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI30 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI30 */
    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */
    CSIMK30 = 0U;    /* enable INTCSI30 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI30_Stop
* Description  : This function stops the CSI30 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI30_Stop(void)
{
    CSIMK30 = 1U;    /* disable INTCSI30 interrupt */
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;    /* disable CSI30 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI30 output */
    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI30_Send_Receive
* Description  : This function sends and receives CSI30 data.
* Arguments    : tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
*                rx_buf -
*                    receive buffer pointer
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_CSI30_Send_Receive(uint8_t * const tx_buf, uint16_t tx_num, uint8_t * const rx_buf)
{
    MD_STATUS status = MD_OK;

    if (tx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        g_csi30_tx_count = tx_num;    /* send data count */
        gp_csi30_tx_address = tx_buf;    /* send buffer pointer */
        gp_csi30_rx_address = rx_buf;    /* receive buffer pointer */
        CSIMK30 = 1U;    /* disable INTCSI30 interrupt */

        if (0U != gp_csi30_tx_address)
        {
            SIO30 = *gp_csi30_tx_address;    /* started by writing data to SDR12[7:0] */
            gp_csi30_tx_address++;
        }
        else
        {
            SIO30 = 0xFFU;
        }

        g_csi30_tx_count--;
        CSIMK30 = 0U;    /* enable INTCSI30 interrupt */
    }

    return (status);
}

/* Start user code for adding. Do not edit comment generated here */

/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_GetBitOrder
 * Description  : Get the order of the bits shifted out of and into the SPI bus.
 * Arguments    : -
 * Return Value : Current bit order setting
 *              :   LSBFIRST
 *              :   MSBFIRST
 *********************************************************************************************************************/
uint8_t R_Config_CSI30_GetBitOrder(void) {
    return (SCR12 & (uint16_t)_0080_SAU_LSB) == _0080_SAU_LSB
                ? LSBFIRST : MSBFIRST;
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_SetBitOrder
 * Description  : Set the order of the bits shifted out of and into the SPI bus.
 * Arguments    : bitOrder - Bit order setting
 *              :   LSBFIRST
 *              :   MSBFIRST
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI30_SetBitOrder(uint8_t bitOrder) {
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI30 output */
    SCR12    = (SCR12 & (uint16_t)~_0080_SAU_LSB)
             | (bitOrder == LSBFIRST ? _0080_SAU_LSB : _0000_SAU_MSB);
    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */

    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI30 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI30 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_SetDataMode
 * Description  : Set the SPI data mode (clock polarity and phase).
 * Arguments    : dataMode - SPI data mode
 *              :   SPI_MODE0
 *              :   SPI_MODE1
 *              :   SPI_MODE2
 *              :   SPI_MODE3
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI30_SetDataMode(uint8_t dataMode) {

    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI30 output */
    /*
     * This mapping is obeying the base code.
     * Fix the `SPI_MODEx` macros together.
     */
    switch (dataMode) {
    case SPI_MODE3:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _0000_SAU_TIMING_1;
        SO1 |= _0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
        break;
    case SPI_MODE2:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _2000_SAU_TIMING_3;
        SO1 |= _0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
        break;
    case SPI_MODE1:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _1000_SAU_TIMING_2;
        SO1 &= (uint16_t)~_0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
        break;
    case SPI_MODE0:
    default:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _3000_SAU_TIMING_4;
        SO1 &= (uint16_t)~_0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI30 clock initial level */
        break;
    }

    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */
    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI30 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI30 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_SetClockDivider
 * Description  : Set the SPI clock divider relative to the system clock.
 * Arguments    : clockDiv - SPI clock divider
 *              :   SPI_CLOCK_DIV2
 *              :   SPI_CLOCK_DIV4
 *              :   SPI_CLOCK_DIV8
 *              :   SPI_CLOCK_DIV16
 *              :   SPI_CLOCK_DIV32
 *              :   SPI_CLOCK_DIV64
 *              :   SPI_CLOCK_DIV128
 *              :   or an immediate { 2, 4, 6, 8, ..., 256 }
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI30_SetClockDivider(uint16_t clockDiv) {
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI30 output */

    clockDiv = clockDiv <   4 ?   4U
             : clockDiv > 256 ? 256U
             :                  clockDiv + (clockDiv & 1U);

    SDR12    = ((clockDiv >> 1) - 1) << 9;

    CSIIF30 = 0U;    /* clear INTCSI30 interrupt flag */

    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI30 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI30 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_SetClock
 * Description  : Set the SPI maximum speed of communication.
 * Arguments    : clock - SPI clock speed
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI30_SetClock(uint32_t clock) {
    uint16_t clockDiv;
    uint32_t spi_frequency = R_BSP_GetFclkFreqHz() >> ((SPS1 >> 4) & 0x0F);

    for (clockDiv = 2; clockDiv < 256; clockDiv += 2) {
        if (clock >= spi_frequency / clockDiv) {
            break;
        }
    }

    R_Config_CSI30_SetClockDivider(clockDiv);
}
/* End user code. Do not edit comment generated here */
