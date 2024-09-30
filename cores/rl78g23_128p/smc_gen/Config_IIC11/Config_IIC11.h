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
* File Name        : Config_IIC11.h
* Component Version: 1.5.1
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_IIC11.
* Creation Date    : 
***********************************************************************************************************************/


/***********************************************************************************************************************
Includes
***********************************************************************************************************************/
#include "r_cg_sau.h"
#include "r_cg_iica.h"

#ifndef CFG_Config_IIC11_H
#define CFG_Config_IIC11_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

#define _4E00_IIC11_DIVISOR                (0x4E00U)
#define IIC11_WAITTIME                     (13U)    /* wait for 5us as default,
                                                       please change the waiting time value according to the system */
#define IIC11_WAITTIME_2                   (53U)    /* wait for 20us as default,
                                                       please change the waiting time value according to the system */

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
void R_Config_IIC11_Create(void);
void R_Config_IIC11_Stop(void);
void R_Config_IIC11_StartCondition(void);
void R_Config_IIC11_StopCondition(void);
MD_STATUS R_Config_IIC11_Master_Send(uint8_t adr, uint8_t * const tx_buf, uint16_t tx_num, uint8_t wait);
MD_STATUS R_Config_IIC11_Master_Receive(uint8_t adr, uint8_t * const rx_buf, uint16_t rx_num, uint8_t wait);
void R_Config_IIC11_Create_UserInit(void);
/* Start user code for function. Do not edit comment generated here */
void R_Config_IIC11_Master_SetClock(uint32_t clock);
/* End user code. Do not edit comment generated here */
#endif
