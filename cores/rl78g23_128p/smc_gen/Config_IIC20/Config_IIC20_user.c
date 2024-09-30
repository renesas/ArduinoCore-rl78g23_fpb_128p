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
* File Name        : Config_IIC20_user.c
* Component Version: 1.5.1
* Device(s)        : R7F100GLGxFB
* Description      : This file implements device driver for Config_IIC20.
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
#include "Config_IIC20.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
extern volatile uint8_t g_iic20_master_status_flag;      /* iic20 start flag for send address check */
extern volatile uint8_t g_iica20_master_status_flag;      /* iic20 master flag */
extern volatile uint8_t * gp_iic20_tx_address;           /* iic20 send data pointer by master mode */
extern volatile uint16_t g_iic20_tx_cnt;               /* iic20 send data size by master mode */
extern volatile uint8_t * gp_iic20_rx_address;           /* iic20 receive data pointer by master mode */
extern volatile uint16_t g_iic20_rx_cnt;               /* iic20 receive data size by master mode */
extern uint16_t g_iic20_rx_len;                       /* iic20 receive data length by master mode */
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_IIC20_Create_UserInit
* Description  : This function adds user code after initializing IIC20.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_IIC20_Create_UserInit(void)
{
    /* Start user code for user init. Do not edit comment generated here */
//    POM1 |= 0x30U;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_IIC20_callback_master_sendend
* Description  : This function is a callback function when IIC20 finishes master transmission.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_IIC20_callback_master_sendend(void)
{
    /* Start user code for r_Config_IIC20_callback_master_sendend. Do not edit comment generated here */
    R_Config_IIC20_StopCondition();
    g_iica20_master_status_flag = _40_IICA_DATA_COMPLETE;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_IIC20_callback_master_receiveend
* Description  : This function is a callback function when IIC20 finishes master reception.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
static void r_Config_IIC20_callback_master_receiveend(void)
{
    /* Start user code for r_Config_IIC20_callback_master_receiveend. Do not edit comment generated here */
    R_Config_IIC20_StopCondition();
    g_iica20_master_status_flag = _40_IICA_DATA_COMPLETE;
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_IIC20_callback_master_error
* Description  : This function is a callback function when IIC20 master error occurs.
* Arguments    : flag -
*                    status flag
* Return Value : None
***********************************************************************************************************************/
static void r_Config_IIC20_callback_master_error(MD_STATUS flag)
{
    /* Start user code for r_Config_IIC20_callback_master_error. Do not edit comment generated here */
    R_Config_IIC20_StopCondition();
    g_iica20_master_status_flag = (g_iica20_master_status_flag & 0xF0U) | (flag & 0x0FU);
    /* End user code. Do not edit comment generated here */
}

/***********************************************************************************************************************
* Function Name: r_Config_IIC20_interrupt
* Description  : This function is INTIIC20 interrupt service routine.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void r_Config_IIC20_interrupt(void)
{
    
    volatile uint16_t w_count;

    /* Set delay to secure a hold time after SDA, SDL output. The delay time depend on slave device.
       Here set 20us as default base on current clock */
    for (w_count = 0U; w_count <= IIC20_WAITTIME_2; w_count++)
    {
        NOP();
    }

    if ((0x0002U == (SSR10 & _0002_SAU_PARITY_ERROR)) && (0U != g_iic20_tx_cnt))
    {
        SIR10 |= _0002_SAU_SIRMN_PECTMN;    /* clear ACK error detection flag */
        R_Config_IIC20_StopCondition();
        r_Config_IIC20_callback_master_error(MD_NACK);
    }
    else if((0x0001U == (SSR10 & _0001_SAU_OVERRUN_ERROR)) && (0U != g_iic20_tx_cnt))
    {
    	g_iica20_master_status_flag |= _80_IICA_ADDRESS_COMPLETE;
        SIR10 |= _0001_SAU_SIRMN_OVCTMN;    /* clear overrun error detection flag */
        R_Config_IIC20_StopCondition();
        r_Config_IIC20_callback_master_error(MD_OVERRUN);
    }
    else
    {
    	g_iica20_master_status_flag |= _80_IICA_ADDRESS_COMPLETE;
        /* Control for master send */
        if (1U == (g_iic20_master_status_flag & _01_SAU_IIC_SEND_FLAG))
        {
            if (g_iic20_tx_cnt > 0U)
            {
                SIO20 = *gp_iic20_tx_address;
                gp_iic20_tx_address++;
                g_iic20_tx_cnt--;
            }
            else
            {
                /* IIC master transmission finishes and a callback function can be called here. */
                r_Config_IIC20_callback_master_sendend();
            }
        }
        /* Control for master receive */
        else 
        {
            if (0U == (g_iic20_master_status_flag & _04_SAU_IIC_SENDED_ADDRESS_FLAG))
            {
                ST1 |= _0001_SAU_CH0_STOP_TRG_ON;
                SCR10 &= (uint16_t)~_C000_SAU_RECEPTION_TRANSMISSION;
                SCR10 |= _4000_SAU_RECEPTION;
                SS1 |= _0001_SAU_CH0_START_TRG_ON;
                g_iic20_master_status_flag |= _04_SAU_IIC_SENDED_ADDRESS_FLAG;
                
                if (1U == g_iic20_rx_len)
                {
                    SOE1 &= (uint16_t)~_0001_SAU_CH0_OUTPUT_ENABLE;    /* disable IIC20 out */
                }
                
                SIO20 = 0xFFU;
            }
            else
            {
                if (g_iic20_rx_cnt < g_iic20_rx_len)
                {
                    *gp_iic20_rx_address = SIO20;
                    gp_iic20_rx_address++;
                    g_iic20_rx_cnt++;
                    
                    if ((g_iic20_rx_len - 1U) == g_iic20_rx_cnt)
                    {
                        SOE1 &= (uint16_t)~_0001_SAU_CH0_OUTPUT_ENABLE;    /* disable IIC20 out */
                        SIO20 = 0xFFU;
                    }
                    else if (g_iic20_rx_cnt == g_iic20_rx_len)
                    {
                        /* IIC master reception finishes and a callback function can be called here. */
                        r_Config_IIC20_callback_master_receiveend();
                    }
                    else
                    {
                        SIO20 = 0xFFU;
                    }
                }
            }
        }
    }
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

