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
* File Name        : Config_INTC.c
* Component Version: 1.4.0
* Device(s)        : R7F100GSNxFB
* Description      : This file implements device driver for Config_INTC.
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

/* Start user code for include. Do not edit comment generated here */
#include "wiring_private.h"
#include "Config_INTC.h"
#include <stdio.h>
/* End user code. Do not edit comment generated here */
#include "r_cg_userdefine.h"

/***********************************************************************************************************************
Global variables and functions
***********************************************************************************************************************/
/* Start user code for global. Do not edit comment generated here */
typedef struct {
    uint8_t intNum;
    uint8_t pinNum;
    PinStatus modeNum;
} Num;
Num value;
/* End user code. Do not edit comment generated here */

/***********************************************************************************************************************
* Function Name: R_Config_INTC_Create
* Description  : This function initializes the INTC module.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_Create(void)
{
    PMK0 = 1U;    /* disable INTP0 operation */
    PIF0 = 0U;    /* clear INTP0 interrupt flag */
    PMK1 = 1U;    /* disable INTP1 operation */
    PIF1 = 0U;    /* clear INTP1 interrupt flag */

    PMK4 = 1U;    /* disable INTP4 operation */
    PIF4 = 0U;    /* clear INTP4 interrupt flag */
    PMK5 = 1U;    /* disable INTP5 operation */
    PIF5 = 0U;    /* clear INTP5 interrupt flag */
    PMK6 = 1U;    /* disable INTP6 operation */
    PIF6 = 0U;    /* clear INTP6 interrupt flag */

    PMK8 = 1U;    /* disable INTP8 operation */
    PIF8 = 0U;    /* clear INTP8 interrupt flag */
    PMK9 = 1U;    /* disable INTP9 operation */
    PIF9 = 0U;    /* clear INTP9 interrupt flag */
    PMK10 = 1U;    /* disable INTP10 operation */
    PIF10 = 0U;    /* clear INTP10 interrupt flag */
    PMK11 = 1U;    /* disable INTP11 operation */
    PIF11 = 0U;    /* clear INTP11 interrupt flag */
    /* Set INTP0 low priority */
    PPR10 = 1U;
    PPR00 = 1U;
    /* Set INTP1 low priority */
    PPR11 = 1U;
    PPR01 = 1U;
    /* Set INTP2 low priority */

    /* Set INTP4 low priority */
    PPR14 = 1U;
    PPR04 = 1U;
    /* Set INTP5 low priority */
    PPR15 = 1U;
    PPR05 = 1U;
    /* Set INTP6 low priority */
    PPR16 = 1U;
    PPR06 = 1U;
    /* Set INTP7 low priority */

    /* Set INTP8 low priority */
    PPR18 = 1U;
    PPR08 = 1U;
    /* Set INTP9 low priority */
    PPR19 = 1U;
    PPR09 = 1U;
    /* Set INTP10 low priority */
    PPR110 = 1U;
    PPR010 = 1U;
    /* Set INTP11 low priority */
    PPR111 = 1U;
    PPR011 = 1U;
/*
    EGN0 = _10_INTP4_EDGE_FALLING_SEL | _08_INTP3_EDGE_FALLING_SEL | _02_INTP1_EDGE_FALLING_SEL | 
           _01_INTP0_EDGE_FALLING_SEL;
    EGP0 = _00_INTP4_EDGE_RISING_UNSEL | _00_INTP3_EDGE_RISING_UNSEL | _00_INTP1_EDGE_RISING_UNSEL | 
           _00_INTP0_EDGE_RISING_UNSEL;
    EGN1 = _08_INTP11_EDGE_FALLING_SEL | _04_INTP10_EDGE_FALLING_SEL | _02_INTP9_EDGE_FALLING_SEL | 
           _01_INTP8_EDGE_FALLING_SEL;
    EGP1 = _00_INTP11_EDGE_RISING_UNSEL | _00_INTP10_EDGE_RISING_UNSEL | _00_INTP9_EDGE_RISING_UNSEL | 
           _00_INTP8_EDGE_RISING_UNSEL;
*/
    /* Set INTP1 pin */
//    PM4 |= 0x40U;
    /* Set INTP3 pin */
//    PMCT3 &= 0xFEU;
//    PM3 |= 0x01U;
    /* Set INTP4 pin */
//    PMCT3 &= 0xFDU;
//    PM3 |= 0x02U;
    /* Set INTP8 pin */
//    PMCT7 &= 0xEFU;
//    PM7 |= 0x10U;
    /* Set INTP9 pin */
//    PMCT7 &= 0xDFU;
//    PM7 |= 0x20U;
    /* Set INTP10 pin */
//    PMCT7 &= 0xBFU;
//    PM7 |= 0x40U;
    /* Set INTP11 pin */
//    PMCT7 &= 0x7FU;
//    PM7 |= 0x80U;

    R_Config_INTC_Create_UserInit();
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP0_Start
* Description  : This function clears INTP0 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP0_Start(void)
{
    PIF0 = 0U;    /* clear INTP0 interrupt flag */
    PMK0 = 0U;    /* enable INTP0 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP0_Stop
* Description  : This function disables INTP0 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP0_Stop(void)
{
    PMK0 = 1U;    /* disable INTP0 interrupt */
    PIF0 = 0U;    /* clear INTP0 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP1_Start
* Description  : This function clears INTP1 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP1_Start(void)
{
    PIF1 = 0U;    /* clear INTP1 interrupt flag */
    PMK1 = 0U;    /* enable INTP1 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP1_Stop
* Description  : This function disables INTP1 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP1_Stop(void)
{
    PMK1 = 1U;    /* disable INTP1 interrupt */
    PIF1 = 0U;    /* clear INTP1 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP4_Start
* Description  : This function clears INTP4 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP4_Start(void)
{
    PIF4 = 0U;    /* clear INTP4 interrupt flag */
    PMK4 = 0U;    /* enable INTP4 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP4_Stop
* Description  : This function disables INTP4 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP4_Stop(void)
{
    PMK4 = 1U;    /* disable INTP4 interrupt */
    PIF4 = 0U;    /* clear INTP4 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP5_Start
* Description  : This function clears INTP5 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP5_Start(void)
{
    PIF5 = 0U;    /* clear INTP5 interrupt flag */
    PMK5 = 0U;    /* enable INTP5 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP5_Stop
* Description  : This function disables INTP5 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP5_Stop(void)
{
    PMK5 = 1U;    /* disable INTP5 interrupt */
    PIF5 = 0U;    /* clear INTP5 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP6_Start
* Description  : This function clears INTP6 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP6_Start(void)
{
    PIF6 = 0U;    /* clear INTP6 interrupt flag */
    PMK6 = 0U;    /* enable INTP6 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP6_Stop
* Description  : This function disables INTP6 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP6_Stop(void)
{
    PMK6 = 1U;    /* disable INTP6 interrupt */
    PIF6 = 0U;    /* clear INTP6 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP8_Start
* Description  : This function clears INTP8 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP8_Start(void)
{
    PIF8 = 0U;    /* clear INTP8 interrupt flag */
    PMK8 = 0U;    /* enable INTP8 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP8_Stop
* Description  : This function disables INTP8 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP8_Stop(void)
{
    PMK8 = 1U;    /* disable INTP8 interrupt */
    PIF8 = 0U;    /* clear INTP8 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP9_Start
* Description  : This function clears INTP9 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP9_Start(void)
{
    PIF9 = 0U;    /* clear INTP9 interrupt flag */
    PMK9 = 0U;    /* enable INTP9 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP9_Stop
* Description  : This function disables INTP9 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP9_Stop(void)
{
    PMK9 = 1U;    /* disable INTP9 interrupt */
    PIF9 = 0U;    /* clear INTP9 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP10_Start
* Description  : This function clears INTP10 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP10_Start(void)
{
    PIF10 = 0U;    /* clear INTP10 interrupt flag */
    PMK10 = 0U;    /* enable INTP10 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP10_Stop
* Description  : This function disables INTP10 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP10_Stop(void)
{
    PMK10 = 1U;    /* disable INTP10 interrupt */
    PIF10 = 0U;    /* clear INTP10 interrupt flag */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP11_Start
* Description  : This function clears INTP11 interrupt flag and enables interrupt.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP11_Start(void)
{
    PIF11 = 0U;    /* clear INTP11 interrupt flag */
    PMK11 = 0U;    /* enable INTP11 interrupt */
}

/***********************************************************************************************************************
* Function Name: R_Config_INTC_INTP11_Stop
* Description  : This function disables INTP11 interrupt and clears interrupt flag.
* Arguments    : None
* Return Value : None
***********************************************************************************************************************/
void R_Config_INTC_INTP11_Stop(void)
{
    PMK11 = 1U;    /* disable INTP11 interrupt */
    PIF11 = 0U;    /* clear INTP11 interrupt flag */
}

/* Start user code for adding. Do not edit comment generated here */
void R_Config_INTC_Create_Mode(uint8_t interruptNum, PinStatus  mode)
{
    switch (interruptNum) {
    case 0:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_0;
        value.modeNum = mode;

        if (value.modeNum == FALLING) {
            EGP0_bit.no1 = 0U;
            EGN0_bit.no1 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP0_bit.no1 = 1U;
            EGN0_bit.no1 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP0_bit.no1 = 1U;
            EGN0_bit.no1 = 1U;
        }
        else{
            EGP0_bit.no1 = 0U;
            EGN0_bit.no1 = 0U;
        }
        break;
    case 1:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_1;
        value.modeNum = mode;

        if (value.modeNum == FALLING) {
            EGP0_bit.no4 = 0U;
            EGN0_bit.no4 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP0_bit.no4 = 1U;
            EGN0_bit.no4 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP0_bit.no4 = 1U;
            EGN0_bit.no4 = 1U;
        }
        else{
            EGP0_bit.no4 = 0U;
            EGN0_bit.no4 = 0U;
        }
        break;
    case 2:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_2;
        value.modeNum = mode;

        if (value.modeNum == FALLING) {
            EGP0_bit.no0 = 0U;
            EGN0_bit.no0 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP0_bit.no0 = 1U;
            EGN0_bit.no0 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP0_bit.no0 = 1U;
            EGN0_bit.no0 = 1U;
        }
        else{
            EGP0_bit.no0 = 0U;
            EGN0_bit.no0 = 0U;
        }
        break;
    case 3:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_3;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP1_bit.no0 = 0U;
            EGN1_bit.no0 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP1_bit.no0 = 1U;
            EGN1_bit.no0 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP1_bit.no0 = 1U;
            EGN1_bit.no0 = 1U;
        }
        else{
            EGP1_bit.no0 = 0U;
            EGN1_bit.no0 = 0U;
        }
        break;
    case 4:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_4;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP1_bit.no1 = 0U;
            EGN1_bit.no1 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP1_bit.no1 = 1U;
            EGN1_bit.no1 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP1_bit.no1 = 1U;
            EGN1_bit.no1 = 1U;
        }
        else{
            EGP1_bit.no1 = 0U;
            EGN1_bit.no1 = 0U;
        }
        break;
    case 5:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_5;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP1_bit.no2 = 0U;
            EGN1_bit.no2 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP1_bit.no2 = 1U;
            EGN1_bit.no2 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP1_bit.no2 = 1U;
            EGN1_bit.no2 = 1U;
        }
        else{
            EGP1_bit.no2 = 0U;
            EGN1_bit.no2 = 0U;
        }
        break;
    case 6:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_6;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP1_bit.no3 = 0U;
            EGN1_bit.no3 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP1_bit.no3 = 1U;
            EGN1_bit.no3 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP1_bit.no3 = 1U;
            EGN1_bit.no3 = 1U;
        }
        else{
            EGP1_bit.no3 = 0U;
            EGN1_bit.no3 = 0U;
        }
        break;
    case 7:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_7;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP0_bit.no6 = 0U;
            EGN0_bit.no6 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP0_bit.no6 = 1U;
            EGN0_bit.no6 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP0_bit.no6 = 1U;
            EGN0_bit.no6 = 1U;
        }
        else{
            EGP0_bit.no6 = 0U;
            EGN0_bit.no6 = 0U;
        }
        break;
    case 8:
        value.intNum = interruptNum;
        value.pinNum = EXTERNAL_INTERRUPT_8;
        value.modeNum = mode;
        if (value.modeNum == FALLING) {
            EGP0_bit.no5 = 0U;
            EGN0_bit.no5 = 1U;
        }
        else if (value.modeNum == RISING) {
            EGP0_bit.no5 = 1U;
            EGN0_bit.no5 = 0U;
            }
        else if (value.modeNum == CHANGE){
            EGP0_bit.no5 = 1U;
            EGN0_bit.no5 = 1U;
        }
        else{
            EGP0_bit.no5 = 0U;
            EGN0_bit.no5 = 0U;
        }
        break;
    }
}



void R_Config_INTC_INTP_Start(void){
    if(value.pinNum == EXTERNAL_INTERRUPT_0){
        R_Config_INTC_INTP1_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_1){
        R_Config_INTC_INTP4_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_2){
        R_Config_INTC_INTP0_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_3){
        R_Config_INTC_INTP8_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_4){
        R_Config_INTC_INTP9_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_5){
        R_Config_INTC_INTP10_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_6){
        R_Config_INTC_INTP11_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_7){
        R_Config_INTC_INTP6_Start();
    }
    else if (value.pinNum == EXTERNAL_INTERRUPT_8){
        R_Config_INTC_INTP5_Start();
    }
    else
    {
        NOP();
    }
}

void R_Config_INTC_INTP_Stop(uint8_t interruptNum){
    switch (interruptNum) {
        case 0:
            R_Config_INTC_INTP1_Stop();
            break;
        case 1:
            R_Config_INTC_INTP4_Stop();
            break;
        case 2:
            R_Config_INTC_INTP0_Stop();
            break;
        case 3:
            R_Config_INTC_INTP8_Stop();
            break;
        case 4:
            R_Config_INTC_INTP9_Stop();
            break;
        case 5:
            R_Config_INTC_INTP10_Stop();
            break;
        case 6:
           R_Config_INTC_INTP11_Stop();
           break;
        case 7:
           R_Config_INTC_INTP6_Stop();
           break;
        case 8:
           R_Config_INTC_INTP5_Stop();
           break;
        default:
           NOP();
           break;
    }
}

/* End user code. Do not edit comment generated here */
