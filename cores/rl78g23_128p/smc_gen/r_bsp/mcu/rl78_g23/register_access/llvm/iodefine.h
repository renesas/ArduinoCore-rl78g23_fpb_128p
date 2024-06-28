/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No 
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM 
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES 
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS 
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
* this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2021 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : iodefine.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 08.03.2021 1.00a    First Release. This file is customized for BSP.
*         : 04.08.2021 1.12     Changed the bit access method of some registers from 16 bits to 8 bits.

***********************************************************************************************************************/
#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() asm("di")
#define EI() asm("ei")
#define HALT() asm("halt")
#define NOP() asm("nop")
#define STOP() asm("stop")

#endif

#ifndef __IOREG_BIT_STRUCTURES
#define __IOREG_BIT_STRUCTURES
typedef struct {
	unsigned char no0 :1;
	unsigned char no1 :1;
	unsigned char no2 :1;
	unsigned char no3 :1;
	unsigned char no4 :1;
	unsigned char no5 :1;
	unsigned char no6 :1;
	unsigned char no7 :1;
} __BITS8;

typedef struct {
	unsigned short no0 :1;
	unsigned short no1 :1;
	unsigned short no2 :1;
	unsigned short no3 :1;
	unsigned short no4 :1;
	unsigned short no5 :1;
	unsigned short no6 :1;
	unsigned short no7 :1;
	unsigned short no8 :1;
	unsigned short no9 :1;
	unsigned short no10 :1;
	unsigned short no11 :1;
	unsigned short no12 :1;
	unsigned short no13 :1;
	unsigned short no14 :1;
	unsigned short no15 :1;
} __BITS16;

#endif

#ifndef IODEFINE_H
#define IODEFINE_H

/*
 IO Registers
 */
union un_p0 {
	unsigned char p0;
	__BITS8 BIT;
};
union un_p1 {
	unsigned char p1;
	__BITS8 BIT;
};
union un_p2 {
	unsigned char p2;
	__BITS8 BIT;
};
union un_p3 {
	unsigned char p3;
	__BITS8 BIT;
};
union un_p4 {
	unsigned char p4;
	__BITS8 BIT;
};
union un_p5 {
	unsigned char p5;
	__BITS8 BIT;
};
union un_p6 {
	unsigned char p6;
	__BITS8 BIT;
};
union un_p7 {
	unsigned char p7;
	__BITS8 BIT;
};
union un_p8 {
	unsigned char p8;
	__BITS8 BIT;
};
union un_p9 {
	unsigned char p9;
	__BITS8 BIT;
};
union un_p10 {
	unsigned char p10;
	__BITS8 BIT;
};
union un_p11 {
	unsigned char p11;
	__BITS8 BIT;
};
union un_p12 {
	unsigned char p12;
	__BITS8 BIT;
};
union un_p13 {
	unsigned char p13;
	__BITS8 BIT;
};
union un_p14 {
	unsigned char p14;
	__BITS8 BIT;
};
union un_p15 {
	unsigned char p15;
	__BITS8 BIT;
};
union un_pm0 {
	unsigned char pm0;
	__BITS8 BIT;
};
union un_pm1 {
	unsigned char pm1;
	__BITS8 BIT;
};
union un_pm2 {
	unsigned char pm2;
	__BITS8 BIT;
};
union un_pm3 {
	unsigned char pm3;
	__BITS8 BIT;
};
union un_pm4 {
	unsigned char pm4;
	__BITS8 BIT;
};
union un_pm5 {
	unsigned char pm5;
	__BITS8 BIT;
};
union un_pm6 {
	unsigned char pm6;
	__BITS8 BIT;
};
union un_pm7 {
	unsigned char pm7;
	__BITS8 BIT;
};
union un_pm8 {
	unsigned char pm8;
	__BITS8 BIT;
};
union un_pm9 {
	unsigned char pm9;
	__BITS8 BIT;
};
union un_pm10 {
	unsigned char pm10;
	__BITS8 BIT;
};
union un_pm11 {
	unsigned char pm11;
	__BITS8 BIT;
};
union un_pm12 {
	unsigned char pm12;
	__BITS8 BIT;
};
union un_pm14 {
	unsigned char pm14;
	__BITS8 BIT;
};
union un_pm15 {
	unsigned char pm15;
	__BITS8 BIT;
};
union un_adm0 {
	unsigned char adm0;
	__BITS8 BIT;
};
union un_ads {
	unsigned char ads;
	__BITS8 BIT;
};
union un_adm1 {
	unsigned char adm1;
	__BITS8 BIT;
};
union un_krctl {
	unsigned char krctl;
	__BITS8 BIT;
};
union un_krm0 {
	unsigned char krm0;
	__BITS8 BIT;
};
union un_egp0 {
	unsigned char egp0;
	__BITS8 BIT;
};
union un_egn0 {
	unsigned char egn0;
	__BITS8 BIT;
};
union un_egp1 {
	unsigned char egp1;
	__BITS8 BIT;
};
union un_egn1 {
	unsigned char egn1;
	__BITS8 BIT;
};
union un_iics0 {
	unsigned char iics0;
	__BITS8 BIT;
};
union un_iicf0 {
	unsigned char iicf0;
	__BITS8 BIT;
};
union un_iics1 {
	unsigned char iics1;
	__BITS8 BIT;
};
union un_iicf1 {
	unsigned char iicf1;
	__BITS8 BIT;
};
union un_csc {
	unsigned char csc;
	__BITS8 BIT;
};
union un_ostc {
	unsigned char ostc;
	__BITS8 BIT;
};
union un_ckc {
	unsigned char ckc;
	__BITS8 BIT;
};
union un_cks0 {
	unsigned char cks0;
	__BITS8 BIT;
};
union un_cks1 {
	unsigned char cks1;
	__BITS8 BIT;
};
union un_cksel {
	unsigned char cksel;
	__BITS8 BIT;
};
union un_lvim {
	unsigned char lvim;
	__BITS8 BIT;
};
union un_lvis {
	unsigned char lvis;
	__BITS8 BIT;
};
union un_if2 {
	unsigned short if2;
	__BITS16 BIT;
};
union un_if2l {
	unsigned char if2l;
	__BITS8 BIT;
};
union un_if2h {
	unsigned char if2h;
	__BITS8 BIT;
};
union un_if3 {
	unsigned short if3;
	__BITS16 BIT;
};
union un_if3l {
	unsigned char if3l;
	__BITS8 BIT;
};
union un_if3h {
	unsigned char if3h;
	__BITS8 BIT;
};
union un_mk2 {
	unsigned short mk2;
	__BITS16 BIT;
};
union un_mk2l {
	unsigned char mk2l;
	__BITS8 BIT;
};
union un_mk2h {
	unsigned char mk2h;
	__BITS8 BIT;
};
union un_mk3 {
	unsigned short mk3;
	__BITS16 BIT;
};
union un_mk3l {
	unsigned char mk3l;
	__BITS8 BIT;
};
union un_mk3h {
	unsigned char mk3h;
	__BITS8 BIT;
};
union un_pr02 {
	unsigned short pr02;
	__BITS16 BIT;
};
union un_pr02l {
	unsigned char pr02l;
	__BITS8 BIT;
};
union un_pr02h {
	unsigned char pr02h;
	__BITS8 BIT;
};
union un_pr03 {
	unsigned short pr03;
	__BITS16 BIT;
};
union un_pr03l {
	unsigned char pr03l;
	__BITS8 BIT;
};
union un_pr03h {
	unsigned char pr03h;
	__BITS8 BIT;
};
union un_pr12 {
	unsigned short pr12;
	__BITS16 BIT;
};
union un_pr12l {
	unsigned char pr12l;
	__BITS8 BIT;
};
union un_pr12h {
	unsigned char pr12h;
	__BITS8 BIT;
};
union un_pr13 {
	unsigned short pr13;
	__BITS16 BIT;
};
union un_pr13l {
	unsigned char pr13l;
	__BITS8 BIT;
};
union un_pr13h {
	unsigned char pr13h;
	__BITS8 BIT;
};
union un_if0 {
	unsigned short if0;
	__BITS16 BIT;
};
union un_if0l {
	unsigned char if0l;
	__BITS8 BIT;
};
union un_if0h {
	unsigned char if0h;
	__BITS8 BIT;
};
union un_if1 {
	unsigned short if1;
	__BITS16 BIT;
};
union un_if1l {
	unsigned char if1l;
	__BITS8 BIT;
};
union un_if1h {
	unsigned char if1h;
	__BITS8 BIT;
};
union un_mk0 {
	unsigned short mk0;
	__BITS16 BIT;
};
union un_mk0l {
	unsigned char mk0l;
	__BITS8 BIT;
};
union un_mk0h {
	unsigned char mk0h;
	__BITS8 BIT;
};
union un_mk1 {
	unsigned short mk1;
	__BITS16 BIT;
};
union un_mk1l {
	unsigned char mk1l;
	__BITS8 BIT;
};
union un_mk1h {
	unsigned char mk1h;
	__BITS8 BIT;
};
union un_pr00 {
	unsigned short pr00;
	__BITS16 BIT;
};
union un_pr00l {
	unsigned char pr00l;
	__BITS8 BIT;
};
union un_pr00h {
	unsigned char pr00h;
	__BITS8 BIT;
};
union un_pr01 {
	unsigned short pr01;
	__BITS16 BIT;
};
union un_pr01l {
	unsigned char pr01l;
	__BITS8 BIT;
};
union un_pr01h {
	unsigned char pr01h;
	__BITS8 BIT;
};
union un_pr10 {
	unsigned short pr10;
	__BITS16 BIT;
};
union un_pr10l {
	unsigned char pr10l;
	__BITS8 BIT;
};
union un_pr10h {
	unsigned char pr10h;
	__BITS8 BIT;
};
union un_pr11 {
	unsigned short pr11;
	__BITS16 BIT;
};
union un_pr11l {
	unsigned char pr11l;
	__BITS8 BIT;
};
union un_pr11h {
	unsigned char pr11h;
	__BITS8 BIT;
};
union un_pmc {
	unsigned char pmc;
	__BITS8 BIT;
};

#define P0 (*(volatile union un_p0 *)0xFFF00).p0
#define P0_bit (*(volatile union un_p0 *)0xFFF00).BIT
#define P1 (*(volatile union un_p1 *)0xFFF01).p1
#define P1_bit (*(volatile union un_p1 *)0xFFF01).BIT
#define P2 (*(volatile union un_p2 *)0xFFF02).p2
#define P2_bit (*(volatile union un_p2 *)0xFFF02).BIT
#define P3 (*(volatile union un_p3 *)0xFFF03).p3
#define P3_bit (*(volatile union un_p3 *)0xFFF03).BIT
#define P4 (*(volatile union un_p4 *)0xFFF04).p4
#define P4_bit (*(volatile union un_p4 *)0xFFF04).BIT
#define P5 (*(volatile union un_p5 *)0xFFF05).p5
#define P5_bit (*(volatile union un_p5 *)0xFFF05).BIT
#define P6 (*(volatile union un_p6 *)0xFFF06).p6
#define P6_bit (*(volatile union un_p6 *)0xFFF06).BIT
#define P7 (*(volatile union un_p7 *)0xFFF07).p7
#define P7_bit (*(volatile union un_p7 *)0xFFF07).BIT
#define P8 (*(volatile union un_p8 *)0xFFF08).p8
#define P8_bit (*(volatile union un_p8 *)0xFFF08).BIT
#define P9 (*(volatile union un_p9 *)0xFFF09).p9
#define P9_bit (*(volatile union un_p9 *)0xFFF09).BIT
#define P10 (*(volatile union un_p10 *)0xFFF0A).p10
#define P10_bit (*(volatile union un_p10 *)0xFFF0A).BIT
#define P11 (*(volatile union un_p11 *)0xFFF0B).p11
#define P11_bit (*(volatile union un_p11 *)0xFFF0B).BIT
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define P14 (*(volatile union un_p14 *)0xFFF0E).p14
#define P14_bit (*(volatile union un_p14 *)0xFFF0E).BIT
#define P15 (*(volatile union un_p15 *)0xFFF0F).p15
#define P15_bit (*(volatile union un_p15 *)0xFFF0F).BIT
#define SDR00 (*(volatile unsigned short *)0xFFF10)
#define SIO00 (*(volatile unsigned char *)0xFFF10)
#define TXD0 (*(volatile unsigned char *)0xFFF10)
#define SDR01 (*(volatile unsigned short *)0xFFF12)
#define RXD0 (*(volatile unsigned char *)0xFFF12)
#define SIO01 (*(volatile unsigned char *)0xFFF12)
#define SDR12 (*(volatile unsigned short *)0xFFF14)
#define SIO30 (*(volatile unsigned char *)0xFFF14)
#define TXD3 (*(volatile unsigned char *)0xFFF14)
#define SDR13 (*(volatile unsigned short *)0xFFF16)
#define RXD3 (*(volatile unsigned char *)0xFFF16)
#define SIO31 (*(volatile unsigned char *)0xFFF16)
#define TDR00 (*(volatile unsigned short *)0xFFF18)
#define TDR01 (*(volatile unsigned short *)0xFFF1A)
#define TDR01L (*(volatile unsigned char *)0xFFF1A)
#define TDR01H (*(volatile unsigned char *)0xFFF1B)
#define ADCR (*(volatile unsigned short *)0xFFF1E)
#define ADCRH (*(volatile unsigned char *)0xFFF1F)
#define PM0 (*(volatile union un_pm0 *)0xFFF20).pm0
#define PM0_bit (*(volatile union un_pm0 *)0xFFF20).BIT
#define PM1 (*(volatile union un_pm1 *)0xFFF21).pm1
#define PM1_bit (*(volatile union un_pm1 *)0xFFF21).BIT
#define PM2 (*(volatile union un_pm2 *)0xFFF22).pm2
#define PM2_bit (*(volatile union un_pm2 *)0xFFF22).BIT
#define PM3 (*(volatile union un_pm3 *)0xFFF23).pm3
#define PM3_bit (*(volatile union un_pm3 *)0xFFF23).BIT
#define PM4 (*(volatile union un_pm4 *)0xFFF24).pm4
#define PM4_bit (*(volatile union un_pm4 *)0xFFF24).BIT
#define PM5 (*(volatile union un_pm5 *)0xFFF25).pm5
#define PM5_bit (*(volatile union un_pm5 *)0xFFF25).BIT
#define PM6 (*(volatile union un_pm6 *)0xFFF26).pm6
#define PM6_bit (*(volatile union un_pm6 *)0xFFF26).BIT
#define PM7 (*(volatile union un_pm7 *)0xFFF27).pm7
#define PM7_bit (*(volatile union un_pm7 *)0xFFF27).BIT
#define PM8 (*(volatile union un_pm8 *)0xFFF28).pm8
#define PM8_bit (*(volatile union un_pm8 *)0xFFF28).BIT
#define PM9 (*(volatile union un_pm9 *)0xFFF29).pm9
#define PM9_bit (*(volatile union un_pm9 *)0xFFF29).BIT
#define PM10 (*(volatile union un_pm10 *)0xFFF2A).pm10
#define PM10_bit (*(volatile union un_pm10 *)0xFFF2A).BIT
#define PM11 (*(volatile union un_pm11 *)0xFFF2B).pm11
#define PM11_bit (*(volatile union un_pm11 *)0xFFF2B).BIT
#define PM12 (*(volatile union un_pm12 *)0xFFF2C).pm12
#define PM12_bit (*(volatile union un_pm12 *)0xFFF2C).BIT
#define PM14 (*(volatile union un_pm14 *)0xFFF2E).pm14
#define PM14_bit (*(volatile union un_pm14 *)0xFFF2E).BIT
#define PM15 (*(volatile union un_pm15 *)0xFFF2F).pm15
#define PM15_bit (*(volatile union un_pm15 *)0xFFF2F).BIT
#define ADM0 (*(volatile union un_adm0 *)0xFFF30).adm0
#define ADM0_bit (*(volatile union un_adm0 *)0xFFF30).BIT
#define ADS (*(volatile union un_ads *)0xFFF31).ads
#define ADS_bit (*(volatile union un_ads *)0xFFF31).BIT
#define ADM1 (*(volatile union un_adm1 *)0xFFF32).adm1
#define ADM1_bit (*(volatile union un_adm1 *)0xFFF32).BIT
#define KRCTL (*(volatile union un_krctl *)0xFFF34).krctl
#define KRCTL_bit (*(volatile union un_krctl *)0xFFF34).BIT
#define KRF (*(volatile unsigned char *)0xFFF35)
#define KRM0 (*(volatile union un_krm0 *)0xFFF37).krm0
#define KRM0_bit (*(volatile union un_krm0 *)0xFFF37).BIT
#define EGP0 (*(volatile union un_egp0 *)0xFFF38).egp0
#define EGP0_bit (*(volatile union un_egp0 *)0xFFF38).BIT
#define EGN0 (*(volatile union un_egn0 *)0xFFF39).egn0
#define EGN0_bit (*(volatile union un_egn0 *)0xFFF39).BIT
#define EGP1 (*(volatile union un_egp1 *)0xFFF3A).egp1
#define EGP1_bit (*(volatile union un_egp1 *)0xFFF3A).BIT
#define EGN1 (*(volatile union un_egn1 *)0xFFF3B).egn1
#define EGN1_bit (*(volatile union un_egn1 *)0xFFF3B).BIT
#define SDR02 (*(volatile unsigned short *)0xFFF44)
#define SIO10 (*(volatile unsigned char *)0xFFF44)
#define TXD1 (*(volatile unsigned char *)0xFFF44)
#define SDR03 (*(volatile unsigned short *)0xFFF46)
#define RXD1 (*(volatile unsigned char *)0xFFF46)
#define SIO11 (*(volatile unsigned char *)0xFFF46)
#define SDR10 (*(volatile unsigned short *)0xFFF48)
#define SIO20 (*(volatile unsigned char *)0xFFF48)
#define TXD2 (*(volatile unsigned char *)0xFFF48)
#define SDR11 (*(volatile unsigned short *)0xFFF4A)
#define RXD2 (*(volatile unsigned char *)0xFFF4A)
#define SIO21 (*(volatile unsigned char *)0xFFF4A)
#define IICA0 (*(volatile unsigned char *)0xFFF50)
#define IICS0 (*(volatile union un_iics0 *)0xFFF51).iics0
#define IICS0_bit (*(volatile union un_iics0 *)0xFFF51).BIT
#define IICF0 (*(volatile union un_iicf0 *)0xFFF52).iicf0
#define IICF0_bit (*(volatile union un_iicf0 *)0xFFF52).BIT
#define IICA1 (*(volatile unsigned char *)0xFFF54)
#define IICS1 (*(volatile union un_iics1 *)0xFFF55).iics1
#define IICS1_bit (*(volatile union un_iics1 *)0xFFF55).BIT
#define IICF1 (*(volatile union un_iicf1 *)0xFFF56).iicf1
#define IICF1_bit (*(volatile union un_iicf1 *)0xFFF56).BIT
#define TDR02 (*(volatile unsigned short *)0xFFF64)
#define TDR03 (*(volatile unsigned short *)0xFFF66)
#define TDR03L (*(volatile unsigned char *)0xFFF66)
#define TDR03H (*(volatile unsigned char *)0xFFF67)
#define TDR04 (*(volatile unsigned short *)0xFFF68)
#define TDR05 (*(volatile unsigned short *)0xFFF6A)
#define TDR06 (*(volatile unsigned short *)0xFFF6C)
#define TDR07 (*(volatile unsigned short *)0xFFF6E)
#define TDR10 (*(volatile unsigned short *)0xFFF70)
#define TDR11 (*(volatile unsigned short *)0xFFF72)
#define TDR11L (*(volatile unsigned char *)0xFFF72)
#define TDR11H (*(volatile unsigned char *)0xFFF73)
#define TDR12 (*(volatile unsigned short *)0xFFF74)
#define TDR13 (*(volatile unsigned short *)0xFFF76)
#define TDR13L (*(volatile unsigned char *)0xFFF76)
#define TDR13H (*(volatile unsigned char *)0xFFF77)
#define TDR14 (*(volatile unsigned short *)0xFFF78)
#define TDR15 (*(volatile unsigned short *)0xFFF7A)
#define TDR16 (*(volatile unsigned short *)0xFFF7C)
#define TDR17 (*(volatile unsigned short *)0xFFF7E)
#define CMC (*(volatile unsigned char *)0xFFFA0)
#define CSC (*(volatile union un_csc *)0xFFFA1).csc
#define CSC_bit (*(volatile union un_csc *)0xFFFA1).BIT
#define OSTC (*(volatile union un_ostc *)0xFFFA2).ostc
#define OSTC_bit (*(volatile union un_ostc *)0xFFFA2).BIT
#define OSTS (*(volatile unsigned char *)0xFFFA3)
#define CKC (*(volatile union un_ckc *)0xFFFA4).ckc
#define CKC_bit (*(volatile union un_ckc *)0xFFFA4).BIT
#define CKS0 (*(volatile union un_cks0 *)0xFFFA5).cks0
#define CKS0_bit (*(volatile union un_cks0 *)0xFFFA5).BIT
#define CKS1 (*(volatile union un_cks1 *)0xFFFA6).cks1
#define CKS1_bit (*(volatile union un_cks1 *)0xFFFA6).BIT
#define CKSEL (*(volatile union un_cksel *)0xFFFA7).cksel
#define CKSEL_bit (*(volatile union un_cksel *)0xFFFA7).BIT
#define RESF (*(volatile unsigned char *)0xFFFA8)
#define LVIM (*(volatile union un_lvim *)0xFFFA9).lvim
#define LVIM_bit (*(volatile union un_lvim *)0xFFFA9).BIT
#define LVIS (*(volatile union un_lvis *)0xFFFAA).lvis
#define LVIS_bit (*(volatile union un_lvis *)0xFFFAA).BIT
#define WDTE (*(volatile unsigned char *)0xFFFAB)
#define CRCIN (*(volatile unsigned char *)0xFFFAC)
#define IF2 (*(volatile union un_if2 *)0xFFFD0).if2
#define IF2_bit (*(volatile union un_if2 *)0xFFFD0).BIT
#define IF2L (*(volatile union un_if2l *)0xFFFD0).if2l
#define IF2L_bit (*(volatile union un_if2l *)0xFFFD0).BIT
#define IF2H (*(volatile union un_if2h *)0xFFFD1).if2h
#define IF2H_bit (*(volatile union un_if2h *)0xFFFD1).BIT
#define IF3 (*(volatile union un_if3 *)0xFFFD2).if3
#define IF3_bit (*(volatile union un_if3 *)0xFFFD2).BIT
#define IF3L (*(volatile union un_if3l *)0xFFFD2).if3l
#define IF3L_bit (*(volatile union un_if3l *)0xFFFD2).BIT
#define IF3H (*(volatile union un_if3h *)0xFFFD3).if3h
#define IF3H_bit (*(volatile union un_if3h *)0xFFFD3).BIT
#define MK2 (*(volatile union un_mk2 *)0xFFFD4).mk2
#define MK2_bit (*(volatile union un_mk2 *)0xFFFD4).BIT
#define MK2L (*(volatile union un_mk2l *)0xFFFD4).mk2l
#define MK2L_bit (*(volatile union un_mk2l *)0xFFFD4).BIT
#define MK2H (*(volatile union un_mk2h *)0xFFFD5).mk2h
#define MK2H_bit (*(volatile union un_mk2h *)0xFFFD5).BIT
#define MK3 (*(volatile union un_mk3 *)0xFFFD6).mk3
#define MK3_bit (*(volatile union un_mk3 *)0xFFFD6).BIT
#define MK3L (*(volatile union un_mk3l *)0xFFFD6).mk3l
#define MK3L_bit (*(volatile union un_mk3l *)0xFFFD6).BIT
#define MK3H (*(volatile union un_mk3h *)0xFFFD7).mk3h
#define MK3H_bit (*(volatile union un_mk3h *)0xFFFD7).BIT
#define PR02 (*(volatile union un_pr02 *)0xFFFD8).pr02
#define PR02_bit (*(volatile union un_pr02 *)0xFFFD8).BIT
#define PR02L (*(volatile union un_pr02l *)0xFFFD8).pr02l
#define PR02L_bit (*(volatile union un_pr02l *)0xFFFD8).BIT
#define PR02H (*(volatile union un_pr02h *)0xFFFD9).pr02h
#define PR02H_bit (*(volatile union un_pr02h *)0xFFFD9).BIT
#define PR03 (*(volatile union un_pr03 *)0xFFFDA).pr03
#define PR03_bit (*(volatile union un_pr03 *)0xFFFDA).BIT
#define PR03L (*(volatile union un_pr03l *)0xFFFDA).pr03l
#define PR03L_bit (*(volatile union un_pr03l *)0xFFFDA).BIT
#define PR03H (*(volatile union un_pr03h *)0xFFFDB).pr03h
#define PR03H_bit (*(volatile union un_pr03h *)0xFFFDB).BIT
#define PR12 (*(volatile union un_pr12 *)0xFFFDC).pr12
#define PR12_bit (*(volatile union un_pr12 *)0xFFFDC).BIT
#define PR12L (*(volatile union un_pr12l *)0xFFFDC).pr12l
#define PR12L_bit (*(volatile union un_pr12l *)0xFFFDC).BIT
#define PR12H (*(volatile union un_pr12h *)0xFFFDD).pr12h
#define PR12H_bit (*(volatile union un_pr12h *)0xFFFDD).BIT
#define PR13 (*(volatile union un_pr13 *)0xFFFDE).pr13
#define PR13_bit (*(volatile union un_pr13 *)0xFFFDE).BIT
#define PR13L (*(volatile union un_pr13l *)0xFFFDE).pr13l
#define PR13L_bit (*(volatile union un_pr13l *)0xFFFDE).BIT
#define PR13H (*(volatile union un_pr13h *)0xFFFDF).pr13h
#define PR13H_bit (*(volatile union un_pr13h *)0xFFFDF).BIT
#define IF0 (*(volatile union un_if0 *)0xFFFE0).if0
#define IF0_bit (*(volatile union un_if0 *)0xFFFE0).BIT
#define IF0L (*(volatile union un_if0l *)0xFFFE0).if0l
#define IF0L_bit (*(volatile union un_if0l *)0xFFFE0).BIT
#define IF0H (*(volatile union un_if0h *)0xFFFE1).if0h
#define IF0H_bit (*(volatile union un_if0h *)0xFFFE1).BIT
#define IF1 (*(volatile union un_if1 *)0xFFFE2).if1
#define IF1_bit (*(volatile union un_if1 *)0xFFFE2).BIT
#define IF1L (*(volatile union un_if1l *)0xFFFE2).if1l
#define IF1L_bit (*(volatile union un_if1l *)0xFFFE2).BIT
#define IF1H (*(volatile union un_if1h *)0xFFFE3).if1h
#define IF1H_bit (*(volatile union un_if1h *)0xFFFE3).BIT
#define MK0 (*(volatile union un_mk0 *)0xFFFE4).mk0
#define MK0_bit (*(volatile union un_mk0 *)0xFFFE4).BIT
#define MK0L (*(volatile union un_mk0l *)0xFFFE4).mk0l
#define MK0L_bit (*(volatile union un_mk0l *)0xFFFE4).BIT
#define MK0H (*(volatile union un_mk0h *)0xFFFE5).mk0h
#define MK0H_bit (*(volatile union un_mk0h *)0xFFFE5).BIT
#define MK1 (*(volatile union un_mk1 *)0xFFFE6).mk1
#define MK1_bit (*(volatile union un_mk1 *)0xFFFE6).BIT
#define MK1L (*(volatile union un_mk1l *)0xFFFE6).mk1l
#define MK1L_bit (*(volatile union un_mk1l *)0xFFFE6).BIT
#define MK1H (*(volatile union un_mk1h *)0xFFFE7).mk1h
#define MK1H_bit (*(volatile union un_mk1h *)0xFFFE7).BIT
#define PR00 (*(volatile union un_pr00 *)0xFFFE8).pr00
#define PR00_bit (*(volatile union un_pr00 *)0xFFFE8).BIT
#define PR00L (*(volatile union un_pr00l *)0xFFFE8).pr00l
#define PR00L_bit (*(volatile union un_pr00l *)0xFFFE8).BIT
#define PR00H (*(volatile union un_pr00h *)0xFFFE9).pr00h
#define PR00H_bit (*(volatile union un_pr00h *)0xFFFE9).BIT
#define PR01 (*(volatile union un_pr01 *)0xFFFEA).pr01
#define PR01_bit (*(volatile union un_pr01 *)0xFFFEA).BIT
#define PR01L (*(volatile union un_pr01l *)0xFFFEA).pr01l
#define PR01L_bit (*(volatile union un_pr01l *)0xFFFEA).BIT
#define PR01H (*(volatile union un_pr01h *)0xFFFEB).pr01h
#define PR01H_bit (*(volatile union un_pr01h *)0xFFFEB).BIT
#define PR10 (*(volatile union un_pr10 *)0xFFFEC).pr10
#define PR10_bit (*(volatile union un_pr10 *)0xFFFEC).BIT
#define PR10L (*(volatile union un_pr10l *)0xFFFEC).pr10l
#define PR10L_bit (*(volatile union un_pr10l *)0xFFFEC).BIT
#define PR10H (*(volatile union un_pr10h *)0xFFFED).pr10h
#define PR10H_bit (*(volatile union un_pr10h *)0xFFFED).BIT
#define PR11 (*(volatile union un_pr11 *)0xFFFEE).pr11
#define PR11_bit (*(volatile union un_pr11 *)0xFFFEE).BIT
#define PR11L (*(volatile union un_pr11l *)0xFFFEE).pr11l
#define PR11L_bit (*(volatile union un_pr11l *)0xFFFEE).BIT
#define PR11H (*(volatile union un_pr11h *)0xFFFEF).pr11h
#define PR11H_bit (*(volatile union un_pr11h *)0xFFFEF).BIT
#define MACRL (*(volatile unsigned short *)0xFFFF0)
#define MACRH (*(volatile unsigned short *)0xFFFF2)
#define PMC (*(volatile union un_pmc *)0xFFFFE).pmc
#define PMC_bit (*(volatile union un_pmc *)0xFFFFE).BIT

/*
 Sfr bits
 */
#define ADCE ADM0_bit.no0
#define ADCS ADM0_bit.no7
#define KREG KRCTL_bit.no0
#define KRMD KRCTL_bit.no7
#define SPD0 IICS0_bit.no0
#define STD0 IICS0_bit.no1
#define ACKD0 IICS0_bit.no2
#define TRC0 IICS0_bit.no3
#define COI0 IICS0_bit.no4
#define EXC0 IICS0_bit.no5
#define ALD0 IICS0_bit.no6
#define MSTS0 IICS0_bit.no7
#define IICRSV0 IICF0_bit.no0
#define STCEN0 IICF0_bit.no1
#define IICBSY0 IICF0_bit.no6
#define STCF0 IICF0_bit.no7
#define SPD1 IICS1_bit.no0
#define STD1 IICS1_bit.no1
#define ACKD1 IICS1_bit.no2
#define TRC1 IICS1_bit.no3
#define COI1 IICS1_bit.no4
#define EXC1 IICS1_bit.no5
#define ALD1 IICS1_bit.no6
#define MSTS1 IICS1_bit.no7
#define IICRSV1 IICF1_bit.no0
#define STCEN1 IICF1_bit.no1
#define IICBSY1 IICF1_bit.no6
#define STCF1 IICF1_bit.no7
#define HIOSTOP CSC_bit.no0
#define MIOEN CSC_bit.no1
#define XTSTOP CSC_bit.no6
#define MSTOP CSC_bit.no7
#define MCM1 CKC_bit.no0
#define MCS1 CKC_bit.no1
#define MCM0 CKC_bit.no4
#define MCS CKC_bit.no5
#define CSS CKC_bit.no6
#define CLS CKC_bit.no7
#define PCLOE0 CKS0_bit.no7
#define PCLOE1 CKS1_bit.no7
#define SELLOSC CKSEL_bit.no0
#define LVD0F LVIM_bit.no0
#define LVD1F LVIM_bit.no1
#define DLVD0F LVIM_bit.no2
#define DLVD1F LVIM_bit.no3
#define LVISEN LVIM_bit.no7
#define LVD1SEL LVIS_bit.no6
#define LVD1EN LVIS_bit.no7
#define TMIF05 IF2L_bit.no0
#define TMIF06 IF2L_bit.no1
#define TMIF07 IF2L_bit.no2
#define PIF6 IF2L_bit.no3
#define PIF7 IF2L_bit.no4
#define PIF8 IF2L_bit.no5
#define PIF9 IF2L_bit.no6
#define FLIF IF2L_bit.no7
#define CMPIF0 IF2H_bit.no0
#define PIF10 IF2H_bit.no0
#define CMPIF1 IF2H_bit.no1
#define PIF11 IF2H_bit.no1
#define TMIF10 IF2H_bit.no2
#define UREIF0 IF2H_bit.no2
#define TMIF11 IF2H_bit.no3
#define UREIF1 IF2H_bit.no3
#define TMIF12 IF2H_bit.no4
#define SREIF3 IF2H_bit.no5
#define TMIF13H IF2H_bit.no5
#define CTSUWRIF IF2H_bit.no6
#define IICAIF1 IF2H_bit.no7
#define CTSURDIF IF3L_bit.no0
#define CTSUFNIF IF3L_bit.no1
#define REMCIF IF3L_bit.no2
#define UTIF0 IF3L_bit.no3
#define URIF0 IF3L_bit.no4
#define UTIF1 IF3L_bit.no5
#define URIF1 IF3L_bit.no6
#define TMIF14 IF3L_bit.no7
#define TMIF15 IF3H_bit.no0
#define TMIF16 IF3H_bit.no1
#define TMIF17 IF3H_bit.no2
#define TMMK05 MK2L_bit.no0
#define TMMK06 MK2L_bit.no1
#define TMMK07 MK2L_bit.no2
#define PMK6 MK2L_bit.no3
#define PMK7 MK2L_bit.no4
#define PMK8 MK2L_bit.no5
#define PMK9 MK2L_bit.no6
#define FLMK MK2L_bit.no7
#define CMPMK0 MK2H_bit.no0
#define PMK10 MK2H_bit.no0
#define CMPMK1 MK2H_bit.no1
#define PMK11 MK2H_bit.no1
#define TMMK10 MK2H_bit.no2
#define UREMK0 MK2H_bit.no2
#define TMMK11 MK2H_bit.no3
#define UREMK1 MK2H_bit.no3
#define TMMK12 MK2H_bit.no4
#define SREMK3 MK2H_bit.no5
#define TMMK13H MK2H_bit.no5
#define CTSUWRMK MK2H_bit.no6
#define IICAMK1 MK2H_bit.no7
#define CTSURDMK MK3L_bit.no0
#define CTSUFNMK MK3L_bit.no1
#define REMCMK MK3L_bit.no2
#define UTMK0 MK3L_bit.no3
#define URMK0 MK3L_bit.no4
#define UTMK1 MK3L_bit.no5
#define URMK1 MK3L_bit.no6
#define TMMK14 MK3L_bit.no7
#define TMMK15 MK3H_bit.no0
#define TMMK16 MK3H_bit.no1
#define TMMK17 MK3H_bit.no2
#define TMPR005 PR02L_bit.no0
#define TMPR006 PR02L_bit.no1
#define TMPR007 PR02L_bit.no2
#define PPR06 PR02L_bit.no3
#define PPR07 PR02L_bit.no4
#define PPR08 PR02L_bit.no5
#define PPR09 PR02L_bit.no6
#define FLPR0 PR02L_bit.no7
#define CMPPR00 PR02H_bit.no0
#define PPR010 PR02H_bit.no0
#define CMPPR01 PR02H_bit.no1
#define PPR011 PR02H_bit.no1
#define TMPR010 PR02H_bit.no2
#define UREPR00 PR02H_bit.no2
#define TMPR011 PR02H_bit.no3
#define UREPR01 PR02H_bit.no3
#define TMPR012 PR02H_bit.no4
#define SREPR03 PR02H_bit.no5
#define TMPR013H PR02H_bit.no5
#define CTSUWRPR0 PR02H_bit.no6
#define IICAPR01 PR02H_bit.no7
#define CTSURDPR0 PR03L_bit.no0
#define CTSUFNPR0 PR03L_bit.no1
#define REMCPR0 PR03L_bit.no2
#define UTPR00 PR03L_bit.no3
#define URPR00 PR03L_bit.no4
#define UTPR01 PR03L_bit.no5
#define URPR01 PR03L_bit.no6
#define TMPR014 PR03L_bit.no7
#define TMPR015 PR03H_bit.no0
#define TMPR016 PR03H_bit.no1
#define TMPR017 PR03H_bit.no2
#define TMPR105 PR12L_bit.no0
#define TMPR106 PR12L_bit.no1
#define TMPR107 PR12L_bit.no2
#define PPR16 PR12L_bit.no3
#define PPR17 PR12L_bit.no4
#define PPR18 PR12L_bit.no5
#define PPR19 PR12L_bit.no6
#define FLPR1 PR12L_bit.no7
#define CMPPR10 PR12H_bit.no0
#define PPR110 PR12H_bit.no0
#define CMPPR11 PR12H_bit.no1
#define PPR111 PR12H_bit.no1
#define TMPR110 PR12H_bit.no2
#define UREPR10 PR12H_bit.no2
#define TMPR111 PR12H_bit.no3
#define UREPR11 PR12H_bit.no3
#define TMPR112 PR12H_bit.no4
#define SREPR13 PR12H_bit.no5
#define TMPR113H PR12H_bit.no5
#define CTSUWRPR1 PR12H_bit.no6
#define IICAPR11 PR12H_bit.no7
#define CTSURDPR1 PR13L_bit.no0
#define CTSUFNPR1 PR13L_bit.no1
#define REMCPR1 PR13L_bit.no2
#define UTPR10 PR13L_bit.no3
#define URPR10 PR13L_bit.no4
#define UTPR11 PR13L_bit.no5
#define URPR11 PR13L_bit.no6
#define TMPR114 PR13L_bit.no7
#define TMPR115 PR13H_bit.no0
#define TMPR116 PR13H_bit.no1
#define TMPR117 PR13H_bit.no2
#define WDTIIF IF0L_bit.no0
#define LVIIF IF0L_bit.no1
#define PIF0 IF0L_bit.no2
#define PIF1 IF0L_bit.no3
#define PIF2 IF0L_bit.no4
#define PIF3 IF0L_bit.no5
#define PIF4 IF0L_bit.no6
#define PIF5 IF0L_bit.no7
#define CSIIF20 IF0H_bit.no0
#define IICIF20 IF0H_bit.no0
#define STIF2 IF0H_bit.no0
#define CSIIF21 IF0H_bit.no1
#define IICIF21 IF0H_bit.no1
#define SRIF2 IF0H_bit.no1
#define SREIF2 IF0H_bit.no2
#define TMIF11H IF0H_bit.no2
#define ELCLIF IF0H_bit.no3
#define SMSEIF IF0H_bit.no4
#define CSIIF00 IF0H_bit.no5
#define IICIF00 IF0H_bit.no5
#define STIF0 IF0H_bit.no5
#define TMIF00 IF0H_bit.no6
#define SREIF0 IF0H_bit.no7
#define TMIF01H IF0H_bit.no7
#define CSIIF10 IF1L_bit.no0
#define IICIF10 IF1L_bit.no0
#define STIF1 IF1L_bit.no0
#define CSIIF11 IF1L_bit.no1
#define IICIF11 IF1L_bit.no1
#define SRIF1 IF1L_bit.no1
#define SREIF1 IF1L_bit.no2
#define TMIF03H IF1L_bit.no2
#define IICAIF0 IF1L_bit.no3
#define CSIIF01 IF1L_bit.no4
#define IICIF01 IF1L_bit.no4
#define SRIF0 IF1L_bit.no4
#define TMIF01 IF1L_bit.no5
#define TMIF02 IF1L_bit.no6
#define TMIF03 IF1L_bit.no7
#define ADIF IF1H_bit.no0
#define RTCIF IF1H_bit.no1
#define ITLIF IF1H_bit.no2
#define KRIF IF1H_bit.no3
#define CSIIF30 IF1H_bit.no4
#define IICIF30 IF1H_bit.no4
#define STIF3 IF1H_bit.no4
#define CSIIF31 IF1H_bit.no5
#define IICIF31 IF1H_bit.no5
#define SRIF3 IF1H_bit.no5
#define TMIF13 IF1H_bit.no6
#define TMIF04 IF1H_bit.no7
#define WDTIMK MK0L_bit.no0
#define LVIMK MK0L_bit.no1
#define PMK0 MK0L_bit.no2
#define PMK1 MK0L_bit.no3
#define PMK2 MK0L_bit.no4
#define PMK3 MK0L_bit.no5
#define PMK4 MK0L_bit.no6
#define PMK5 MK0L_bit.no7
#define CSIMK20 MK0H_bit.no0
#define IICMK20 MK0H_bit.no0
#define STMK2 MK0H_bit.no0
#define CSIMK21 MK0H_bit.no1
#define IICMK21 MK0H_bit.no1
#define SRMK2 MK0H_bit.no1
#define SREMK2 MK0H_bit.no2
#define TMMK11H MK0H_bit.no2
#define ELCLMK MK0H_bit.no3
#define SMSEMK MK0H_bit.no4
#define CSIMK00 MK0H_bit.no5
#define IICMK00 MK0H_bit.no5
#define STMK0 MK0H_bit.no5
#define TMMK00 MK0H_bit.no6
#define SREMK0 MK0H_bit.no7
#define TMMK01H MK0H_bit.no7
#define CSIMK10 MK1L_bit.no0
#define IICMK10 MK1L_bit.no0
#define STMK1 MK1L_bit.no0
#define CSIMK11 MK1L_bit.no1
#define IICMK11 MK1L_bit.no1
#define SRMK1 MK1L_bit.no1
#define SREMK1 MK1L_bit.no2
#define TMMK03H MK1L_bit.no2
#define IICAMK0 MK1L_bit.no3
#define CSIMK01 MK1L_bit.no4
#define IICMK01 MK1L_bit.no4
#define SRMK0 MK1L_bit.no4
#define TMMK01 MK1L_bit.no5
#define TMMK02 MK1L_bit.no6
#define TMMK03 MK1L_bit.no7
#define ADMK MK1H_bit.no0
#define RTCMK MK1H_bit.no1
#define ITLMK MK1H_bit.no2
#define KRMK MK1H_bit.no3
#define CSIMK30 MK1H_bit.no4
#define IICMK30 MK1H_bit.no4
#define STMK3 MK1H_bit.no4
#define CSIMK31 MK1H_bit.no5
#define IICMK31 MK1H_bit.no5
#define SRMK3 MK1H_bit.no5
#define TMMK13 MK1H_bit.no6
#define TMMK04 MK1H_bit.no7
#define WDTIPR0 PR00L_bit.no0
#define LVIPR0 PR00L_bit.no1
#define PPR00 PR00L_bit.no2
#define PPR01 PR00L_bit.no3
#define PPR02 PR00L_bit.no4
#define PPR03 PR00L_bit.no5
#define PPR04 PR00L_bit.no6
#define PPR05 PR00L_bit.no7
#define CSIPR020 PR00H_bit.no0
#define IICPR020 PR00H_bit.no0
#define STPR02 PR00H_bit.no0
#define CSIPR021 PR00H_bit.no1
#define IICPR021 PR00H_bit.no1
#define SRPR02 PR00H_bit.no1
#define SREPR02 PR00H_bit.no2
#define TMPR011H PR00H_bit.no2
#define ELCLPR0 PR00H_bit.no3
#define SMSEPR0 PR00H_bit.no4
#define CSIPR000 PR00H_bit.no5
#define IICPR000 PR00H_bit.no5
#define STPR00 PR00H_bit.no5
#define TMPR000 PR00H_bit.no6
#define SREPR00 PR00H_bit.no7
#define TMPR001H PR00H_bit.no7
#define CSIPR010 PR01L_bit.no0
#define IICPR010 PR01L_bit.no0
#define STPR01 PR01L_bit.no0
#define CSIPR011 PR01L_bit.no1
#define IICPR011 PR01L_bit.no1
#define SRPR01 PR01L_bit.no1
#define SREPR01 PR01L_bit.no2
#define TMPR003H PR01L_bit.no2
#define IICAPR00 PR01L_bit.no3
#define CSIPR001 PR01L_bit.no4
#define IICPR001 PR01L_bit.no4
#define SRPR00 PR01L_bit.no4
#define TMPR001 PR01L_bit.no5
#define TMPR002 PR01L_bit.no6
#define TMPR003 PR01L_bit.no7
#define ADPR0 PR01H_bit.no0
#define RTCPR0 PR01H_bit.no1
#define ITLPR0 PR01H_bit.no2
#define KRPR0 PR01H_bit.no3
#define CSIPR030 PR01H_bit.no4
#define IICPR030 PR01H_bit.no4
#define STPR03 PR01H_bit.no4
#define CSIPR031 PR01H_bit.no5
#define IICPR031 PR01H_bit.no5
#define SRPR03 PR01H_bit.no5
#define TMPR013 PR01H_bit.no6
#define TMPR004 PR01H_bit.no7
#define WDTIPR1 PR10L_bit.no0
#define LVIPR1 PR10L_bit.no1
#define PPR10 PR10L_bit.no2
#define PPR11 PR10L_bit.no3
#define PPR12 PR10L_bit.no4
#define PPR13 PR10L_bit.no5
#define PPR14 PR10L_bit.no6
#define PPR15 PR10L_bit.no7
#define CSIPR120 PR10H_bit.no0
#define IICPR120 PR10H_bit.no0
#define STPR12 PR10H_bit.no0
#define CSIPR121 PR10H_bit.no1
#define IICPR121 PR10H_bit.no1
#define SRPR12 PR10H_bit.no1
#define SREPR12 PR10H_bit.no2
#define TMPR111H PR10H_bit.no2
#define ELCLPR1 PR10H_bit.no3
#define SMSEPR1 PR10H_bit.no4
#define CSIPR100 PR10H_bit.no5
#define IICPR100 PR10H_bit.no5
#define STPR10 PR10H_bit.no5
#define TMPR100 PR10H_bit.no6
#define SREPR10 PR10H_bit.no7
#define TMPR101H PR10H_bit.no7
#define CSIPR110 PR11L_bit.no0
#define IICPR110 PR11L_bit.no0
#define STPR11 PR11L_bit.no0
#define CSIPR111 PR11L_bit.no1
#define IICPR111 PR11L_bit.no1
#define SRPR11 PR11L_bit.no1
#define SREPR11 PR11L_bit.no2
#define TMPR103H PR11L_bit.no2
#define IICAPR10 PR11L_bit.no3
#define CSIPR101 PR11L_bit.no4
#define IICPR101 PR11L_bit.no4
#define SRPR10 PR11L_bit.no4
#define TMPR101 PR11L_bit.no5
#define TMPR102 PR11L_bit.no6
#define TMPR103 PR11L_bit.no7
#define ADPR1 PR11H_bit.no0
#define RTCPR1 PR11H_bit.no1
#define ITLPR1 PR11H_bit.no2
#define KRPR1 PR11H_bit.no3
#define CSIPR130 PR11H_bit.no4
#define IICPR130 PR11H_bit.no4
#define STPR13 PR11H_bit.no4
#define CSIPR131 PR11H_bit.no5
#define IICPR131 PR11H_bit.no5
#define SRPR13 PR11H_bit.no5
#define TMPR113 PR11H_bit.no6
#define TMPR104 PR11H_bit.no7
#define MAA PMC_bit.no0

/*
 Interrupt vector addresses
 */
#define RST_vect 0x0
#define INTDBG_vect 0x2
#define INTWDTI_vect 0x4
#define INTLVI_vect 0x6
#define INTP0_vect 0x8
#define INTP1_vect 0xA
#define INTP2_vect 0xC
#define INTP3_vect 0xE
#define INTP4_vect 0x10
#define INTP5_vect 0x12
#define INTCSI20_vect 0x14
#define INTIIC20_vect 0x14
#define INTST2_vect 0x14
#define INTCSI21_vect 0x16
#define INTIIC21_vect 0x16
#define INTSR2_vect 0x16
#define INTSRE2_vect 0x18
#define INTTM11H_vect 0x18
#define INTELCL_vect 0x1A
#define INTSMSE_vect 0x1C
#define INTCSI00_vect 0x1E
#define INTIIC00_vect 0x1E
#define INTST0_vect 0x1E
#define INTTM00_vect 0x20
#define INTSRE0_vect 0x22
#define INTTM01H_vect 0x22
#define INTCSI10_vect 0x24
#define INTIIC10_vect 0x24
#define INTST1_vect 0x24
#define INTCSI11_vect 0x26
#define INTIIC11_vect 0x26
#define INTSR1_vect 0x26
#define INTSRE1_vect 0x28
#define INTTM03H_vect 0x28
#define INTIICA0_vect 0x2A
#define INTCSI01_vect 0x2C
#define INTIIC01_vect 0x2C
#define INTSR0_vect 0x2C
#define INTTM01_vect 0x2E
#define INTTM02_vect 0x30
#define INTTM03_vect 0x32
#define INTAD_vect 0x34
#define INTRTC_vect 0x36
#define INTITL_vect 0x38
#define INTKR_vect 0x3A
#define INTCSI30_vect 0x3C
#define INTIIC30_vect 0x3C
#define INTST3_vect 0x3C
#define INTCSI31_vect 0x3E
#define INTIIC31_vect 0x3E
#define INTSR3_vect 0x3E
#define INTTM13_vect 0x40
#define INTTM04_vect 0x42
#define INTTM05_vect 0x44
#define INTTM06_vect 0x46
#define INTTM07_vect 0x48
#define INTP6_vect 0x4A
#define INTP7_vect 0x4C
#define INTP8_vect 0x4E
#define INTP9_vect 0x50
#define INTFL_vect 0x52
#define INTCMP0_vect 0x54
#define INTP10_vect 0x54
#define INTCMP1_vect 0x56
#define INTP11_vect 0x56
#define INTTM10_vect 0x58
#define INTURE0_vect 0x58
#define INTTM11_vect 0x5A
#define INTURE1_vect 0x5A
#define INTTM12_vect 0x5C
#define INTSRE3_vect 0x5E
#define INTTM13H_vect 0x5E
#define INTCTSUWR_vect 0x60
#define INTIICA1_vect 0x62
#define INTCTSURD_vect 0x64
#define INTCTSUFN_vect 0x66
#define INTREMC_vect 0x68
#define INTUT0_vect 0x6A
#define INTUR0_vect 0x6C
#define INTUT1_vect 0x6E
#define INTUR1_vect 0x70
#define INTTM14_vect 0x72
#define INTTM15_vect 0x74
#define INTTM16_vect 0x76
#define INTTM17_vect 0x78
#define BRK_I_vect 0x7E
#endif
