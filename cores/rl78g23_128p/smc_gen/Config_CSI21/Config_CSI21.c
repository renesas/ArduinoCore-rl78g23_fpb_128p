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
* File Name        : Config_CSI21.c
* Component Version: 1.4.1
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_CSI21.
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
#include "Config_CSI21.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint8_t * gp_csi21_tx_address;    /* csi21 send buffer address */
volatile uint16_t g_csi21_tx_count;        /* csi21 send data count */
volatile uint8_t * gp_csi21_rx_address;    /* csi21 receive buffer address */
/* Start user code for global. Do not edit comment generated here */
volatile uint16_t g_csi21_status_flag;

/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_CSI21_Create
* Description  : This function initializes the CSI21 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI21_Create(void)
{
    SPS1 &= _00F0_SAU_CK00_CLEAR;
    SPS1 |= _0001_SAU_CK00_FCLK_1;
    /* Stop channel 1 */
    ST1 |= _0002_SAU_CH1_STOP_TRG_ON;
    /* Mask channel 1 interrupt */
    CSIMK21 = 1U;    /* disable INTCSI21 interrupt */
    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */
    /* Set INTCSI21 low priority */
    CSIPR121 = 1U;
    CSIPR021 = 1U;
    SIR11 = _0004_SAU_SIRMN_FECTMN | _0002_SAU_SIRMN_PECTMN | _0001_SAU_SIRMN_OVCTMN;    /* clear error flag */
    SMR11 = _0020_SAU_SMRMN_INITIALVALUE | _0000_SAU_CLOCK_SELECT_CK00 | _0000_SAU_CLOCK_MODE_CKS | 
            _0000_SAU_TRIGGER_SOFTWARE | _0000_SAU_MODE_CSI | _0000_SAU_TRANSFER_END;
    SCR11 = _0004_SAU_SCRMN_INITIALVALUE | _C000_SAU_RECEPTION_TRANSMISSION | _3000_SAU_TIMING_4 | _0000_SAU_MSB | 
            _0003_SAU_LENGTH_8;
    SDR11 = _4E00_SAU1_CH1_BAUDRATE_DIVISOR;
//    SO1 |= _0200_SAU_CH1_CLOCK_OUTPUT_1;    /* CSI21 clock initial level */
    SO1 &= (uint16_t)~_0002_SAU_CH1_DATA_OUTPUT_1;    /* CSI21 SO initial level */
    SOE1 |= _0002_SAU_CH1_OUTPUT_ENABLE;    /* enable CSI21 output */
    /* Set SI21 pin */
    PMCT7 &= 0xFDU;
    PM7 |= 0x02U;
    /* Set SO21 pin */
    PMCT7 &= 0xFBU;
    P7 |= 0x04U;
    PM7 &= 0xFBU;
    /* Set SCK21 pin */
    PMCT7 &= 0xFEU;
    P7 |= 0x01U;
    PM7 &= 0xFEU;
    
    R_Config_CSI21_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI21_Start
* Description  : This function starts the CSI21 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI21_Start(void)
{
//    SO1 |= _0200_SAU_CH1_CLOCK_OUTPUT_1;    /* CSI21 clock initial level */
//    SO1 &= (uint16_t)~_0002_SAU_CH1_DATA_OUTPUT_1;    /* CSI21 SO initial level */
    SOE1 |= _0002_SAU_CH1_OUTPUT_ENABLE;    /* enable CSI21 output */
    SS1 |= _0002_SAU_CH1_START_TRG_ON;    /* enable CSI21 */
    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */
    CSIMK21 = 0U;    /* enable INTCSI21 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI21_Stop
* Description  : This function stops the CSI21 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI21_Stop(void)
{
    CSIMK21 = 1U;    /* disable INTCSI21 interrupt */
    ST1 |= _0002_SAU_CH1_STOP_TRG_ON;    /* disable CSI21 */
    SOE1 &= (uint16_t)~_0002_SAU_CH1_OUTPUT_ENABLE;    /* disable CSI21 output */
    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_CSI21_Send_Receive
* Description  : This function sends and receives CSI21 data.
* Arguments    : tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
*                rx_buf -
*                    receive buffer pointer
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_CSI21_Send_Receive(uint8_t * const tx_buf, uint16_t tx_num, uint8_t * const rx_buf)
{
    MD_STATUS status = MD_OK;

    if (tx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        g_csi21_tx_count = tx_num;    /* send data count */
        gp_csi21_tx_address = tx_buf;    /* send buffer pointer */
        gp_csi21_rx_address = rx_buf;    /* receive buffer pointer */
        CSIMK21 = 1U;    /* disable INTCSI21 interrupt */

        if (0U != gp_csi21_tx_address)
        {
            SIO21 = *gp_csi21_tx_address;    /* started by writing data to SDR11[7:0] */
            gp_csi21_tx_address++;
        }
        else
        {
            SIO21 = 0xFFU;
        }

        g_csi21_tx_count--;
        CSIMK21 = 0U;    /* enable INTCSI21 interrupt */
    }

    return (status);
}

/* Start user code for adding. Do not edit comment generated here */

/**********************************************************************************************************************
 * Function Name: R_Config_CSI21_GetBitOrder
 * Description  : Get the order of the bits shifted out of and into the SPI bus.
 * Arguments    : -
 * Return Value : Current bit order setting
 *              :   LSBFIRST
 *              :   MSBFIRST
 *********************************************************************************************************************/
uint8_t R_Config_CSI21_GetBitOrder(void) {
    return (SCR12 & (uint16_t)_0080_SAU_LSB) == _0080_SAU_LSB
                ? LSBFIRST : MSBFIRST;
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI21_SetBitOrder
 * Description  : Set the order of the bits shifted out of and into the SPI bus.
 * Arguments    : bitOrder - Bit order setting
 *              :   LSBFIRST
 *              :   MSBFIRST
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI21_SetBitOrder(uint8_t bitOrder) {
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI21 output */
    SCR12    = (SCR12 & (uint16_t)~_0080_SAU_LSB)
             | (bitOrder == LSBFIRST ? _0080_SAU_LSB : _0000_SAU_MSB);
    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */
    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI21 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI21 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI21_SetDataMode
 * Description  : Set the SPI data mode (clock polarity and phase).
 * Arguments    : dataMode - SPI data mode
 *              :   SPI_MODE0
 *              :   SPI_MODE1
 *              :   SPI_MODE2
 *              :   SPI_MODE3
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI21_SetDataMode(uint8_t dataMode) {

    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI21 output */
    /*
     * This mapping is obeying the base code.
     * Fix the `SPI_MODEx` macros together.
     */
    switch (dataMode) {
    case SPI_MODE3:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _0000_SAU_TIMING_1;
        SO1 |= _0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI21 clock initial level */
        break;
    case SPI_MODE2:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _2000_SAU_TIMING_3;
        SO1 |= _0400_SAU_CH2_CLOCK_OUTPUT_1;    /* CSI21 clock initial level */
        break;
    case SPI_MODE1:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _1000_SAU_TIMING_2;
        SO1 &= (uint16_t)~_0004_SAU_CH2_DATA_OUTPUT_1;    /* CSI21 SO initial level */
        break;
    case SPI_MODE0:
    default:
        SCR12 = (SCR12 & (uint16_t)~SPI_MODE_MASK) | _3000_SAU_TIMING_4;
        SO1 &= (uint16_t)~_0004_SAU_CH2_DATA_OUTPUT_1;    /* CSI21 SO initial level */
        break;
    }

    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */
    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI21 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI21 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI21_SetClockDivider
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
void R_Config_CSI21_SetClockDivider(uint16_t clockDiv) {
    ST1 |= _0004_SAU_CH2_STOP_TRG_ON;      /* Stop channel 2 */
    SOE1 &= (uint16_t)~_0004_SAU_CH2_OUTPUT_ENABLE;    /* disable CSI21 output */

    clockDiv = clockDiv <   4 ?   4U
             : clockDiv > 256 ? 256U
             :                  clockDiv + (clockDiv & 1U);

    SDR12    = ((clockDiv >> 1) - 1) << 9;

    CSIIF21 = 0U;    /* clear INTCSI21 interrupt flag */

    SOE1 |= _0004_SAU_CH2_OUTPUT_ENABLE;    /* enable CSI21 output */
    SS1 |= _0004_SAU_CH2_START_TRG_ON;    /* enable CSI21 */
}

/**********************************************************************************************************************
 * Function Name: R_Config_CSI21_SetClock
 * Description  : Set the SPI maximum speed of communication.
 * Arguments    : clock - SPI clock speed
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI21_SetClock(uint32_t clock) {
    uint16_t clockDiv;
    uint32_t spi_frequency = R_BSP_GetFclkFreqHz() >> ((SPS1 >> 4) & 0x0F);

    for (clockDiv = 2; clockDiv < 256; clockDiv += 2) {
        if (clock >= spi_frequency / clockDiv) {
            break;
        }
    }

    R_Config_CSI21_SetClockDivider(clockDiv);
}
/* End user code. Do not edit comment generated here */
