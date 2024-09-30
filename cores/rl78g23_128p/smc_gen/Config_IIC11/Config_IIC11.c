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
* Copyright (C) 2021, 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/

/***********************************************************************************************************************
* File Name        : Config_IIC11.c
* Component Version: 1.5.1
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_IIC11.
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
#include "Config_IIC11.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint8_t   g_iic11_master_status_flag;    /* iic11 start flag for send address check */
volatile uint8_t   g_iica11_master_status_flag;   /* iic11 master flag */
volatile uint8_t * gp_iic11_tx_address;           /* iic11 send data pointer by master mode */
volatile uint16_t  g_iic11_tx_cnt;              /* iic11 send data size by master mode */
volatile uint8_t * gp_iic11_rx_address;           /* iic11 receive data pointer by master mode */
volatile uint16_t  g_iic11_rx_cnt;              /* iic11 receive data size by master mode */
uint16_t  g_iic11_rx_len;                      /* iic11 receive data length by master mode */
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_Create
* Description  : This function initializes the IIC11 master module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC11_Create(void)
{
    SPS0 &= _000F_SAU_CK01_CLEAR;
    SPS0 |= _0020_SAU_CK01_FCLK_2;

    ST0 |= _0008_SAU_CH3_STOP_TRG_ON;
    IICMK11 = 1U;    /* disable INTIIC11 interrupt */
    IICIF11 = 0U;    /* clear INTIIC11 interrupt flag */
    /* Set INTIIC11 low priority */
    IICPR111 = 1U;
    IICPR011 = 1U;
    SIR03 = _0004_SAU_SIRMN_FECTMN | _0002_SAU_SIRMN_PECTMN | _0001_SAU_SIRMN_OVCTMN;    /* clear error flag */
    SMR03 = _0020_SAU_SMRMN_INITIALVALUE | _8000_SAU_CLOCK_SELECT_CK01 | _0000_SAU_CLOCK_MODE_CKS | 
            _0000_SAU_TRIGGER_SOFTWARE | _0000_SAU_EDGE_FALL | _0004_SAU_MODE_IIC | _0000_SAU_TRANSFER_END;
    SCR03 = _0004_SAU_SCRMN_INITIALVALUE | _0000_SAU_TIMING_1 | _0000_SAU_INTSRE_MASK | _0000_SAU_PARITY_NONE | 
            _0000_SAU_MSB | _0010_SAU_STOP_1 | _0003_SAU_LENGTH_8;
    SDR03 = _4E00_IIC11_DIVISOR;
    SO0 |= (_0800_SAU_CH3_CLOCK_OUTPUT_1 | _0008_SAU_CH3_DATA_OUTPUT_1);
    /* Set SCL11, SDA11 pin */
    POM9 |= 0x40U;
    P9 |= 0x60U;
    PM9 &= 0x9FU;

    R_Config_IIC11_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_Stop
* Description  : This function stops the IIC11 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC11_Stop(void)
{
    IICMK11 = 1U;    /* disable INTIIC11 interrupt */
    ST0 |= _0008_SAU_CH3_STOP_TRG_ON;
    IICIF11 = 0U;    /* clear INTIIC11 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_StartCondition
* Description  : This function starts the IIC11 condition.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC11_StartCondition(void)
{
    volatile uint8_t w_count;

    SO0 &= (uint16_t)~_0008_SAU_CH3_DATA_OUTPUT_1;    /* clear IIC11 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC11_WAITTIME; w_count++)
    {
        NOP();
    }

    SO0 &= (uint16_t)~_0800_SAU_CH3_CLOCK_OUTPUT_1;    /* clear IIC11 SCL */
    SOE0 |= _0008_SAU_CH3_OUTPUT_ENABLE;    /* enable IIC11 output */
    SS0 |= _0008_SAU_CH3_START_TRG_ON;    /* enable IIC11 */

    /* Set delay to secure a hold time after SCL output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC11_WAITTIME; w_count++)
    {
        NOP();
    }
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_StopCondition
* Description  : This function stops the IIC11 condition.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC11_StopCondition(void)
{
    volatile uint8_t w_count;

    ST0 |= _0008_SAU_CH3_STOP_TRG_ON;    /* disable IIC11 */
    SOE0 &= (uint16_t)~_0008_SAU_CH3_OUTPUT_ENABLE;    /* disable IIC11 output */
    SO0 &= (uint16_t)~_0008_SAU_CH3_DATA_OUTPUT_1;    /* clear IIC11 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC11_WAITTIME; w_count++)
    {
        NOP();
    }

    SO0 |= _0800_SAU_CH3_CLOCK_OUTPUT_1;    /* set IIC11 SCL */

    /* Set delay to secure a hold time after SCL output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC11_WAITTIME; w_count++)
    {
        NOP();
    }

    SO0 |= _0008_SAU_CH3_DATA_OUTPUT_1;    /* set IIC11 SDA */

    /* Set delay to secure a hold time after SDA output low. The delay time depend on slave device.
       Here set 5us as default base on current clock */
    for (w_count = 0U; w_count <= IIC11_WAITTIME; w_count++)
    {
        NOP();
    }
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_Master_Send
* Description  : This function starts transferring data for IIC11 in master mode.
* Arguments    : adr -
*                    set address for select slave
*                tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_IIC11_Master_Send(uint8_t adr, uint8_t * const tx_buf, uint16_t tx_num, uint8_t wait)
{
    MD_STATUS status = MD_OK;

    g_iic11_master_status_flag = _00_SAU_IIC_MASTER_FLAG_CLEAR;    /* clear IIC11 master status flag */
    adr &= 0xFEU;    /* send mode */
    g_iic11_master_status_flag = _01_SAU_IIC_SEND_FLAG;    /* set master status flag */
    SCR03 &= (uint16_t)~_C000_SAU_RECEPTION_TRANSMISSION;
    SCR03 |= _8000_SAU_TRANSMISSION;
    /* Set paramater */
    g_iic11_tx_cnt = tx_num;
    gp_iic11_tx_address = tx_buf;
    /* Start condition */
    R_Config_IIC11_StartCondition();
    IICIF11 = 0U;    /* clear INTIIC11 interrupt flag */
    IICMK11 = 0U;    /* enable INTIIC11 */
    SIO11 = adr;
    g_iica11_master_status_flag = _00_IICA_MASTER_FLAG_CLEAR;
    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_IIC11_Master_Receive
* Description  : This function starts receiving data for IIC11 in master mode.
* Arguments    : adr -
*                    set address for select slave
*                rx_buf -
*                    receive buffer pointer
*                rx_num -
*                    buffer size
* Return Value : None
***********************************************************************************************************************/
MD_STATUS R_Config_IIC11_Master_Receive(uint8_t adr, uint8_t * const rx_buf, uint16_t rx_num, uint8_t wait)
{
    MD_STATUS status = MD_OK;

    g_iic11_master_status_flag = _00_SAU_IIC_MASTER_FLAG_CLEAR;    /* clear master status flag */
    adr |= 0x01U;    /* receive mode */
    g_iic11_master_status_flag = _02_SAU_IIC_RECEIVE_FLAG;    /* set master status flag */
    SCR03 &= (uint16_t)~_C000_SAU_RECEPTION_TRANSMISSION;
    SCR03 |= _8000_SAU_TRANSMISSION;
    /* Set parameter */
    g_iic11_rx_len = rx_num;
    g_iic11_rx_cnt = 0U;
    gp_iic11_rx_address = rx_buf;
    /* Start condition */
    R_Config_IIC11_StartCondition();
    IICIF11 = 0U;    /* clear INTIIC11 interrupt flag */
    IICMK11 = 0U;    /* enable INTIIC11 */
    SIO11 = adr;
    g_iica11_master_status_flag = _00_IICA_MASTER_FLAG_CLEAR;
    return (status);
}

/* Start user code for adding. Do not edit comment generated here */

/**********************************************************************************************************************
 * Function Name: R_Config_IICA0_Master_SetClock
 * Description  : This function sets I2C clock frequency
 * Arguments    : clock - clock frequency to set
 *              :   The given frequency is normalized
 *              :   cutting off to the either one of the frequencies below:
 *              :     I2C_CLOCK_FAST_PLUS = 1,000,000 Hz (fast     mode plus)
 *              :     I2C_CLOCK_FAST      =   400,000 Hz (fast     mode     )
 *              :     I2C_CLOCK_STANDARD  =   100,000 Hz (standard mode     )
 *              :   If the given frequency is lower than above all,
 *              :   considers it as the lowest clock or standard mode 100,000 Hz.
 * Return Value : None
 *********************************************************************************************************************/
void R_Config_IIC11_Master_SetClock(uint32_t clock) {
    uint32_t fclk_frequency;
    uint32_t  peri_clk    ;
    uint16_t tmp_sdr ;
    fclk_frequency = R_BSP_GetFclkFreqHz();
    peri_clk    = fclk_frequency / 4;
    tmp_sdr = (uint16_t)(( peri_clk/clock - 1) << 8) ;
    if(tmp_sdr>0)
    {
        SDR03 = tmp_sdr & 0xFF00;
    }
    else
    {
        SDR03 = 0x0200;
    }
}
/* End user code. Do not edit comment generated here */

