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
* File Name        : r_cg_uarta.h
* Version          : 1.0.30
* Device(s)        : R7F100GSNxFB
* Description      : General header file for UARTA peripheral.
* Creation Date    : 
***********************************************************************************************************************/


#ifndef UARTA_H
#define UARTA_H

/***********************************************************************************************************************
Macro definitions (Register bit)
***********************************************************************************************************************/
/*
    Operation Mode Control Register 0 (ASIMAn0)
*/
/* UART operation enable (UARTAENn) */
#define _00_UARTA_OPERATION_DISABLE        (0x00U)    /* UARTA disable */
#define _80_UARTA_OPERATION_ENABLE         (0x80U)    /* UARTA enable */
/* Transmit enable (TXEAn) */
#define _00_UARTA_TRANSMIT_DISABLE         (0x00U)    /* transmit disable */
#define _40_UARTA_TRANSMIT_ENABLE          (0x40U)    /* transmit enable */
/* Receive enable (RXEAn) */
#define _00_UARTA_RECEIVE_DISABLE          (0x00U)    /* receive disable */
#define _20_UARTA_RECEIVE_ENABLE           (0x20U)    /* receive enable */
/* Transmit interrupt mode selection (ISSMAn) */
#define _00_UARTA_TRANSFER_END             (0x00U)    /* transfer end interrupt */
#define _02_UARTA_BUFFER_EMPTY             (0x02U)    /* buffer empty interrupt */
/* Receive interrupt mode selection (ISRMAn) */
#define _00_UARTA_INTURE_OCCUR             (0x00U)    /* INTURE interrupt occur */
#define _01_UARTA_INTUR_OCCUR              (0x01U)    /* INTUR interrupt occur */

/*
    Operation Mode Control Register 1 (ASIMAn1)
*/
/* Parity setting (PSn1, PSn0) */
#define _00_UARTA_PARITY_NONE              (0x00U)    /* no parity is expected */
#define _20_UARTA_PARITY_ZERO              (0x20U)    /* set parity is zero */
#define _40_UARTA_PARITY_ODD               (0x40U)    /* set parity is odd */
#define _60_UARTA_PARITY_EVEN              (0x60U)    /* set parity is even */
/* Transfer length setting (CLn1, CLn0) */
#define _00_UARTA_TRANSFER_LENGTH_5        (0x00U)    /* transfer length is 5 */
#define _10_UARTA_TRANSFER_LENGTH_7        (0x10U)    /* transfer length is 7 */
#define _18_UARTA_TRANSFER_LENGTH_8        (0x18U)    /* transfer length is 8 */
/* Send stop bit length setting (SLn) */
#define _00_UARTA_STOP_BIT_1               (0x00U)    /* send stop bit length is 1 */
#define _04_UARTA_STOP_BIT_2               (0x04U)    /* send stop bit length is 2 */
/* Selects the serial data direction (DIRn) */
#define _00_UARTA_DIRECTION_MSB            (0x00U)    /* data is MSB first */
#define _02_UARTA_DIRECTION_LSB            (0x02U)    /* data is LSB first */
/* Selects the serial data direction (ALVn) */
#define _00_UARTA_DATA_NORMAL              (0x00U)    /* positive logic */
#define _01_UARTA_DATA_INVERTED            (0x01U)    /* negative logic */

/*
    UARTA Status Register (ASISAn)
*/
/* Send buffer data flags (TXBFAn) */
#define _00_UARTA_DATA_TRANSFER_END        (0x00U)    /* data transfer to shift register */
#define _20_UARTA_DATA_EXIST_IN_TXBA       (0x20U)    /* data exists in TXBAn */
/* Send shift register data flags (TXSFAn) */
#define _00_UARTA_NO_NEXT_DATA             (0x00U)    /* UARTAENn is 0 or TXEAn when set to 0 */
#define _10_UARTA_HAVE_NEXT_TRANSFER       (0x10U)    /* data is transferred from TXBAn */
/* Parity error flag (PEAn) */
#define _00_UARTA_PARITY_ERROR_UNDETECTED  (0x00U)    /* parity error is not detected */
#define _04_UARTA_PARITY_ERROR_DETECTED    (0x04U)    /* parity error is detected */
/* Framing error flag (FEAn) */
#define _00_UARTA_FRAME_ERROR_UNDETECTED   (0x00U)    /* frame error is not detected */
#define _02_UARTA_FRAME_ERROR_DETECTED     (0x02U)    /* frame error is detected */
/* Overrun error flag (OVEAn) */
#define _00_UARTA_OVERRUN_ERROR_UNDETECTED (0x00U)    /* overrun error is not detected */
#define _01_UARTA_OVERRUN_ERROR_DETECTED   (0x01U)    /* overrun error is detected */

/*
    Status Clear Trigger Register (ASCTAn)
*/
/* Parity error flag clear trigger (PECTAn) */
#define _04_UARTA_PARITY_FLAG_CLEAR        (0x04U)    /* clear parity error flag */
/* Framing error flag clear trigger (FECTAn) */
#define _02_UARTA_FRAME_FLAG_CLEAR         (0x02U)    /* clear frame error flag */
/* Overrun error flag clear trigger (OVECTAn) */
#define _01_UARTA_OVERRUN_FLAG_CLEAR       (0x01U)    /* clear overrun error flag */

/*
    UARTA Clock Selection Register 0 (UTA0CK)
*/
/* UARTA0 clock output function enable (UTA0OEN) */
#define _00_UARTA_CLKA0_OUTPUT_DISABLE     (0x00U)    /* pin CLKA0 output is disable */
#define _80_UARTA_CLKA0_OUTPUT_ENABLE      (0x80U)    /* pin CLKA0 output is enable */
/* fSEL clock selection (UTASEL1, UTASEL0) */
#define _00_UARTA_FSEL_DISABLE             (0x00U)    /* fSEL is disable */
#define _10_UARTA_FSEL_SELECT_FMXP         (0x10U)    /* use fMXP clcok */
#define _20_UARTA_FSEL_SELECT_FIHP         (0x20U)    /* use fIHP clcok */
#define _30_UARTA_FSEL_SELECT_FIMP         (0x30U)    /* use fIMP clcok */
/* UARTA0 clock selection (UTA0CK3, UTA0CK2, UTA0CK1, UTA0CK0) */
#define _00_UARTA0_SELECT_FSEL             (0x00U)    /* UARTA0 use fSEL */
#define _01_UARTA0_SELECT_FSEL2            (0x01U)    /* UARTA0 use fSEL/2 */
#define _02_UARTA0_SELECT_FSEL4            (0x02U)    /* UARTA0 use fSEL/4 */
#define _03_UARTA0_SELECT_FSEL8            (0x03U)    /* UARTA0 use fSEL/8 */
#define _04_UARTA0_SELECT_FSEL16           (0x04U)    /* UARTA0 use fSEL/16 */
#define _05_UARTA0_SELECT_FSEL32           (0x05U)    /* UARTA0 use fSEL/32 */
#define _06_UARTA0_SELECT_FSEL64           (0x06U)    /* UARTA0 use fSEL/64 */
#define _08_UARTA0_SELECT_FSXP             (0x08U)    /* UARTA0 use fSXP */
#define _09_UARTA0_SELECT_ELC              (0x09U)    /* UARTA0 use ELC */
#define _F0_UARTA_CLOCK_SELECT_CLEAR       (0xF0U)

/*
    UARTA Clock Selection Register 1 (UTA1CK)
*/
/* UARTA1 clock output function enable (UTA1OEN) */
#define _00_UARTA_CLKA1_OUTPUT_DISABLE     (0x00U)    /* pin CLKA1 output is disable */
#define _80_UARTA_CLKA1_OUTPUT_ENABLE      (0x80U)    /* pin CLKA1 output is enable */
/* UARTA1 clock selection (UTA1CK3, UTA1CK2, UTA1CK1, UTA1CK0) */
#define _00_UARTA1_SELECT_FSEL             (0x00U)    /* UARTA1 use fSEL */
#define _01_UARTA1_SELECT_FSEL2            (0x01U)    /* UARTA1 use fSEL/2 */
#define _02_UARTA1_SELECT_FSEL4            (0x02U)    /* UARTA1 use fSEL/4 */
#define _03_UARTA1_SELECT_FSEL8            (0x03U)    /* UARTA1 use fSEL/8 */
#define _04_UARTA1_SELECT_FSEL16           (0x04U)    /* UARTA1 use fSEL/16 */
#define _05_UARTA1_SELECT_FSEL32           (0x05U)    /* UARTA1 use fSEL/32 */
#define _06_UARTA1_SELECT_FSEL64           (0x06U)    /* UARTA1 use fSEL/64 */
#define _08_UARTA1_SELECT_FSXP             (0x08U)    /* UARTA1 use fSXP */
#define _09_UARTA1_SELECT_ELC              (0x09U)    /* UARTA1 use ELC */

/*
    UARTA Loopback Function Selection Register (ULBS)
*/
/* UARTA1 loopback function setting (ULBS5) */
#define _00_UARTA1_LOOPBACK_DISABLE        (0x00U)    /* disable Uarta1 loopback function */
#define _20_UARTA1_LOOPBACK_ENABLE         (0x20U)    /* enable Uarta1 loopback function */
/* UARTA0 loopback function setting (ULBS4) */
#define _00_UARTA0_LOOPBACK_DISABLE        (0x00U)    /* disable Uarta0 loopback function */
#define _10_UARTA0_LOOPBACK_ENABLE         (0x10U)    /* enable Uarta0 loopback function */

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/

/***********************************************************************************************************************
Global functions
***********************************************************************************************************************/
/* Start user code for function. Do not edit comment generated here */
/* End user code. Do not edit comment generated here */
#endif
