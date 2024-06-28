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
* File Name        : Config_TAU1_0_PWM.c
* Component Version: 1.6.0
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_TAU1_0_PWM.
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
#include "Config_TAU1_0_PWM.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
volatile uint8_t g_tau_output_enable2 = 0;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_0_PWM_Create
* Description  : This function initializes the TAU1 channel0 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_0_PWM_Create(void)
{
    TPS1 &= _FFF0_TAU_CKM0_CLEAR;
    TPS1 |= _0000_TAU_CKM0_FCLK_0;
    TT1 |= (_0080_TAU_CH7_STOP_TRG_ON | _0040_TAU_CH6_STOP_TRG_ON | _0020_TAU_CH5_STOP_TRG_ON | 
           _0010_TAU_CH4_STOP_TRG_ON | _0008_TAU_CH3_STOP_TRG_ON | _0004_TAU_CH2_STOP_TRG_ON | 
           _0002_TAU_CH1_STOP_TRG_ON | _0001_TAU_CH0_STOP_TRG_ON);
    TMMK10 = 1U;    /* disable INTTM10 interrupt */
    TMIF10 = 0U;    /* clear INTTM10 interrupt flag */
    TMMK11 = 1U;    /* disable INTTM11 interrupt */
    TMIF11 = 0U;    /* clear INTTM11 interrupt flag */
    TMMK12 = 1U;    /* disable INTTM12 interrupt */
    TMIF12 = 0U;    /* clear INTTM12 interrupt flag */
    TMMK13 = 1U;    /* disable INTTM13 interrupt */
    TMIF13 = 0U;    /* clear INTTM13 interrupt flag */
    TMMK14 = 1U;    /* disable INTTM14 interrupt */
    TMIF14 = 0U;    /* clear INTTM14 interrupt flag */
    TMMK15 = 1U;    /* disable INTTM15 interrupt */
    TMIF15 = 0U;    /* clear INTTM15 interrupt flag */
    TMMK16 = 1U;    /* disable INTTM16 interrupt */
    TMIF16 = 0U;    /* clear INTTM16 interrupt flag */
    TMMK17 = 1U;    /* disable INTTM17 interrupt */
    TMIF17 = 0U;    /* clear INTTM17 interrupt flag */
    /* Set INTTM10 level 3 priority */
    TMPR110 = 1U;
    TMPR010 = 1U;
    /* Channel 0 is used as master channel for PWM output function */
    TMR10 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_TRIGGER_SOFTWARE | 
            _0001_TAU_MODE_PWM_MASTER;
    TDR10 = _F9FF_TAU_TDR10_VALUE;
    TO1 &= (uint16_t)~_0001_TAU_CH0_OUTPUT_VALUE_1;
    TOE1 &= (uint16_t)~_0001_TAU_CH0_OUTPUT_ENABLE;
    /* Channel 1 is used as slave channel for PWM output function */
    TMR11 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR11 = _7D00_TAU_TDR11_VALUE;
    TOM1 |= _0002_TAU_CH1_SLAVE_OUTPUT;
    TOL1 |= _0002_TAU_CH1_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0002_TAU_CH1_OUTPUT_VALUE_1;
//    TOE1 |= _0002_TAU_CH1_OUTPUT_ENABLE;
    /* Channel 2 is used as slave channel for PWM output function */
    TMR12 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR12 = _7D00_TAU_TDR12_VALUE;
    TOM1 |= _0004_TAU_CH2_SLAVE_OUTPUT;
    TOL1 |= _0004_TAU_CH2_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0004_TAU_CH2_OUTPUT_VALUE_1;
//    TOE1 |= _0004_TAU_CH2_OUTPUT_ENABLE;
    /* Channel 3 is used as slave channel for PWM output function */
    TMR13 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR13 = _7D00_TAU_TDR13_VALUE;
    TOM1 |= _0008_TAU_CH3_SLAVE_OUTPUT;
    TOL1 |= _0008_TAU_CH3_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0008_TAU_CH3_OUTPUT_VALUE_1;
//    TOE1 |= _0008_TAU_CH3_OUTPUT_ENABLE;
    /* Channel 4 is used as slave channel for PWM output function */
    TMR14 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR14 = _7D00_TAU_TDR14_VALUE;
    TOM1 |= _0010_TAU_CH4_SLAVE_OUTPUT;
    TOL1 |= _0010_TAU_CH4_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0010_TAU_CH4_OUTPUT_VALUE_1;
//    TOE1 |= _0010_TAU_CH4_OUTPUT_ENABLE;
    /* Channel 5 is used as slave channel for PWM output function */
    TMR15 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR15 = _7D00_TAU_TDR15_VALUE;
    TOM1 |= _0020_TAU_CH5_SLAVE_OUTPUT;
    TOL1 |= _0020_TAU_CH5_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0020_TAU_CH5_OUTPUT_VALUE_1;
//    TOE1 |= _0020_TAU_CH5_OUTPUT_ENABLE;
    /* Channel 6 is used as slave channel for PWM output function */
    TMR16 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR16 = _7D00_TAU_TDR16_VALUE;
    TOM1 |= _0040_TAU_CH6_SLAVE_OUTPUT;
    TOL1 |= _0040_TAU_CH6_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0040_TAU_CH6_OUTPUT_VALUE_1;
//    TOE1 |= _0040_TAU_CH6_OUTPUT_ENABLE;
    /* Channel 7 is used as slave channel for PWM output function */
    TMR17 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_COMBINATION_SLAVE | 
            _0400_TAU_TRIGGER_MASTER_INT | _0009_TAU_MODE_PWM_SLAVE;
    TDR17 = _7D00_TAU_TDR17_VALUE;
    TOM1 |= _0080_TAU_CH7_SLAVE_OUTPUT;
    TOL1 |= _0080_TAU_CH7_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0080_TAU_CH7_OUTPUT_VALUE_1;
//    TOE1 |= _0080_TAU_CH7_OUTPUT_ENABLE;
    /* Set TO11 pin */
//    PMCT6 &= 0xDFU;
//    P6 &= 0xDFU;
//    PM6 &= 0xDFU;
    /* Set TO12 pin */
//    PMCT6 &= 0xBFU;
//    P6 &= 0xBFU;
//    PM6 &= 0xBFU;
    /* Set TO13 pin */
//    PMCT6 &= 0x7FU;
//    P6 &= 0x7FU;
//    PM6 &= 0x7FU;
    /* Set TO14 pin */
//    P10 &= 0xF7U;
//    PM10 &= 0xF7U;
    /* Set TO15 pin */
//    P10 &= 0xEFU;
//    PM10 &= 0xEFU;
    /* Set TO16 pin */
//    P10 &= 0xDFU;
//    PM10 &= 0xDFU;
    /* Set TO17 pin */
//    P10 &= 0xBFU;
//    PM10 &= 0xBFU;

    R_Config_TAU1_0_PWM_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_0_PWM_Start
* Description  : This function starts the TAU1 channel0 counter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_0_PWM_Start(void)
{
    TMIF10 = 0U;    /* clear INTTM10 interrupt flag */
    TMMK10 = 0U;    /* enable INTTM10 interrupt */

//    TOE1 |= (_0080_TAU_CH7_OUTPUT_ENABLE | _0040_TAU_CH6_OUTPUT_ENABLE | _0020_TAU_CH5_OUTPUT_ENABLE | 
//            _0010_TAU_CH4_OUTPUT_ENABLE | _0008_TAU_CH3_OUTPUT_ENABLE | _0004_TAU_CH2_OUTPUT_ENABLE | 
//            _0002_TAU_CH1_OUTPUT_ENABLE);
    TS1 |= (_0080_TAU_CH7_START_TRG_ON | _0040_TAU_CH6_START_TRG_ON | _0020_TAU_CH5_START_TRG_ON | 
           _0010_TAU_CH4_START_TRG_ON | _0008_TAU_CH3_START_TRG_ON | _0004_TAU_CH2_START_TRG_ON | 
           _0002_TAU_CH1_START_TRG_ON | _0001_TAU_CH0_START_TRG_ON);
}

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_0_PWM_Stop
* Description  : This function stops the TAU1 channel0 counter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_0_PWM_Stop(void)
{
    TT1 |= (_0080_TAU_CH7_STOP_TRG_ON | _0040_TAU_CH6_STOP_TRG_ON | _0020_TAU_CH5_STOP_TRG_ON | 
           _0010_TAU_CH4_STOP_TRG_ON | _0008_TAU_CH3_STOP_TRG_ON | _0004_TAU_CH2_STOP_TRG_ON | 
           _0002_TAU_CH1_STOP_TRG_ON | _0001_TAU_CH0_STOP_TRG_ON);
    TOE1 &= (uint16_t) ~(_0080_TAU_CH7_OUTPUT_ENABLE | _0040_TAU_CH6_OUTPUT_ENABLE | _0020_TAU_CH5_OUTPUT_ENABLE | 
            _0010_TAU_CH4_OUTPUT_ENABLE | _0008_TAU_CH3_OUTPUT_ENABLE | _0004_TAU_CH2_OUTPUT_ENABLE | 
            _0002_TAU_CH1_OUTPUT_ENABLE);
    TMMK10 = 1U;    /* disable INTTM10 interrupt */
    TMIF10 = 0U;    /* clear INTTM10 interrupt flag */
}

/* Start user code for adding. Do not edit comment generated here */


void R_Config_TAU1_1_PWM_Create(void)
{
    /* Set TO11 pin */
    PMCT6 &= 0xDFU;
    P6 &= 0xDFU;
    PM6 &= 0xDFU;
}

void R_Config_TAU1_2_PWM_Create(void)
{
    /* Set TO12 pin */
    PMCT6 &= 0xBFU;
    P6 &= 0xBFU;
    PM6 &= 0xBFU;
}


void R_Config_TAU1_3_PWM_Create(void)
{
    /* Set TO13 pin */
    PMCT6 &= 0x7FU;
    P6 &= 0x7FU;
    PM6 &= 0x7FU;
}

void R_Config_TAU1_4_PWM_Create(void)
{
    /* Set TO14 pin */
    P10 &= 0xF7U;
    PM10 &= 0xF7U;
}

void R_Config_TAU1_5_PWM_Create(void)
{
    /* Set TO15 pin */
    P10 &= 0xEFU;
    PM10 &= 0xEFU;
}

void R_Config_TAU1_6_PWM_Create(void)
{
    /* Set TO16 pin */
    P10 &= 0xDFU;
    PM10 &= 0xDFU;
}

void R_Config_TAU1_7_PWM_Create(void)
{
    /* Set TO17 pin */
    P10 &= 0xBFU;
    PM10 &= 0xBFU;
}

void R_Config_TAU1_01_PWM_Start(void)
{
    g_tau_output_enable2 |= _0002_TAU_CH1_OUTPUT_ENABLE;
}

void R_Config_TAU1_02_PWM_Start(void)
{
    g_tau_output_enable2 |= _0004_TAU_CH2_OUTPUT_ENABLE;
}

void R_Config_TAU1_03_PWM_Start(void)
{
    g_tau_output_enable2 |= _0008_TAU_CH3_OUTPUT_ENABLE;
}

void R_Config_TAU1_04_PWM_Start(void)
{
    g_tau_output_enable2 |= _0010_TAU_CH4_OUTPUT_ENABLE;
}

void R_Config_TAU1_05_PWM_Start(void)
{
    g_tau_output_enable2 |=  _0020_TAU_CH5_OUTPUT_ENABLE;
}

void R_Config_TAU1_06_PWM_Start(void)
{
    g_tau_output_enable2 |=  _0040_TAU_CH6_OUTPUT_ENABLE;
}

void R_Config_TAU1_07_PWM_Start(void)
{
    g_tau_output_enable2 |=  _0080_TAU_CH7_OUTPUT_ENABLE;
}

void R_Config_TAU1_01_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0002_TAU_CH1_OUTPUT_ENABLE;
    TOE1 &= ~_0002_TAU_CH1_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0002_TAU_CH1_OUTPUT_VALUE_1;
}

void R_Config_TAU1_02_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0004_TAU_CH2_OUTPUT_ENABLE;
    TOE1 &= ~_0004_TAU_CH2_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0004_TAU_CH2_OUTPUT_VALUE_1;
}


void R_Config_TAU1_03_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0008_TAU_CH3_OUTPUT_ENABLE;
    TOE1 &= ~_0008_TAU_CH3_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0008_TAU_CH3_OUTPUT_VALUE_1;
}

void R_Config_TAU1_04_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0010_TAU_CH4_OUTPUT_ENABLE;
    TOE1 &= ~_0010_TAU_CH4_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0010_TAU_CH4_OUTPUT_VALUE_1;
}

void R_Config_TAU1_05_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0020_TAU_CH5_OUTPUT_ENABLE;
    TOE1 &= ~_0020_TAU_CH5_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0020_TAU_CH5_OUTPUT_VALUE_1;
}

void R_Config_TAU1_06_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0040_TAU_CH6_OUTPUT_ENABLE;
    TOE1 &= ~_0040_TAU_CH6_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0040_TAU_CH6_OUTPUT_VALUE_1;
}

void R_Config_TAU1_07_PWM_Stop(void)
{
    g_tau_output_enable2 &= ~_0080_TAU_CH7_OUTPUT_ENABLE;
    TOE1 &= ~_0080_TAU_CH7_OUTPUT_ENABLE;
    TO1 &= (uint16_t)~_0080_TAU_CH7_OUTPUT_VALUE_1;
}

void R_Config_TAU1_0_PWM_Enable_IRQ(void)
{
    TMIF10 = 0U;    /* clear INTTM00 interrupt flag */
    TMMK10 = 0U;    /* enable INTTM00 interrupt */
}

/* End user code. Do not edit comment generated here */
