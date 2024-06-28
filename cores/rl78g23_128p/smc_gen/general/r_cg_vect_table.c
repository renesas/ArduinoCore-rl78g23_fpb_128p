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
* File Name        : r_cg_vect_table.c
* Version          : 1.0.30
* Device(s)        : R7F100GSNxFB
* Description      : None
* Creation Date    : 
***********************************************************************************************************************/

#include "r_cg_macrodriver.h"
#include "r_cg_userdefine.h"

extern void PowerON_Reset (void);

const unsigned char Option_Bytes[]  __attribute__ ((section (".option_bytes"))) = {
    0xEFU, 0xFFU, 0xE8U, 0x04U
};

const unsigned char Security_Id[]  __attribute__ ((section (".security_id"))) = {
    0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U,0x00U
};

#define VEC          __attribute__ ((section (".vec")))
const void __near *HardwareVectors[] VEC = {
    // Address 0x0
    PowerON_Reset,
    // Secure for Debugging
    (void*)0xFFFF
};

#define VECT_SECT          __attribute__ ((section (".vects")))
const void __near *Vectors[] VECT_SECT = {
/*
 * INT_WDTI (0x4)
 */
INT_WDTI,

/*
 * INT_LVI (0x6)
 */
    INT_LVI,

/*
 * INT_P0 (0x8)
 */
//    INT_P0,
	r_Config_INTC_intp0_interrupt,
/*
 * INT_P1 (0xA)
 */
    r_Config_INTC_intp1_interrupt,

/*
 * INT_P2 (0xC)
 */
    INT_P2,
//    r_Config_INTC_intp2_interrupt,

/*
 * INT_P3 (0xE)
 */
    INT_P3,
//    r_Config_INTC_intp3_interrupt,

/*
 * INT_P4 (0x10)
 */
//    INT_P4,
    r_Config_INTC_intp4_interrupt,

/*
 * INT_P5 (0x12)
 */
    r_Config_INTC_intp5_interrupt,

/*
 * INT_CSI20/INT_IIC20/INT_ST2 (0x14)
 */
#if (defined(IIC_CHANNEL2) && IIC_CHANNEL2 == 2) || (defined(UART2_CHANNEL) && UART2_CHANNEL == 2 )
    r_Config_CSI20_UART2_interrupt_switching,
#else
    INT_CSI20,
#endif

/*
 * INT_CSI21/INT_IIC21/INT_SR2 (0x16)
 */
//    r_Config_UART2_interrupt_receive,
#if defined(CSI_CHANNEL5) || (defined(UART2_CHANNEL) && UART2_CHANNEL == 2 )
    r_Config_CSI21_UART2_interrupt_switching,
#else
    INT_CSI21,
#endif

/*
 * INT_SRE2/INT_TM11H (0x18)
 */
    r_Config_UART2_interrupt_error,

/*
 * INT_ELCL (0x1A)
 */
    INT_ELCL,

/*
 * INT_SMSE (0x1C)
 */
    INT_SMSE,

/*
 * INT_CSI00/INT_IIC00/INT_ST0 (0x1E)
 */
    r_Config_UART0_interrupt_send,

/*
 * INT_TM00 (0x20)
 */
	r_Config_TAU0_0_PWM_interrupt,

/*
 * INT_SRE0/INT_TM01H (0x22)
 */
    r_Config_UART0_interrupt_error,

/*
 * INT_CSI10/INT_IIC10/INT_ST1 (0x24)
 */
    r_Config_UART1_interrupt_send,

/*
 * INT_CSI11/INT_IIC11/INT_SR1 (0x26)
 */
    r_Config_UART1_interrupt_receive,

/*
 * INT_SRE1/INT_TM03H (0x28)
 */
    r_Config_UART1_interrupt_error,

/*
 * INT_IICA0 (0x2A)
 */
    r_Config_IICA0_interrupt,

/*
 * INT_CSI01/INT_IIC01/INT_SR0 (0x2C)
 */
    r_Config_UART0_interrupt_receive,

/*
 * INT_TM01 (0x2E)
 */
//		INT_TM01,
    r_Config_TAU0_1_Micros_interrupt,

/*
 * INT_TM02 (0x30)
 */
    r_Config_TAU0_2_Servo_interrupt,
//    INT_TM02,


/*
 * INT_TM03 (0x32)
 */
    INT_TM03,

/*
 * INT_AD (0x34)
 */
    r_Config_ADC_interrupt,
    
/*
 * INT_RTC (0x36)
 */
    r_Config_RTC_interrupt,

/*
 * INT_ITL (0x38)
 */
    r_itl_interrupt,

/*
 * INT_KR (0x3A)
 */
    INT_KR,

/*
 * INT_CSI30/INT_IIC30/INT_ST3 (0x3C)
 */
//    r_Config_UART3_interrupt_send,
//    INT_CSI30,
//    INT_IIC30,
#if defined(CSI_CHANNEL6) || ((defined(UART3_CHANNEL) && UART3_CHANNEL == 3 ))
    r_Config_CSI30_UART3_interrupt_switching,
#else
    INT_CSI31,
#endif

/*
 * INT_CSI31/INT_IIC31/INT_SR3 (0x3E)
 */
    r_Config_UART3_interrupt_receive,
//    INT_CSI31,
//    INT_IIC31,
//    INT_SR3,
// #if defined(CSI_CHANNEL6) | (defined(UART3_CHANNEL) & UART3_CHANNEL == 3 )
//    r_Config_CSI30_UART3_interrupt_switching,
//  #else
//    INT_CSI31,
// #endif

/*
 * INT_TM13 (0x40)
 */
    INT_TM13,

/*
 * INT_TM04 (0x42)
 */
    INT_TM04,

/*
 * INT_TM05 (0x44)
 */
//    r_Config_TAU0_5_Servo_interrupt,
    INT_TM05,
/*
 * INT_TM06 (0x46)
 */
    r_Config_TAU0_6_Servo_interrupt,

/*
 * INT_TM07 (0x48)
 */
    r_Config_TAU0_7_Servo_interrupt,

/*
 * INT_P6 (0x4A)
 */
    r_Config_INTC_intp6_interrupt,

/*
 * INT_P7 (0x4C)
 */
    INT_P7,
//    r_Config_INTC_intp7_interrupt,

/*
 * INT_P8 (0x4E)
 */
//    INT_P8,
    r_Config_INTC_intp8_interrupt,
    
/*
 * INT_P9 (0x50)
 */
//    INT_P9,
    r_Config_INTC_intp9_interrupt,

/*
 * INT_FL (0x52)
 */
    INT_FL,

/*
 * INT_CMP0/INT_P10 (0x54)
 */
//    INT_P10,
    r_Config_INTC_intp10_interrupt,

/*
 * INT_CMP1/INT_P11 (0x56)
 */
    r_Config_INTC_intp11_interrupt,

/*
 * INT_TM10/INT_URE0 (0x58)
 */
	r_Config_TAU1_0_PWM_interrupt,

/*
 * INT_TM11/INT_URE1 (0x5A)
 */
    r_Config_UARTA1_interrupt_error,

/*
 * INT_TM12 (0x5C)
 */
    INT_TM12,

/*
 * INT_SRE3/INT_TM13H (0x5E)
 */
    r_Config_UART3_interrupt_error,

/*
 * INT_CTSUWR (0x60)
 */
    INT_CTSUWR,

/*
 * INT_IICA1 (0x62)
 */
    r_Config_IICA1_interrupt,

/*
 * INT_CTSURD (0x64)
 */
    INT_CTSURD,

/*
 * INT_CTSUFN (0x66)
 */
    INT_CTSUFN,

/*
 * INT_REMC (0x68)
 */
    INT_REMC,

/*
 * INT_UT0 (0x6A)
 */
    INT_UT0,

/*
 * INT_UR0 (0x6C)
 */
    INT_UR0,

/*
 * INT_UT1 (0x6E)
 */
    r_Config_UARTA1_interrupt_send,

/*
 * INT_UR1 (0x70)
 */
    r_Config_UARTA1_interrupt_receive,

/*
 * INT_TM14 (0x72)
 */
    INT_TM14,

/*
 * INT_TM15 (0x74)
 */
    INT_TM15,

/*
 * INT_TM16 (0x76)
 */
    INT_TM16,

/*
 * INT_TM17 (0x78)
 */
    INT_TM17,

/*
 * Padding for reserved interrupt source (0x7A)
 */
    INT_DUMMY,

/*
 * Padding for reserved interrupt source (0x7C)
 */
    INT_DUMMY,

/*
 * INT_BRK_I (0x7E)
 */
    INT_BRK_I,
};
