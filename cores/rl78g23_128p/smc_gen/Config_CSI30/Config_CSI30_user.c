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
* File Name        : Config_CSI30_user.c
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
extern volatile uint8_t * gp_csi30_tx_address;    /* csi30 send buffer address */
extern volatile uint16_t g_csi30_tx_count;        /* csi30 send data count */
extern volatile uint8_t * gp_csi30_rx_address;    /* csi30 receive buffer address */
/* Start user code for global. Do not edit comment generated here */
extern volatile uint16_t g_csi30_status_flag;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_CSI30_Create_UserInit
* Description  : This function adds user code after initializing the CSI30.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_CSI30_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
    R_Config_CSI30_ClearStatus();
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_CSI30_callback_sendend
* Description  : This function is a callback function when CSI30 finishes transmission.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_CSI30_callback_sendend(void)
{
    /* Start user code for r_Config_CSI30_callback_sendend. Do not edit comment generated here */
    g_csi30_status_flag |= _8000_SPI_STATUS_SENDEND;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_CSI30_callback_receiveend
* Description  : This function is a callback function when CSI30 finishes reception.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_CSI30_callback_receiveend(void)
{
    /* Start user code for r_Config_CSI30_callback_receiveend. Do not edit comment generated here */
    g_csi30_status_flag |= _4000_SPI_STATUS_RECEIVEEND;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_CSI30_callback_error
* Description  : This function is a callback function when CSI30 reception error occurs.
* Arguments    : err_type -
*                    error type value
* Return Value : None
***********************************************************************************************************************/
static void r_Config_CSI30_callback_error(uint8_t err_type)
{
    /* Start user code for r_Config_CSI30_callback_error. Do not edit comment generated here */
    g_csi30_status_flag = (g_csi30_status_flag & ~_00FF_SPI_STATUS_ERROR_MASK) | err_type;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_CSI30_interrupt
* Description  : This function is INTCSI30 interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_CSI30_interrupt(void)
{
    uint8_t err_type;
    volatile uint8_t sio_dummy;

    err_type = (uint8_t)(SSR12 & _0001_SAU_OVERRUN_ERROR);
    SIR12 = (uint16_t)err_type;

    if (1U == err_type)
    {
        r_Config_CSI30_callback_error(err_type);    /* overrun error occurs */
    }
    else
    {
        if (g_csi30_tx_count > 0U)
        {
            if (0U != gp_csi30_rx_address)
            {
                *gp_csi30_rx_address = SIO30;
                gp_csi30_rx_address++;
            }
            else
            {
                sio_dummy = SIO30;
            }

            if (0U != gp_csi30_tx_address)
            {
                SIO30 = *gp_csi30_tx_address;
                gp_csi30_tx_address++;
            }
            else
            {
                SIO30 = 0xFFU;
            }

            g_csi30_tx_count--;
        }
        else 
        {
            if (0U == g_csi30_tx_count)
            {
                if (0U != gp_csi30_rx_address)
                {
                    *gp_csi30_rx_address = SIO30;
                }
                else
                {
                    sio_dummy = SIO30;
                }
            }

            r_Config_CSI30_callback_sendend();    /* complete send */
            r_Config_CSI30_callback_receiveend();    /* complete receive */
        }
    }
}

/* Start user code for adding. Do not edit comment generated here */
/**********************************************************************************************************************
 * Function Name: R_Config_CSI30_ClearStatus
 * Description  : Clear the CSI module's status.
 * Arguments    : -
 * Return Value : -
 *********************************************************************************************************************/
void R_Config_CSI30_ClearStatus(void) {
    g_csi30_status_flag = _0000_SPI_STATUS_CLEAR;
}
/* End user code. Do not edit comment generated here */
