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
* File Name        : Config_TAU1_3_Square_Wave.c
* Component Version: 1.4.0
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_TAU1_3_Square_Wave.
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
#include "Config_TAU1_3_Square_Wave.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_3_Square_Wave_Create
* Description  : This function initializes the TAU1 channel3 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_3_Square_Wave_Create(void)
{
    TPS1 &= _FFF0_TAU_CKM0_CLEAR;
    TPS1 |= _0000_TAU_CKM0_FCLK_0;
    /* Stop channel 3 */
    TT1 |= _0008_TAU_CH3_STOP_TRG_ON;
    /* Mask channel 3 interrupt */
    TMMK13 = 1U;    /* disable INTTM13 interrupt */
    TMIF13 = 0U;    /* clear INTTM13 interrupt flag */
    /* Set INTTM13 low priority */
    TMPR113 = 1U;
    TMPR013 = 1U;
    /* TAU13 used as square output function */
    TMR13 = _0000_TAU_CLOCK_SELECT_CKM0 | _0000_TAU_CLOCK_MODE_CKS | _0000_TAU_16BITS_MODE | 
            _0000_TAU_TRIGGER_SOFTWARE | _0000_TAU_MODE_INTERVAL_TIMER | _0001_TAU_START_INT_USED;
    TDR13 = _F9FF_TAU_TDR13_VALUE;
    TOM1 &= (uint16_t)~_0008_TAU_CH3_SLAVE_OUTPUT;
    TOL1 &= (uint16_t)~_0008_TAU_CH3_OUTPUT_LEVEL_L;
    TO1 &= (uint16_t)~_0008_TAU_CH3_OUTPUT_VALUE_1;
    TOE1 |= _0008_TAU_CH3_OUTPUT_ENABLE;
    /* Set TO13 pin */
    PMCT6 &= 0x7FU;
    P6 &= 0x7FU;
    PM6 &= 0x7FU;
    
    R_Config_TAU1_3_Square_Wave_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_3_Square_Wave_Start
* Description  : This function starts the TAU1 channel3 counter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_3_Square_Wave_Start(void)
{
    TMIF13 = 0U;    /* clear INTTM13 interrupt flag */
    TMMK13 = 0U;    /* enable INTTM13 interrupt */
    TOE1 |= _0008_TAU_CH3_OUTPUT_ENABLE;
    TS1 |= _0008_TAU_CH3_START_TRG_ON;
}

/***********************************************************************************************************************
* Function Name: R_Config_TAU1_3_Square_Wave_Stop
* Description  : This function stops the TAU1 channel3 counter.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_TAU1_3_Square_Wave_Stop(void)
{
    TT1 |= _0008_TAU_CH3_STOP_TRG_ON;
    TOE1 &= (uint16_t)~_0008_TAU_CH3_OUTPUT_ENABLE;
    /* Mask channel 3 interrupt */
    TMMK13 = 1U;    /* disable INTTM13 interrupt */
    TMIF13 = 0U;    /* clear INTTM13 interrupt flag */
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
