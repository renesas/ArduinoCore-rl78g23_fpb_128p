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
* File Name        : Config_TAU1_0_PWM.h
* Component Version: 1.6.0
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_TAU1_0_PWM.
* Creation Date    : 
***********************************************************************************************************************/


/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_tau.h"

#ifndef CFG_Config_TAU1_0_PWM_H
#define CFG_Config_TAU1_0_PWM_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
#define _F9FF_TAU_TDR10_VALUE                              (0xF9FFU)    /* 16-bit timer data register 10 (TDR10) */
#define _7D00_TAU_TDR11_VALUE                              (0x7D00U)    /* 16-bit timer data register 11 (TDR11) */
#define _7D00_TAU_TDR12_VALUE                              (0x7D00U)    /* 16-bit timer data register 12 (TDR12) */
#define _7D00_TAU_TDR13_VALUE                              (0x7D00U)    /* 16-bit timer data register 13 (TDR13) */
#define _7D00_TAU_TDR14_VALUE                              (0x7D00U)    /* 16-bit timer data register 14 (TDR14) */
#define _7D00_TAU_TDR15_VALUE                              (0x7D00U)    /* 16-bit timer data register 15 (TDR15) */
#define _7D00_TAU_TDR16_VALUE                              (0x7D00U)    /* 16-bit timer data register 16 (TDR16) */
#define _7D00_TAU_TDR17_VALUE                              (0x7D00U)    /* 16-bit timer data register 17 (TDR17) */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_TAU1_0_PWM_Create(void);
void R_Config_TAU1_0_PWM_Start(void);
void R_Config_TAU1_0_PWM_Stop(void);
void R_Config_TAU1_0_PWM_Create_UserInit(void);
/* Start user code for function. Do not edit comment generated here */
void R_Config_TAU1_1_PWM_Create(void);
void R_Config_TAU1_2_PWM_Create(void);
void R_Config_TAU1_3_PWM_Create(void);
void R_Config_TAU1_4_PWM_Create(void);
void R_Config_TAU1_5_PWM_Create(void);
void R_Config_TAU1_6_PWM_Create(void);
void R_Config_TAU1_7_PWM_Create(void);

void R_Config_TAU1_01_PWM_Start(void);
void R_Config_TAU1_02_PWM_Start(void);
void R_Config_TAU1_03_PWM_Start(void);
void R_Config_TAU1_04_PWM_Start(void);
void R_Config_TAU1_05_PWM_Start(void);
void R_Config_TAU1_06_PWM_Start(void);
void R_Config_TAU1_07_PWM_Start(void);

void R_Config_TAU1_01_PWM_Stop(void);
void R_Config_TAU1_02_PWM_Stop(void);
void R_Config_TAU1_03_PWM_Stop(void);
void R_Config_TAU1_04_PWM_Stop(void);
void R_Config_TAU1_05_PWM_Stop(void);
void R_Config_TAU1_06_PWM_Stop(void);
void R_Config_TAU1_07_PWM_Stop(void);

void R_Config_TAU1_0_PWM_Enable_IRQ(void);
/* End user code. Do not edit comment generated here */
#endif
