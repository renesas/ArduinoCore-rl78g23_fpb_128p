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
* File Name        : Config_UARTA1.c
* Component Version: 1.6.0
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_UARTA1.
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
#include "Config_UARTA1.h"
/* Start user code for include. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
volatile uint16_t g_uarta1_rx_total_num;
volatile uint8_t * gp_uarta1_rx_address;
volatile uint16_t g_uarta1_rx_num;
volatile uint8_t * gp_uarta1_tx_address;
volatile uint16_t g_uarta1_tx_count;
/* Start user code for global. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Create
* Description  : This function initializes the UARTA1 module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA1_Create(void)
{
    UARTAEN1 = 0U;
    UTMK1 = 1U;    /* disable INTUT1 interrupt */
    UTIF1 = 0U;    /* clear INTUT1 interrupt flag */
    URMK1 = 1U;    /* disable INTUR1 interrupt */
    URIF1 = 0U;    /* clear INTUR1 interrupt flag */
    UREMK1 = 1U;    /* disable INTURE1 interrupt */
    UREIF1 = 0U;    /* clear INTURE1 interrupt flag */
    /* Set INTUT1 low priority */
    UTPR11 = 1U;
    UTPR01 = 1U;
    /* Set INTUR1 low priority */
    URPR11 = 1U;
    URPR01 = 1U;
    /* Set INTURE1 low priority */
    UREPR11 = 1U;
    UREPR01 = 1U;
    BRGCA1 = _68_UARTA_OUTPUT_BAUDRATE;
    ASIMA11 = _00_UARTA_PARITY_NONE | _18_UARTA_TRANSFER_LENGTH_8 | _00_UARTA_STOP_BIT_1 | _02_UARTA_DIRECTION_LSB | 
              _00_UARTA_DATA_NORMAL;
    ASIMA10 = _02_UARTA_BUFFER_EMPTY | _00_UARTA_INTURE_OCCUR;
    UTA0CK |= _20_UARTA_FSEL_SELECT_FIHP;
    UTA1CK = _00_UARTA_CLKA1_OUTPUT_DISABLE | _04_UARTA1_SELECT_FSEL16;
    /* Set TxDA1 pin */
    P3 |= 0x10U;
    PM3 &= 0xEFU;
    /* Set RxDA1 pin */
    PM3 |= 0x08U;

    R_Config_UARTA1_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Start
* Description  : This function starts UARTA1 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA1_Start(void)
{
    volatile uint8_t w_count;

    UTIF1 = 0U;    /* clear INTUT1 interrupt flag */
    URIF1 = 0U;    /* clear INTUR1 interrupt flag */
    UREIF1 = 0U;    /* clear INTURE1 interrupt flag */
    UTMK1 = 0U;    /* enable INTUT1 interrupt */
    URMK1 = 0U;    /* enable INTUR1 interrupt */
    UREMK1 = 0U;    /* enable INTURE1 interrupt */
    UARTAEN1 = 1U;
    TXEA1 = 1U;

    /* Wait for the period of at least one cycle of the UARTA operation clock */
    for (w_count = 0U; w_count <= UARTA1_WAIT_1_CLOCK_CYCLE; w_count++)
    {
        NOP();
    }

    RXEA1 = 1U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Stop
* Description  : This function stops UARTA1 module operation.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA1_Stop(void)
{
    UTMK1 = 1U;    /* disable INTUT1 interrupt */
    URMK1 = 1U;    /* disable INTUR1 interrupt */
    UREMK1 = 1U;    /* disable INTURE1 interrupt */
    UTIF1 = 0U;    /* clear INTUT1 interrupt flag */
    URIF1 = 0U;    /* clear INTUR1 interrupt flag */
    UREIF1 = 0U;    /* clear INTURE1 interrupt flag */
    TXEA1 = 0U;
    RXEA1 = 0U;
    UARTAEN1 = 0U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Send
* Description  : This function sends UARTA1 data.
* Arguments    : tx_buf -
*                    transfer buffer pointer
*                tx_num -
*                    buffer size
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_UARTA1_Send(uint8_t * const tx_buf, uint16_t tx_num)
{
    MD_STATUS status = MD_OK;

    if (tx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        ISSMA1 = 1U;
        gp_uarta1_tx_address = tx_buf;
        g_uarta1_tx_count = tx_num;
        /* Disable UARTA1 interrupt operation */
        UTMK1 = 1U;
        TXBA1 = *gp_uarta1_tx_address;
        gp_uarta1_tx_address++;
        g_uarta1_tx_count--;
        /* Enable UARTA1 interrupt operation */
        UTMK1 = 0U;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Receive
* Description  : This function receives UARTA1 data.
* Arguments    : rx_buf -
*                    receive buffer pointer
*                rx_num -
*                    buffer size
* Return Value : status -
*                    MD_OK or MD_ARGERROR
***********************************************************************************************************************/
MD_STATUS R_Config_UARTA1_Receive(uint8_t * const rx_buf, uint16_t rx_num)
{
    MD_STATUS status = MD_OK;

    if (rx_num < 1U)
    {
        status = MD_ARGERROR;
    }
    else
    {
        /* Set receive setting */
        g_uarta1_rx_total_num = rx_num;
        gp_uarta1_rx_address = rx_buf;
        g_uarta1_rx_num = 0U;
    }

    return (status);
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Loopback_Enable
* Description  : This function enables the UARTA1 loopback function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA1_Loopback_Enable(void)
{
    ULBS5 = 1U;
}

/***********************************************************************************************************************
* Function Name: R_Config_UARTA1_Loopback_Disable
* Description  : This function disables the UARTA1 loopback function.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_UARTA1_Loopback_Disable(void)
{
    ULBS5 = 0U;
}

/* Start user code for adding. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
