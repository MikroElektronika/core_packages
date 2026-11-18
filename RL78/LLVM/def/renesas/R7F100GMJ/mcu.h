/* R7F100GMJ: supplied G23 register-map superset; unbonded pins/peripherals still require device checks. */
#ifndef MIKROE_R7F100GMJ_MCU_H
#define MIKROE_R7F100GMJ_MCU_H
#define MIKROE_MCU_ROM_SIZE_BYTES 262144UL
#define MIKROE_MCU_RAM_SIZE_BYTES 24576UL
/*
* Copyright (c) 2021 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : iodefine.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 08.03.2021 1.00a    First Release. This file is customized for BSP.
*         : 04.08.2021 1.12     Changed the bit access method of some registers from 16 bits to 8 bits.
*         : 04.07.2025 1.92     Changed the disclaimer.
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

/*
* Copyright (c) 2021 Renesas Electronics Corporation and/or its affiliates
*
* SPDX-License-Identifier: BSD-3-Clause
*/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  : 
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 08.03.2021 1.00     First Release
*         : 04.07.2025 1.92     Changed the disclaimer.
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

#ifndef IODEFINE_EXT_H
#define IODEFINE_EXT_H

/*
 IO Registers
 */
union un_adm2 {
	unsigned char adm2;
	__BITS8 BIT;
};
union un_pu0 {
	unsigned char pu0;
	__BITS8 BIT;
};
union un_pu1 {
	unsigned char pu1;
	__BITS8 BIT;
};
union un_pu3 {
	unsigned char pu3;
	__BITS8 BIT;
};
union un_pu4 {
	unsigned char pu4;
	__BITS8 BIT;
};
union un_pu5 {
	unsigned char pu5;
	__BITS8 BIT;
};
union un_pu6 {
	unsigned char pu6;
	__BITS8 BIT;
};
union un_pu7 {
	unsigned char pu7;
	__BITS8 BIT;
};
union un_pu8 {
	unsigned char pu8;
	__BITS8 BIT;
};
union un_pu9 {
	unsigned char pu9;
	__BITS8 BIT;
};
union un_pu10 {
	unsigned char pu10;
	__BITS8 BIT;
};
union un_pu11 {
	unsigned char pu11;
	__BITS8 BIT;
};
union un_pu12 {
	unsigned char pu12;
	__BITS8 BIT;
};
union un_pu14 {
	unsigned char pu14;
	__BITS8 BIT;
};
union un_pim0 {
	unsigned char pim0;
	__BITS8 BIT;
};
union un_pim1 {
	unsigned char pim1;
	__BITS8 BIT;
};
union un_pim3 {
	unsigned char pim3;
	__BITS8 BIT;
};
union un_pim4 {
	unsigned char pim4;
	__BITS8 BIT;
};
union un_pim5 {
	unsigned char pim5;
	__BITS8 BIT;
};
union un_pim7 {
	unsigned char pim7;
	__BITS8 BIT;
};
union un_pim8 {
	unsigned char pim8;
	__BITS8 BIT;
};
union un_pim14 {
	unsigned char pim14;
	__BITS8 BIT;
};
union un_pom0 {
	unsigned char pom0;
	__BITS8 BIT;
};
union un_pom1 {
	unsigned char pom1;
	__BITS8 BIT;
};
union un_pom3 {
	unsigned char pom3;
	__BITS8 BIT;
};
union un_pom4 {
	unsigned char pom4;
	__BITS8 BIT;
};
union un_pom5 {
	unsigned char pom5;
	__BITS8 BIT;
};
union un_pom7 {
	unsigned char pom7;
	__BITS8 BIT;
};
union un_pom8 {
	unsigned char pom8;
	__BITS8 BIT;
};
union un_pom9 {
	unsigned char pom9;
	__BITS8 BIT;
};
union un_pom12 {
	unsigned char pom12;
	__BITS8 BIT;
};
union un_pom14 {
	unsigned char pom14;
	__BITS8 BIT;
};
union un_pmca0 {
	unsigned char pmca0;
	__BITS8 BIT;
};
union un_pmca1 {
	unsigned char pmca1;
	__BITS8 BIT;
};
union un_pmca2 {
	unsigned char pmca2;
	__BITS8 BIT;
};
union un_pmca3 {
	unsigned char pmca3;
	__BITS8 BIT;
};
union un_pmca10 {
	unsigned char pmca10;
	__BITS8 BIT;
};
union un_pmca11 {
	unsigned char pmca11;
	__BITS8 BIT;
};
union un_pmca12 {
	unsigned char pmca12;
	__BITS8 BIT;
};
union un_pmca14 {
	unsigned char pmca14;
	__BITS8 BIT;
};
union un_pmca15 {
	unsigned char pmca15;
	__BITS8 BIT;
};
union un_nfen0 {
	unsigned char nfen0;
	__BITS8 BIT;
};
union un_nfen1 {
	unsigned char nfen1;
	__BITS8 BIT;
};
union un_nfen2 {
	unsigned char nfen2;
	__BITS8 BIT;
};
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_ulbs {
	unsigned char ulbs;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
	__BITS8 BIT;
};
union un_gdidis {
	unsigned char gdidis;
	__BITS8 BIT;
};
union un_dflctl {
	unsigned char dflctl;
	__BITS8 BIT;
};
union un_flmode {
	unsigned char flmode;
	__BITS8 BIT;
};
union un_flmwrp {
	unsigned char flmwrp;
	__BITS8 BIT;
};
union un_fsse {
	unsigned char fsse;
	__BITS8 BIT;
};
union un_pfs {
	unsigned char pfs;
	__BITS8 BIT;
};
union un_per0 {
	unsigned char per0;
	__BITS8 BIT;
};
union un_prr0 {
	unsigned char prr0;
	__BITS8 BIT;
};
union un_osmc {
	unsigned char osmc;
	__BITS8 BIT;
};
union un_rpectl {
	unsigned char rpectl;
	__BITS8 BIT;
};
union un_porsr {
	unsigned char porsr;
	__BITS8 BIT;
};
union un_per1 {
	unsigned char per1;
	__BITS8 BIT;
};
union un_prr1 {
	unsigned char prr1;
	__BITS8 BIT;
};
union un_se0l {
	unsigned char se0l;
	__BITS8 BIT;
};
union un_ss0l {
	unsigned char ss0l;
	__BITS8 BIT;
};
union un_st0l {
	unsigned char st0l;
	__BITS8 BIT;
};
union un_soe0l {
	unsigned char soe0l;
	__BITS8 BIT;
};
union un_se1l {
	unsigned char se1l;
	__BITS8 BIT;
};
union un_ss1l {
	unsigned char ss1l;
	__BITS8 BIT;
};
union un_st1l {
	unsigned char st1l;
	__BITS8 BIT;
};
union un_soe1l {
	unsigned char soe1l;
	__BITS8 BIT;
};
union un_te0l {
	unsigned char te0l;
	__BITS8 BIT;
};
union un_ts0l {
	unsigned char ts0l;
	__BITS8 BIT;
};
union un_tt0l {
	unsigned char tt0l;
	__BITS8 BIT;
};
union un_toe0l {
	unsigned char toe0l;
	__BITS8 BIT;
};
union un_te1l {
	unsigned char te1l;
	__BITS8 BIT;
};
union un_ts1l {
	unsigned char ts1l;
	__BITS8 BIT;
};
union un_tt1l {
	unsigned char tt1l;
	__BITS8 BIT;
};
union un_toe1l {
	unsigned char toe1l;
	__BITS8 BIT;
};
union un_wkupmd {
	unsigned char wkupmd;
	__BITS8 BIT;
};
union un_psmcr {
	unsigned char psmcr;
	__BITS8 BIT;
};
union un_lvdfclr {
	unsigned char lvdfclr;
	__BITS8 BIT;
};
union un_rtcc0 {
	unsigned char rtcc0;
	__BITS8 BIT;
};
union un_rtcc1 {
	unsigned char rtcc1;
	__BITS8 BIT;
};
union un_iicctl00 {
	unsigned char iicctl00;
	__BITS8 BIT;
};
union un_iicctl01 {
	unsigned char iicctl01;
	__BITS8 BIT;
};
union un_iicctl10 {
	unsigned char iicctl10;
	__BITS8 BIT;
};
union un_iicctl11 {
	unsigned char iicctl11;
	__BITS8 BIT;
};
union un_pmct0 {
	unsigned char pmct0;
	__BITS8 BIT;
};
union un_pmct2 {
	unsigned char pmct2;
	__BITS8 BIT;
};
union un_pmct3 {
	unsigned char pmct3;
	__BITS8 BIT;
};
union un_pmct5 {
	unsigned char pmct5;
	__BITS8 BIT;
};
union un_pmct6 {
	unsigned char pmct6;
	__BITS8 BIT;
};
union un_pmct7 {
	unsigned char pmct7;
	__BITS8 BIT;
};
union un_pmct15 {
	unsigned char pmct15;
	__BITS8 BIT;
};
union un_pmce0 {
	unsigned char pmce0;
	__BITS8 BIT;
};
union un_pmce1 {
	unsigned char pmce1;
	__BITS8 BIT;
};
union un_pmce5 {
	unsigned char pmce5;
	__BITS8 BIT;
};
union un_pmce6 {
	unsigned char pmce6;
	__BITS8 BIT;
};
union un_ccde {
	unsigned char ccde;
	__BITS8 BIT;
};
union un_ptdc {
	unsigned char ptdc;
	__BITS8 BIT;
};
union un_pfoe0 {
	unsigned char pfoe0;
	__BITS8 BIT;
};
union un_pfoe1 {
	unsigned char pfoe1;
	__BITS8 BIT;
};
union un_pdidis0 {
	unsigned char pdidis0;
	__BITS8 BIT;
};
union un_pdidis1 {
	unsigned char pdidis1;
	__BITS8 BIT;
};
union un_pdidis3 {
	unsigned char pdidis3;
	__BITS8 BIT;
};
union un_pdidis4 {
	unsigned char pdidis4;
	__BITS8 BIT;
};
union un_pdidis5 {
	unsigned char pdidis5;
	__BITS8 BIT;
};
union un_pdidis7 {
	unsigned char pdidis7;
	__BITS8 BIT;
};
union un_pdidis8 {
	unsigned char pdidis8;
	__BITS8 BIT;
};
union un_pdidis9 {
	unsigned char pdidis9;
	__BITS8 BIT;
};
union un_pdidis12 {
	unsigned char pdidis12;
	__BITS8 BIT;
};
union un_pdidis13 {
	unsigned char pdidis13;
	__BITS8 BIT;
};
union un_pdidis14 {
	unsigned char pdidis14;
	__BITS8 BIT;
};
union un_flars {
	unsigned char flars;
	__BITS8 BIT;
};
union un_fssq {
	unsigned char fssq;
	__BITS8 BIT;
};
union un_flrst {
	unsigned char flrst;
	__BITS8 BIT;
};
union un_fsastl {
	unsigned char fsastl;
	__BITS8 BIT;
};
union un_fsasth {
	unsigned char fsasth;
	__BITS8 BIT;
};
union un_dtcen0 {
	unsigned char dtcen0;
	__BITS8 BIT;
};
union un_dtcen1 {
	unsigned char dtcen1;
	__BITS8 BIT;
};
union un_dtcen2 {
	unsigned char dtcen2;
	__BITS8 BIT;
};
union un_dtcen3 {
	unsigned char dtcen3;
	__BITS8 BIT;
};
union un_dtcen4 {
	unsigned char dtcen4;
	__BITS8 BIT;
};
union un_crc0ctl {
	unsigned char crc0ctl;
	__BITS8 BIT;
};
union un_asima00 {
	unsigned char asima00;
	__BITS8 BIT;
};
union un_asima01 {
	unsigned char asima01;
	__BITS8 BIT;
};
union un_ascta0 {
	unsigned char ascta0;
	__BITS8 BIT;
};
union un_asima10 {
	unsigned char asima10;
	__BITS8 BIT;
};
union un_asima11 {
	unsigned char asima11;
	__BITS8 BIT;
};
union un_ascta1 {
	unsigned char ascta1;
	__BITS8 BIT;
};
union un_uta0ck {
	unsigned char uta0ck;
	__BITS8 BIT;
};
union un_uta1ck {
	unsigned char uta1ck;
	__BITS8 BIT;
};
union un_dam {
	unsigned char dam;
	__BITS8 BIT;
};
union un_compmdr {
	unsigned char compmdr;
	__BITS8 BIT;
};
union un_compfir {
	unsigned char compfir;
	__BITS8 BIT;
};
union un_compocr {
	unsigned char compocr;
	__BITS8 BIT;
};
union un_itlctl0 {
	unsigned char itlctl0;
	__BITS8 BIT;
};
union un_itlcc0 {
	unsigned char itlcc0;
	__BITS8 BIT;
};
union un_smsc {
	unsigned char smsc;
	__BITS8 BIT;
};
union un_smss {
	unsigned char smss;
	__BITS8 BIT;
};
union un_remcon0 {
	unsigned char remcon0;
	__BITS8 BIT;
};
union un_remcon1 {
	unsigned char remcon1;
	__BITS8 BIT;
};
union un_remsts {
	unsigned char remsts;
	__BITS8 BIT;
};
union un_remint {
	unsigned char remint;
	__BITS8 BIT;
};
union un_remstc {
	unsigned char remstc;
	__BITS8 BIT;
};
union un_remrbit {
	unsigned char remrbit;
	__BITS8 BIT;
};
union un_remdat0 {
	unsigned char remdat0;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define ADCR0 (*(volatile unsigned short *)0xF0020)
#define ADCR0H (*(volatile unsigned char *)0xF0021)
#define ADCR1 (*(volatile unsigned short *)0xF0022)
#define ADCR1H (*(volatile unsigned char *)0xF0023)
#define ADCR2 (*(volatile unsigned short *)0xF0024)
#define ADCR2H (*(volatile unsigned char *)0xF0025)
#define ADCR3 (*(volatile unsigned short *)0xF0026)
#define ADCR3H (*(volatile unsigned char *)0xF0027)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU3 (*(volatile union un_pu3 *)0xF0033).pu3
#define PU3_bit (*(volatile union un_pu3 *)0xF0033).BIT
#define PU4 (*(volatile union un_pu4 *)0xF0034).pu4
#define PU4_bit (*(volatile union un_pu4 *)0xF0034).BIT
#define PU5 (*(volatile union un_pu5 *)0xF0035).pu5
#define PU5_bit (*(volatile union un_pu5 *)0xF0035).BIT
#define PU6 (*(volatile union un_pu6 *)0xF0036).pu6
#define PU6_bit (*(volatile union un_pu6 *)0xF0036).BIT
#define PU7 (*(volatile union un_pu7 *)0xF0037).pu7
#define PU7_bit (*(volatile union un_pu7 *)0xF0037).BIT
#define PU8 (*(volatile union un_pu8 *)0xF0038).pu8
#define PU8_bit (*(volatile union un_pu8 *)0xF0038).BIT
#define PU9 (*(volatile union un_pu9 *)0xF0039).pu9
#define PU9_bit (*(volatile union un_pu9 *)0xF0039).BIT
#define PU10 (*(volatile union un_pu10 *)0xF003A).pu10
#define PU10_bit (*(volatile union un_pu10 *)0xF003A).BIT
#define PU11 (*(volatile union un_pu11 *)0xF003B).pu11
#define PU11_bit (*(volatile union un_pu11 *)0xF003B).BIT
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM4 (*(volatile union un_pim4 *)0xF0044).pim4
#define PIM4_bit (*(volatile union un_pim4 *)0xF0044).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define PIM7 (*(volatile union un_pim7 *)0xF0047).pim7
#define PIM7_bit (*(volatile union un_pim7 *)0xF0047).BIT
#define PIM8 (*(volatile union un_pim8 *)0xF0048).pim8
#define PIM8_bit (*(volatile union un_pim8 *)0xF0048).BIT
#define PIM14 (*(volatile union un_pim14 *)0xF004E).pim14
#define PIM14_bit (*(volatile union un_pim14 *)0xF004E).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM4 (*(volatile union un_pom4 *)0xF0054).pom4
#define POM4_bit (*(volatile union un_pom4 *)0xF0054).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define POM8 (*(volatile union un_pom8 *)0xF0058).pom8
#define POM8_bit (*(volatile union un_pom8 *)0xF0058).BIT
#define POM9 (*(volatile union un_pom9 *)0xF0059).pom9
#define POM9_bit (*(volatile union un_pom9 *)0xF0059).BIT
#define POM12 (*(volatile union un_pom12 *)0xF005C).pom12
#define POM12_bit (*(volatile union un_pom12 *)0xF005C).BIT
#define POM14 (*(volatile union un_pom14 *)0xF005E).pom14
#define POM14_bit (*(volatile union un_pom14 *)0xF005E).BIT
#define PMCA0 (*(volatile union un_pmca0 *)0xF0060).pmca0
#define PMCA0_bit (*(volatile union un_pmca0 *)0xF0060).BIT
#define PMCA1 (*(volatile union un_pmca1 *)0xF0061).pmca1
#define PMCA1_bit (*(volatile union un_pmca1 *)0xF0061).BIT
#define PMCA2 (*(volatile union un_pmca2 *)0xF0062).pmca2
#define PMCA2_bit (*(volatile union un_pmca2 *)0xF0062).BIT
#define PMCA3 (*(volatile union un_pmca3 *)0xF0063).pmca3
#define PMCA3_bit (*(volatile union un_pmca3 *)0xF0063).BIT
#define PMCA10 (*(volatile union un_pmca10 *)0xF006A).pmca10
#define PMCA10_bit (*(volatile union un_pmca10 *)0xF006A).BIT
#define PMCA11 (*(volatile union un_pmca11 *)0xF006B).pmca11
#define PMCA11_bit (*(volatile union un_pmca11 *)0xF006B).BIT
#define PMCA12 (*(volatile union un_pmca12 *)0xF006C).pmca12
#define PMCA12_bit (*(volatile union un_pmca12 *)0xF006C).BIT
#define PMCA14 (*(volatile union un_pmca14 *)0xF006E).pmca14
#define PMCA14_bit (*(volatile union un_pmca14 *)0xF006E).BIT
#define PMCA15 (*(volatile union un_pmca15 *)0xF006F).pmca15
#define PMCA15_bit (*(volatile union un_pmca15 *)0xF006F).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define NFEN2 (*(volatile union un_nfen2 *)0xF0072).nfen2
#define NFEN2_bit (*(volatile union un_nfen2 *)0xF0072).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define TIS1 (*(volatile unsigned char *)0xF0075)
#define PIOR (*(volatile unsigned char *)0xF0077)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define ULBS (*(volatile union un_ulbs *)0xF0079).ulbs
#define ULBS_bit (*(volatile union un_ulbs *)0xF0079).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define GDIDIS (*(volatile union un_gdidis *)0xF007D).gdidis
#define GDIDIS_bit (*(volatile union un_gdidis *)0xF007D).BIT
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define HIOTRM (*(volatile unsigned char *)0xF00A0)
#define HOCODIV (*(volatile unsigned char *)0xF00A8)
#define FLMODE (*(volatile union un_flmode *)0xF00AA).flmode
#define FLMODE_bit (*(volatile union un_flmode *)0xF00AA).BIT
#define FLMWRP (*(volatile union un_flmwrp *)0xF00AB).flmwrp
#define FLMWRP_bit (*(volatile union un_flmwrp *)0xF00AB).BIT
#define FLSEC (*(volatile unsigned short *)0xF00B0)
#define FLFSWS (*(volatile unsigned short *)0xF00B2)
#define FLFSWE (*(volatile unsigned short *)0xF00B4)
#define FSSET (*(volatile unsigned char *)0xF00B6)
#define FSSE (*(volatile union un_fsse *)0xF00B7).fsse
#define FSSE_bit (*(volatile union un_fsse *)0xF00B7).BIT
#define FLFADL (*(volatile unsigned short *)0xF00B8)
#define FLFADH (*(volatile unsigned char *)0xF00BA)
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
#define FLWE (*(volatile unsigned char *)0xF00C6)
#define PER0 (*(volatile union un_per0 *)0xF00F0).per0
#define PER0_bit (*(volatile union un_per0 *)0xF00F0).BIT
#define PRR0 (*(volatile union un_prr0 *)0xF00F1).prr0
#define PRR0_bit (*(volatile union un_prr0 *)0xF00F1).BIT
#define MOCODIV (*(volatile unsigned char *)0xF00F2)
#define OSMC (*(volatile union un_osmc *)0xF00F3).osmc
#define OSMC_bit (*(volatile union un_osmc *)0xF00F3).BIT
#define RPECTL (*(volatile union un_rpectl *)0xF00F5).rpectl
#define RPECTL_bit (*(volatile union un_rpectl *)0xF00F5).BIT
#define PORSR (*(volatile union un_porsr *)0xF00F9).porsr
#define PORSR_bit (*(volatile union un_porsr *)0xF00F9).BIT
#define PER1 (*(volatile union un_per1 *)0xF00FA).per1
#define PER1_bit (*(volatile union un_per1 *)0xF00FA).BIT
#define PRR1 (*(volatile union un_prr1 *)0xF00FB).prr1
#define PRR1_bit (*(volatile union un_prr1 *)0xF00FB).BIT
#define BCDADJ (*(volatile unsigned char *)0xF00FE)
#define VECTCTRL (*(volatile unsigned char *)0xF00FF)
#define SSR00 (*(volatile unsigned short *)0xF0100)
#define SSR00L (*(volatile unsigned char *)0xF0100)
#define SSR01 (*(volatile unsigned short *)0xF0102)
#define SSR01L (*(volatile unsigned char *)0xF0102)
#define SSR02 (*(volatile unsigned short *)0xF0104)
#define SSR02L (*(volatile unsigned char *)0xF0104)
#define SSR03 (*(volatile unsigned short *)0xF0106)
#define SSR03L (*(volatile unsigned char *)0xF0106)
#define SIR00 (*(volatile unsigned short *)0xF0108)
#define SIR00L (*(volatile unsigned char *)0xF0108)
#define SIR01 (*(volatile unsigned short *)0xF010A)
#define SIR01L (*(volatile unsigned char *)0xF010A)
#define SIR02 (*(volatile unsigned short *)0xF010C)
#define SIR02L (*(volatile unsigned char *)0xF010C)
#define SIR03 (*(volatile unsigned short *)0xF010E)
#define SIR03L (*(volatile unsigned char *)0xF010E)
#define SMR00 (*(volatile unsigned short *)0xF0110)
#define SMR01 (*(volatile unsigned short *)0xF0112)
#define SMR02 (*(volatile unsigned short *)0xF0114)
#define SMR03 (*(volatile unsigned short *)0xF0116)
#define SCR00 (*(volatile unsigned short *)0xF0118)
#define SCR01 (*(volatile unsigned short *)0xF011A)
#define SCR02 (*(volatile unsigned short *)0xF011C)
#define SCR03 (*(volatile unsigned short *)0xF011E)
#define SE0 (*(volatile unsigned short *)0xF0120)
#define SE0L (*(volatile union un_se0l *)0xF0120).se0l
#define SE0L_bit (*(volatile union un_se0l *)0xF0120).BIT
#define SS0 (*(volatile unsigned short *)0xF0122)
#define SS0L (*(volatile union un_ss0l *)0xF0122).ss0l
#define SS0L_bit (*(volatile union un_ss0l *)0xF0122).BIT
#define ST0 (*(volatile unsigned short *)0xF0124)
#define ST0L (*(volatile union un_st0l *)0xF0124).st0l
#define ST0L_bit (*(volatile union un_st0l *)0xF0124).BIT
#define SPS0 (*(volatile unsigned short *)0xF0126)
#define SPS0L (*(volatile unsigned char *)0xF0126)
#define SO0 (*(volatile unsigned short *)0xF0128)
#define SOE0 (*(volatile unsigned short *)0xF012A)
#define SOE0L (*(volatile union un_soe0l *)0xF012A).soe0l
#define SOE0L_bit (*(volatile union un_soe0l *)0xF012A).BIT
#define SOL0 (*(volatile unsigned short *)0xF0134)
#define SOL0L (*(volatile unsigned char *)0xF0134)
#define SSC0 (*(volatile unsigned short *)0xF0138)
#define SSC0L (*(volatile unsigned char *)0xF0138)
#define SSR10 (*(volatile unsigned short *)0xF0140)
#define SSR10L (*(volatile unsigned char *)0xF0140)
#define SSR11 (*(volatile unsigned short *)0xF0142)
#define SSR11L (*(volatile unsigned char *)0xF0142)
#define SSR12 (*(volatile unsigned short *)0xF0144)
#define SSR12L (*(volatile unsigned char *)0xF0144)
#define SSR13 (*(volatile unsigned short *)0xF0146)
#define SSR13L (*(volatile unsigned char *)0xF0146)
#define SIR10 (*(volatile unsigned short *)0xF0148)
#define SIR10L (*(volatile unsigned char *)0xF0148)
#define SIR11 (*(volatile unsigned short *)0xF014A)
#define SIR11L (*(volatile unsigned char *)0xF014A)
#define SIR12 (*(volatile unsigned short *)0xF014C)
#define SIR12L (*(volatile unsigned char *)0xF014C)
#define SIR13 (*(volatile unsigned short *)0xF014E)
#define SIR13L (*(volatile unsigned char *)0xF014E)
#define SMR10 (*(volatile unsigned short *)0xF0150)
#define SMR11 (*(volatile unsigned short *)0xF0152)
#define SMR12 (*(volatile unsigned short *)0xF0154)
#define SMR13 (*(volatile unsigned short *)0xF0156)
#define SCR10 (*(volatile unsigned short *)0xF0158)
#define SCR11 (*(volatile unsigned short *)0xF015A)
#define SCR12 (*(volatile unsigned short *)0xF015C)
#define SCR13 (*(volatile unsigned short *)0xF015E)
#define SE1 (*(volatile unsigned short *)0xF0160)
#define SE1L (*(volatile union un_se1l *)0xF0160).se1l
#define SE1L_bit (*(volatile union un_se1l *)0xF0160).BIT
#define SS1 (*(volatile unsigned short *)0xF0162)
#define SS1L (*(volatile union un_ss1l *)0xF0162).ss1l
#define SS1L_bit (*(volatile union un_ss1l *)0xF0162).BIT
#define ST1 (*(volatile unsigned short *)0xF0164)
#define ST1L (*(volatile union un_st1l *)0xF0164).st1l
#define ST1L_bit (*(volatile union un_st1l *)0xF0164).BIT
#define SPS1 (*(volatile unsigned short *)0xF0166)
#define SPS1L (*(volatile unsigned char *)0xF0166)
#define SO1 (*(volatile unsigned short *)0xF0168)
#define SOE1 (*(volatile unsigned short *)0xF016A)
#define SOE1L (*(volatile union un_soe1l *)0xF016A).soe1l
#define SOE1L_bit (*(volatile union un_soe1l *)0xF016A).BIT
#define SOL1 (*(volatile unsigned short *)0xF0174)
#define SOL1L (*(volatile unsigned char *)0xF0174)
#define SSC1 (*(volatile unsigned short *)0xF0178)
#define SSC1L (*(volatile unsigned char *)0xF0178)
#define TCR00 (*(volatile unsigned short *)0xF0180)
#define TCR01 (*(volatile unsigned short *)0xF0182)
#define TCR02 (*(volatile unsigned short *)0xF0184)
#define TCR03 (*(volatile unsigned short *)0xF0186)
#define TCR04 (*(volatile unsigned short *)0xF0188)
#define TCR05 (*(volatile unsigned short *)0xF018A)
#define TCR06 (*(volatile unsigned short *)0xF018C)
#define TCR07 (*(volatile unsigned short *)0xF018E)
#define TMR00 (*(volatile unsigned short *)0xF0190)
#define TMR01 (*(volatile unsigned short *)0xF0192)
#define TMR02 (*(volatile unsigned short *)0xF0194)
#define TMR03 (*(volatile unsigned short *)0xF0196)
#define TMR04 (*(volatile unsigned short *)0xF0198)
#define TMR05 (*(volatile unsigned short *)0xF019A)
#define TMR06 (*(volatile unsigned short *)0xF019C)
#define TMR07 (*(volatile unsigned short *)0xF019E)
#define TSR00 (*(volatile unsigned short *)0xF01A0)
#define TSR00L (*(volatile unsigned char *)0xF01A0)
#define TSR01 (*(volatile unsigned short *)0xF01A2)
#define TSR01L (*(volatile unsigned char *)0xF01A2)
#define TSR02 (*(volatile unsigned short *)0xF01A4)
#define TSR02L (*(volatile unsigned char *)0xF01A4)
#define TSR03 (*(volatile unsigned short *)0xF01A6)
#define TSR03L (*(volatile unsigned char *)0xF01A6)
#define TSR04 (*(volatile unsigned short *)0xF01A8)
#define TSR04L (*(volatile unsigned char *)0xF01A8)
#define TSR05 (*(volatile unsigned short *)0xF01AA)
#define TSR05L (*(volatile unsigned char *)0xF01AA)
#define TSR06 (*(volatile unsigned short *)0xF01AC)
#define TSR06L (*(volatile unsigned char *)0xF01AC)
#define TSR07 (*(volatile unsigned short *)0xF01AE)
#define TSR07L (*(volatile unsigned char *)0xF01AE)
#define TE0 (*(volatile unsigned short *)0xF01B0)
#define TE0L (*(volatile union un_te0l *)0xF01B0).te0l
#define TE0L_bit (*(volatile union un_te0l *)0xF01B0).BIT
#define TS0 (*(volatile unsigned short *)0xF01B2)
#define TS0L (*(volatile union un_ts0l *)0xF01B2).ts0l
#define TS0L_bit (*(volatile union un_ts0l *)0xF01B2).BIT
#define TT0 (*(volatile unsigned short *)0xF01B4)
#define TT0L (*(volatile union un_tt0l *)0xF01B4).tt0l
#define TT0L_bit (*(volatile union un_tt0l *)0xF01B4).BIT
#define TPS0 (*(volatile unsigned short *)0xF01B6)
#define TO0 (*(volatile unsigned short *)0xF01B8)
#define TO0L (*(volatile unsigned char *)0xF01B8)
#define TOE0 (*(volatile unsigned short *)0xF01BA)
#define TOE0L (*(volatile union un_toe0l *)0xF01BA).toe0l
#define TOE0L_bit (*(volatile union un_toe0l *)0xF01BA).BIT
#define TOL0 (*(volatile unsigned short *)0xF01BC)
#define TOL0L (*(volatile unsigned char *)0xF01BC)
#define TOM0 (*(volatile unsigned short *)0xF01BE)
#define TOM0L (*(volatile unsigned char *)0xF01BE)
#define TCR10 (*(volatile unsigned short *)0xF01C0)
#define TCR11 (*(volatile unsigned short *)0xF01C2)
#define TCR12 (*(volatile unsigned short *)0xF01C4)
#define TCR13 (*(volatile unsigned short *)0xF01C6)
#define TCR14 (*(volatile unsigned short *)0xF01C8)
#define TCR15 (*(volatile unsigned short *)0xF01CA)
#define TCR16 (*(volatile unsigned short *)0xF01CC)
#define TCR17 (*(volatile unsigned short *)0xF01CE)
#define TMR10 (*(volatile unsigned short *)0xF01D0)
#define TMR11 (*(volatile unsigned short *)0xF01D2)
#define TMR12 (*(volatile unsigned short *)0xF01D4)
#define TMR13 (*(volatile unsigned short *)0xF01D6)
#define TMR14 (*(volatile unsigned short *)0xF01D8)
#define TMR15 (*(volatile unsigned short *)0xF01DA)
#define TMR16 (*(volatile unsigned short *)0xF01DC)
#define TMR17 (*(volatile unsigned short *)0xF01DE)
#define TSR10 (*(volatile unsigned short *)0xF01E0)
#define TSR10L (*(volatile unsigned char *)0xF01E0)
#define TSR11 (*(volatile unsigned short *)0xF01E2)
#define TSR11L (*(volatile unsigned char *)0xF01E2)
#define TSR12 (*(volatile unsigned short *)0xF01E4)
#define TSR12L (*(volatile unsigned char *)0xF01E4)
#define TSR13 (*(volatile unsigned short *)0xF01E6)
#define TSR13L (*(volatile unsigned char *)0xF01E6)
#define TSR14 (*(volatile unsigned short *)0xF01E8)
#define TSR14L (*(volatile unsigned char *)0xF01E8)
#define TSR15 (*(volatile unsigned short *)0xF01EA)
#define TSR15L (*(volatile unsigned char *)0xF01EA)
#define TSR16 (*(volatile unsigned short *)0xF01EC)
#define TSR16L (*(volatile unsigned char *)0xF01EC)
#define TSR17 (*(volatile unsigned short *)0xF01EE)
#define TSR17L (*(volatile unsigned char *)0xF01EE)
#define TE1 (*(volatile unsigned short *)0xF01F0)
#define TE1L (*(volatile union un_te1l *)0xF01F0).te1l
#define TE1L_bit (*(volatile union un_te1l *)0xF01F0).BIT
#define TS1 (*(volatile unsigned short *)0xF01F2)
#define TS1L (*(volatile union un_ts1l *)0xF01F2).ts1l
#define TS1L_bit (*(volatile union un_ts1l *)0xF01F2).BIT
#define TT1 (*(volatile unsigned short *)0xF01F4)
#define TT1L (*(volatile union un_tt1l *)0xF01F4).tt1l
#define TT1L_bit (*(volatile union un_tt1l *)0xF01F4).BIT
#define TPS1 (*(volatile unsigned short *)0xF01F6)
#define TO1 (*(volatile unsigned short *)0xF01F8)
#define TO1L (*(volatile unsigned char *)0xF01F8)
#define TOE1 (*(volatile unsigned short *)0xF01FA)
#define TOE1L (*(volatile union un_toe1l *)0xF01FA).toe1l
#define TOE1L_bit (*(volatile union un_toe1l *)0xF01FA).BIT
#define TOL1 (*(volatile unsigned short *)0xF01FC)
#define TOL1L (*(volatile unsigned char *)0xF01FC)
#define TOM1 (*(volatile unsigned short *)0xF01FE)
#define TOM1L (*(volatile unsigned char *)0xF01FE)
#define MIOTRM (*(volatile unsigned char *)0xF0212)
#define LIOTRM (*(volatile unsigned char *)0xF0213)
#define MOSCDIV (*(volatile unsigned char *)0xF0214)
#define WKUPMD (*(volatile union un_wkupmd *)0xF0215).wkupmd
#define WKUPMD_bit (*(volatile union un_wkupmd *)0xF0215).BIT
#define PSMCR (*(volatile union un_psmcr *)0xF0216).psmcr
#define PSMCR_bit (*(volatile union un_psmcr *)0xF0216).BIT
#define LVDFCLR (*(volatile union un_lvdfclr *)0xF0218).lvdfclr
#define LVDFCLR_bit (*(volatile union un_lvdfclr *)0xF0218).BIT
#define SEC (*(volatile unsigned char *)0xF0220)
#define MIN (*(volatile unsigned char *)0xF0221)
#define HOUR (*(volatile unsigned char *)0xF0222)
#define WEEK (*(volatile unsigned char *)0xF0223)
#define DAY (*(volatile unsigned char *)0xF0224)
#define MONTH (*(volatile unsigned char *)0xF0225)
#define YEAR (*(volatile unsigned char *)0xF0226)
#define SUBCUD (*(volatile unsigned char *)0xF0227)
#define ALARMWM (*(volatile unsigned char *)0xF0228)
#define ALARMWH (*(volatile unsigned char *)0xF0229)
#define ALARMWW (*(volatile unsigned char *)0xF022A)
#define RTCC0 (*(volatile union un_rtcc0 *)0xF022B).rtcc0
#define RTCC0_bit (*(volatile union un_rtcc0 *)0xF022B).BIT
#define RTCC1 (*(volatile union un_rtcc1 *)0xF022C).rtcc1
#define RTCC1_bit (*(volatile union un_rtcc1 *)0xF022C).BIT
#define IICCTL00 (*(volatile union un_iicctl00 *)0xF0230).iicctl00
#define IICCTL00_bit (*(volatile union un_iicctl00 *)0xF0230).BIT
#define IICCTL01 (*(volatile union un_iicctl01 *)0xF0231).iicctl01
#define IICCTL01_bit (*(volatile union un_iicctl01 *)0xF0231).BIT
#define IICWL0 (*(volatile unsigned char *)0xF0232)
#define IICWH0 (*(volatile unsigned char *)0xF0233)
#define SVA0 (*(volatile unsigned char *)0xF0234)
#define IICCTL10 (*(volatile union un_iicctl10 *)0xF0238).iicctl10
#define IICCTL10_bit (*(volatile union un_iicctl10 *)0xF0238).BIT
#define IICCTL11 (*(volatile union un_iicctl11 *)0xF0239).iicctl11
#define IICCTL11_bit (*(volatile union un_iicctl11 *)0xF0239).BIT
#define IICWL1 (*(volatile unsigned char *)0xF023A)
#define IICWH1 (*(volatile unsigned char *)0xF023B)
#define SVA1 (*(volatile unsigned char *)0xF023C)
#define PMCT0 (*(volatile union un_pmct0 *)0xF0260).pmct0
#define PMCT0_bit (*(volatile union un_pmct0 *)0xF0260).BIT
#define PMCT2 (*(volatile union un_pmct2 *)0xF0262).pmct2
#define PMCT2_bit (*(volatile union un_pmct2 *)0xF0262).BIT
#define PMCT3 (*(volatile union un_pmct3 *)0xF0263).pmct3
#define PMCT3_bit (*(volatile union un_pmct3 *)0xF0263).BIT
#define PMCT5 (*(volatile union un_pmct5 *)0xF0265).pmct5
#define PMCT5_bit (*(volatile union un_pmct5 *)0xF0265).BIT
#define PMCT6 (*(volatile union un_pmct6 *)0xF0266).pmct6
#define PMCT6_bit (*(volatile union un_pmct6 *)0xF0266).BIT
#define PMCT7 (*(volatile union un_pmct7 *)0xF0267).pmct7
#define PMCT7_bit (*(volatile union un_pmct7 *)0xF0267).BIT
#define PMCT15 (*(volatile union un_pmct15 *)0xF026F).pmct15
#define PMCT15_bit (*(volatile union un_pmct15 *)0xF026F).BIT
#define PMCE0 (*(volatile union un_pmce0 *)0xF0280).pmce0
#define PMCE0_bit (*(volatile union un_pmce0 *)0xF0280).BIT
#define PMCE1 (*(volatile union un_pmce1 *)0xF0281).pmce1
#define PMCE1_bit (*(volatile union un_pmce1 *)0xF0281).BIT
#define PMCE5 (*(volatile union un_pmce5 *)0xF0285).pmce5
#define PMCE5_bit (*(volatile union un_pmce5 *)0xF0285).BIT
#define PMCE6 (*(volatile union un_pmce6 *)0xF0286).pmce6
#define PMCE6_bit (*(volatile union un_pmce6 *)0xF0286).BIT
#define CCS0 (*(volatile unsigned char *)0xF02A0)
#define CCS4 (*(volatile unsigned char *)0xF02A4)
#define CCS5 (*(volatile unsigned char *)0xF02A5)
#define CCS6 (*(volatile unsigned char *)0xF02A6)
#define CCS7 (*(volatile unsigned char *)0xF02A7)
#define CCDE (*(volatile union un_ccde *)0xF02A8).ccde
#define CCDE_bit (*(volatile union un_ccde *)0xF02A8).BIT
#define PTDC (*(volatile union un_ptdc *)0xF02A9).ptdc
#define PTDC_bit (*(volatile union un_ptdc *)0xF02A9).BIT
#define PFOE0 (*(volatile union un_pfoe0 *)0xF02AA).pfoe0
#define PFOE0_bit (*(volatile union un_pfoe0 *)0xF02AA).BIT
#define PFOE1 (*(volatile union un_pfoe1 *)0xF02AB).pfoe1
#define PFOE1_bit (*(volatile union un_pfoe1 *)0xF02AB).BIT
#define PDIDIS0 (*(volatile union un_pdidis0 *)0xF02B0).pdidis0
#define PDIDIS0_bit (*(volatile union un_pdidis0 *)0xF02B0).BIT
#define PDIDIS1 (*(volatile union un_pdidis1 *)0xF02B1).pdidis1
#define PDIDIS1_bit (*(volatile union un_pdidis1 *)0xF02B1).BIT
#define PDIDIS3 (*(volatile union un_pdidis3 *)0xF02B3).pdidis3
#define PDIDIS3_bit (*(volatile union un_pdidis3 *)0xF02B3).BIT
#define PDIDIS4 (*(volatile union un_pdidis4 *)0xF02B4).pdidis4
#define PDIDIS4_bit (*(volatile union un_pdidis4 *)0xF02B4).BIT
#define PDIDIS5 (*(volatile union un_pdidis5 *)0xF02B5).pdidis5
#define PDIDIS5_bit (*(volatile union un_pdidis5 *)0xF02B5).BIT
#define PDIDIS7 (*(volatile union un_pdidis7 *)0xF02B7).pdidis7
#define PDIDIS7_bit (*(volatile union un_pdidis7 *)0xF02B7).BIT
#define PDIDIS8 (*(volatile union un_pdidis8 *)0xF02B8).pdidis8
#define PDIDIS8_bit (*(volatile union un_pdidis8 *)0xF02B8).BIT
#define PDIDIS9 (*(volatile union un_pdidis9 *)0xF02B9).pdidis9
#define PDIDIS9_bit (*(volatile union un_pdidis9 *)0xF02B9).BIT
#define PDIDIS12 (*(volatile union un_pdidis12 *)0xF02BC).pdidis12
#define PDIDIS12_bit (*(volatile union un_pdidis12 *)0xF02BC).BIT
#define PDIDIS13 (*(volatile union un_pdidis13 *)0xF02BD).pdidis13
#define PDIDIS13_bit (*(volatile union un_pdidis13 *)0xF02BD).BIT
#define PDIDIS14 (*(volatile union un_pdidis14 *)0xF02BE).pdidis14
#define PDIDIS14_bit (*(volatile union un_pdidis14 *)0xF02BE).BIT
#define FLPMC (*(volatile unsigned char *)0xF02C0)
#define FLARS (*(volatile union un_flars *)0xF02C1).flars
#define FLARS_bit (*(volatile union un_flars *)0xF02C1).BIT
#define FLAPL (*(volatile unsigned short *)0xF02C2)
#define FLAPH (*(volatile unsigned char *)0xF02C4)
#define FSSQ (*(volatile union un_fssq *)0xF02C5).fssq
#define FSSQ_bit (*(volatile union un_fssq *)0xF02C5).BIT
#define FLSEDL (*(volatile unsigned short *)0xF02C6)
#define FLSEDH (*(volatile unsigned char *)0xF02C8)
#define FLRST (*(volatile union un_flrst *)0xF02C9).flrst
#define FLRST_bit (*(volatile union un_flrst *)0xF02C9).BIT
#define FSASTL (*(volatile union un_fsastl *)0xF02CA).fsastl
#define FSASTL_bit (*(volatile union un_fsastl *)0xF02CA).BIT
#define FSASTH (*(volatile union un_fsasth *)0xF02CB).fsasth
#define FSASTH_bit (*(volatile union un_fsasth *)0xF02CB).BIT
#define FLWL (*(volatile unsigned short *)0xF02CC)
#define FLWH (*(volatile unsigned short *)0xF02CE)
#define DTCBAR (*(volatile unsigned char *)0xF02E0)
#define DTCEN0 (*(volatile union un_dtcen0 *)0xF02E8).dtcen0
#define DTCEN0_bit (*(volatile union un_dtcen0 *)0xF02E8).BIT
#define DTCEN1 (*(volatile union un_dtcen1 *)0xF02E9).dtcen1
#define DTCEN1_bit (*(volatile union un_dtcen1 *)0xF02E9).BIT
#define DTCEN2 (*(volatile union un_dtcen2 *)0xF02EA).dtcen2
#define DTCEN2_bit (*(volatile union un_dtcen2 *)0xF02EA).BIT
#define DTCEN3 (*(volatile union un_dtcen3 *)0xF02EB).dtcen3
#define DTCEN3_bit (*(volatile union un_dtcen3 *)0xF02EB).BIT
#define DTCEN4 (*(volatile union un_dtcen4 *)0xF02EC).dtcen4
#define DTCEN4_bit (*(volatile union un_dtcen4 *)0xF02EC).BIT
#define CRC0CTL (*(volatile union un_crc0ctl *)0xF02F0).crc0ctl
#define CRC0CTL_bit (*(volatile union un_crc0ctl *)0xF02F0).BIT
#define PGCRCL (*(volatile unsigned short *)0xF02F2)
#define CRCD (*(volatile unsigned short *)0xF02FA)
#define TXBA0 (*(volatile unsigned char *)0xF0300)
#define RXBA0 (*(volatile unsigned char *)0xF0301)
#define ASIMA00 (*(volatile union un_asima00 *)0xF0302).asima00
#define ASIMA00_bit (*(volatile union un_asima00 *)0xF0302).BIT
#define ASIMA01 (*(volatile union un_asima01 *)0xF0303).asima01
#define ASIMA01_bit (*(volatile union un_asima01 *)0xF0303).BIT
#define BRGCA0 (*(volatile unsigned char *)0xF0304)
#define ASISA0 (*(volatile unsigned char *)0xF0305)
#define ASCTA0 (*(volatile union un_ascta0 *)0xF0306).ascta0
#define ASCTA0_bit (*(volatile union un_ascta0 *)0xF0306).BIT
#define TXBA1 (*(volatile unsigned char *)0xF0308)
#define RXBA1 (*(volatile unsigned char *)0xF0309)
#define ASIMA10 (*(volatile union un_asima10 *)0xF030A).asima10
#define ASIMA10_bit (*(volatile union un_asima10 *)0xF030A).BIT
#define ASIMA11 (*(volatile union un_asima11 *)0xF030B).asima11
#define ASIMA11_bit (*(volatile union un_asima11 *)0xF030B).BIT
#define BRGCA1 (*(volatile unsigned char *)0xF030C)
#define ASISA1 (*(volatile unsigned char *)0xF030D)
#define ASCTA1 (*(volatile union un_ascta1 *)0xF030E).ascta1
#define ASCTA1_bit (*(volatile union un_ascta1 *)0xF030E).BIT
#define UTA0CK (*(volatile union un_uta0ck *)0xF0310).uta0ck
#define UTA0CK_bit (*(volatile union un_uta0ck *)0xF0310).BIT
#define UTA1CK (*(volatile union un_uta1ck *)0xF0311).uta1ck
#define UTA1CK_bit (*(volatile union un_uta1ck *)0xF0311).BIT
#define DACS0 (*(volatile unsigned char *)0xF0330)
#define DACS1 (*(volatile unsigned char *)0xF0331)
#define DAM (*(volatile union un_dam *)0xF0332).dam
#define DAM_bit (*(volatile union un_dam *)0xF0332).BIT
#define COMPMDR (*(volatile union un_compmdr *)0xF0340).compmdr
#define COMPMDR_bit (*(volatile union un_compmdr *)0xF0340).BIT
#define COMPFIR (*(volatile union un_compfir *)0xF0341).compfir
#define COMPFIR_bit (*(volatile union un_compfir *)0xF0341).BIT
#define COMPOCR (*(volatile union un_compocr *)0xF0342).compocr
#define COMPOCR_bit (*(volatile union un_compocr *)0xF0342).BIT
#define ITLCMP00 (*(volatile unsigned short *)0xF0360)
#define ITLCMP000 (*(volatile unsigned char *)0xF0360)
#define ITLCMP001 (*(volatile unsigned char *)0xF0361)
#define ITLCMP01 (*(volatile unsigned short *)0xF0362)
#define ITLCMP012 (*(volatile unsigned char *)0xF0362)
#define ITLCMP013 (*(volatile unsigned char *)0xF0363)
#define ITLCAP00 (*(volatile unsigned short *)0xF0364)
#define ITLCTL0 (*(volatile union un_itlctl0 *)0xF0366).itlctl0
#define ITLCTL0_bit (*(volatile union un_itlctl0 *)0xF0366).BIT
#define ITLCSEL0 (*(volatile unsigned char *)0xF0367)
#define ITLFDIV00 (*(volatile unsigned char *)0xF0368)
#define ITLFDIV01 (*(volatile unsigned char *)0xF0369)
#define ITLCC0 (*(volatile union un_itlcc0 *)0xF036A).itlcc0
#define ITLCC0_bit (*(volatile union un_itlcc0 *)0xF036A).BIT
#define ITLS0 (*(volatile unsigned char *)0xF036B)
#define ITLMKF0 (*(volatile unsigned char *)0xF036C)
#define SMSI0 (*(volatile unsigned short *)0xF0380)
#define SMSI1 (*(volatile unsigned short *)0xF0382)
#define SMSI2 (*(volatile unsigned short *)0xF0384)
#define SMSI3 (*(volatile unsigned short *)0xF0386)
#define SMSI4 (*(volatile unsigned short *)0xF0388)
#define SMSI5 (*(volatile unsigned short *)0xF038A)
#define SMSI6 (*(volatile unsigned short *)0xF038C)
#define SMSI7 (*(volatile unsigned short *)0xF038E)
#define SMSI8 (*(volatile unsigned short *)0xF0390)
#define SMSI9 (*(volatile unsigned short *)0xF0392)
#define SMSI10 (*(volatile unsigned short *)0xF0394)
#define SMSI11 (*(volatile unsigned short *)0xF0396)
#define SMSI12 (*(volatile unsigned short *)0xF0398)
#define SMSI13 (*(volatile unsigned short *)0xF039A)
#define SMSI14 (*(volatile unsigned short *)0xF039C)
#define SMSI15 (*(volatile unsigned short *)0xF039E)
#define SMSI16 (*(volatile unsigned short *)0xF03A0)
#define SMSI17 (*(volatile unsigned short *)0xF03A2)
#define SMSI18 (*(volatile unsigned short *)0xF03A4)
#define SMSI19 (*(volatile unsigned short *)0xF03A6)
#define SMSI20 (*(volatile unsigned short *)0xF03A8)
#define SMSI21 (*(volatile unsigned short *)0xF03AA)
#define SMSI22 (*(volatile unsigned short *)0xF03AC)
#define SMSI23 (*(volatile unsigned short *)0xF03AE)
#define SMSI24 (*(volatile unsigned short *)0xF03B0)
#define SMSI25 (*(volatile unsigned short *)0xF03B2)
#define SMSI26 (*(volatile unsigned short *)0xF03B4)
#define SMSI27 (*(volatile unsigned short *)0xF03B6)
#define SMSI28 (*(volatile unsigned short *)0xF03B8)
#define SMSI29 (*(volatile unsigned short *)0xF03BA)
#define SMSI30 (*(volatile unsigned short *)0xF03BC)
#define SMSI31 (*(volatile unsigned short *)0xF03BE)
#define SMSG0 (*(volatile unsigned short *)0xF03C0)
#define SMSG1 (*(volatile unsigned short *)0xF03C2)
#define SMSG2 (*(volatile unsigned short *)0xF03C4)
#define SMSG3 (*(volatile unsigned short *)0xF03C6)
#define SMSG4 (*(volatile unsigned short *)0xF03C8)
#define SMSG5 (*(volatile unsigned short *)0xF03CA)
#define SMSG6 (*(volatile unsigned short *)0xF03CC)
#define SMSG7 (*(volatile unsigned short *)0xF03CE)
#define SMSG8 (*(volatile unsigned short *)0xF03D0)
#define SMSG9 (*(volatile unsigned short *)0xF03D2)
#define SMSG10 (*(volatile unsigned short *)0xF03D4)
#define SMSG11 (*(volatile unsigned short *)0xF03D6)
#define SMSG12 (*(volatile unsigned short *)0xF03D8)
#define SMSG13 (*(volatile unsigned short *)0xF03DA)
#define SMSG14 (*(volatile unsigned short *)0xF03DC)
#define SMSG15 (*(volatile unsigned short *)0xF03DE)
#define SMSC (*(volatile union un_smsc *)0xF03E0).smsc
#define SMSC_bit (*(volatile union un_smsc *)0xF03E0).BIT
#define SMSS (*(volatile union un_smss *)0xF03E1).smss
#define SMSS_bit (*(volatile union un_smss *)0xF03E1).BIT
#define FLSIVC0 (*(volatile unsigned short *)0xF0480)
#define FLSIVC1 (*(volatile unsigned short *)0xF0482)
#define GFLASH0 (*(volatile unsigned short *)0xF0488)
#define GFLASH1 (*(volatile unsigned short *)0xF048A)
#define GFLASH2 (*(volatile unsigned short *)0xF048C)
#define GIAWCTL (*(volatile unsigned short *)0xF048E)
#define CTSUCRAL (*(volatile unsigned short *)0xF0500)
#define CTSUCR0 (*(volatile unsigned char *)0xF0500)
#define CTSUCR1 (*(volatile unsigned char *)0xF0501)
#define CTSUCRAH (*(volatile unsigned short *)0xF0502)
#define CTSUCR2 (*(volatile unsigned char *)0xF0502)
#define CTSUCR3 (*(volatile unsigned char *)0xF0503)
#define CTSUCRBL (*(volatile unsigned short *)0xF0504)
#define CTSUSDPRS (*(volatile unsigned char *)0xF0504)
#define CTSUSST (*(volatile unsigned char *)0xF0505)
#define CTSUCRBH (*(volatile unsigned short *)0xF0506)
#define CTSUDCLKC (*(volatile unsigned char *)0xF0507)
#define CTSUMCHL (*(volatile unsigned short *)0xF0508)
#define CTSUMCH0 (*(volatile unsigned char *)0xF0508)
#define CTSUMCH1 (*(volatile unsigned char *)0xF0509)
#define CTSUMCHH (*(volatile unsigned short *)0xF050A)
#define CTSUMFAF (*(volatile unsigned char *)0xF050A)
#define CTSUCHACAL (*(volatile unsigned short *)0xF050C)
#define CTSUCHAC0 (*(volatile unsigned char *)0xF050C)
#define CTSUCHAC1 (*(volatile unsigned char *)0xF050D)
#define CTSUCHACAH (*(volatile unsigned short *)0xF050E)
#define CTSUCHAC2 (*(volatile unsigned char *)0xF050E)
#define CTSUCHAC3 (*(volatile unsigned char *)0xF050F)
#define CTSUCHACBL (*(volatile unsigned short *)0xF0510)
#define CTSUCHAC4 (*(volatile unsigned char *)0xF0510)
#define CTSUCHAC5 (*(volatile unsigned char *)0xF0511)
#define CTSUCHACBH (*(volatile unsigned short *)0xF0512)
#define CTSUCHAC6 (*(volatile unsigned char *)0xF0512)
#define CTSUCHAC7 (*(volatile unsigned char *)0xF0513)
#define CTSUCHTRCAL (*(volatile unsigned short *)0xF0514)
#define CTSUCHTRC0 (*(volatile unsigned char *)0xF0514)
#define CTSUCHTRC1 (*(volatile unsigned char *)0xF0515)
#define CTSUCHTRCAH (*(volatile unsigned short *)0xF0516)
#define CTSUCHTRC2 (*(volatile unsigned char *)0xF0516)
#define CTSUCHTRC3 (*(volatile unsigned char *)0xF0517)
#define CTSUCHTRCBL (*(volatile unsigned short *)0xF0518)
#define CTSUCHTRC4 (*(volatile unsigned char *)0xF0518)
#define CTSUCHTRC5 (*(volatile unsigned char *)0xF0519)
#define CTSUCHTRCBH (*(volatile unsigned short *)0xF051A)
#define CTSUCHTRC6 (*(volatile unsigned char *)0xF051A)
#define CTSUCHTRC7 (*(volatile unsigned char *)0xF051B)
#define CTSUSRL (*(volatile unsigned short *)0xF051C)
#define CTSUST1 (*(volatile unsigned char *)0xF051C)
#define CTSUST (*(volatile unsigned char *)0xF051D)
#define CTSUSRH (*(volatile unsigned short *)0xF051E)
#define CTSUST2 (*(volatile unsigned char *)0xF051E)
#define CTSUSO0 (*(volatile unsigned short *)0xF0520)
#define CTSUSO1 (*(volatile unsigned short *)0xF0522)
#define CTSUSC (*(volatile unsigned short *)0xF0524)
#define CTSUUC (*(volatile unsigned short *)0xF0526)
#define CTSUDBGR0 (*(volatile unsigned short *)0xF0528)
#define CTSUDBGR1 (*(volatile unsigned short *)0xF052A)
#define CTSUSUCLK0 (*(volatile unsigned short *)0xF052C)
#define CTSUSUCLK1 (*(volatile unsigned short *)0xF052E)
#define CTSUSUCLK2 (*(volatile unsigned short *)0xF0530)
#define CTSUSUCLK3 (*(volatile unsigned short *)0xF0532)
#define TRNGSDR (*(volatile unsigned char *)0xF0540)
#define TRNGSCR0 (*(volatile unsigned char *)0xF0542)
#define CTSUTRIM0 (*(volatile unsigned short *)0xF0600)
#define RTRIM (*(volatile unsigned char *)0xF0600)
#define DACTRIM (*(volatile unsigned char *)0xF0601)
#define CTSUTRIM1 (*(volatile unsigned short *)0xF0602)
#define SUADJD (*(volatile unsigned char *)0xF0602)
#define TRESULT4 (*(volatile unsigned char *)0xF0603)
#define CTSUTRIM2 (*(volatile unsigned short *)0xF0604)
#define TRESULT0 (*(volatile unsigned char *)0xF0604)
#define TRESULT1 (*(volatile unsigned char *)0xF0605)
#define CTSUTRIM3 (*(volatile unsigned short *)0xF0606)
#define TRESULT2 (*(volatile unsigned char *)0xF0606)
#define TRESULT3 (*(volatile unsigned char *)0xF0607)
#define REMCON0 (*(volatile union un_remcon0 *)0xF0640).remcon0
#define REMCON0_bit (*(volatile union un_remcon0 *)0xF0640).BIT
#define REMCON1 (*(volatile union un_remcon1 *)0xF0641).remcon1
#define REMCON1_bit (*(volatile union un_remcon1 *)0xF0641).BIT
#define REMSTS (*(volatile union un_remsts *)0xF0642).remsts
#define REMSTS_bit (*(volatile union un_remsts *)0xF0642).BIT
#define REMINT (*(volatile union un_remint *)0xF0643).remint
#define REMINT_bit (*(volatile union un_remint *)0xF0643).BIT
#define REMCPC (*(volatile unsigned char *)0xF0645)
#define REMCPD (*(volatile unsigned short *)0xF0646)
#define HDPMIN (*(volatile unsigned short *)0xF0648)
#define HDPMAX (*(volatile unsigned short *)0xF064A)
#define D0PMIN (*(volatile unsigned char *)0xF064C)
#define D0PMAX (*(volatile unsigned char *)0xF064D)
#define D1PMIN (*(volatile unsigned char *)0xF064E)
#define D1PMAX (*(volatile unsigned char *)0xF064F)
#define SDPMIN (*(volatile unsigned short *)0xF0650)
#define SDPMAX (*(volatile unsigned short *)0xF0652)
#define REMPE (*(volatile unsigned short *)0xF0654)
#define REMSTC (*(volatile union un_remstc *)0xF0656).remstc
#define REMSTC_bit (*(volatile union un_remstc *)0xF0656).BIT
#define REMRBIT (*(volatile union un_remrbit *)0xF0657).remrbit
#define REMRBIT_bit (*(volatile union un_remrbit *)0xF0657).BIT
#define REMDAT0 (*(volatile union un_remdat0 *)0xF0658).remdat0
#define REMDAT0_bit (*(volatile union un_remdat0 *)0xF0658).BIT
#define REMDAT1 (*(volatile unsigned char *)0xF0659)
#define REMDAT2 (*(volatile unsigned char *)0xF065A)
#define REMDAT3 (*(volatile unsigned char *)0xF065B)
#define REMDAT4 (*(volatile unsigned char *)0xF065C)
#define REMDAT5 (*(volatile unsigned char *)0xF065D)
#define REMDAT6 (*(volatile unsigned char *)0xF065E)
#define REMDAT7 (*(volatile unsigned char *)0xF065F)
#define REMTIM (*(volatile unsigned short *)0xF0660)
#define ELISEL0 (*(volatile unsigned char *)0xF0680)
#define ELISEL1 (*(volatile unsigned char *)0xF0681)
#define ELISEL2 (*(volatile unsigned char *)0xF0682)
#define ELISEL3 (*(volatile unsigned char *)0xF0683)
#define ELISEL4 (*(volatile unsigned char *)0xF0684)
#define ELISEL5 (*(volatile unsigned char *)0xF0685)
#define ELISEL6 (*(volatile unsigned char *)0xF0686)
#define ELISEL7 (*(volatile unsigned char *)0xF0687)
#define ELISEL8 (*(volatile unsigned char *)0xF0688)
#define ELISEL9 (*(volatile unsigned char *)0xF0689)
#define ELISEL10 (*(volatile unsigned char *)0xF068A)
#define ELISEL11 (*(volatile unsigned char *)0xF068B)
#define ELL1SEL0 (*(volatile unsigned char *)0xF0690)
#define ELL1SEL1 (*(volatile unsigned char *)0xF0691)
#define ELL1SEL2 (*(volatile unsigned char *)0xF0692)
#define ELL1SEL3 (*(volatile unsigned char *)0xF0693)
#define ELL1SEL4 (*(volatile unsigned char *)0xF0694)
#define ELL1SEL5 (*(volatile unsigned char *)0xF0695)
#define ELL1SEL6 (*(volatile unsigned char *)0xF0696)
#define ELL1CTL (*(volatile unsigned char *)0xF0697)
#define ELL1LNK0 (*(volatile unsigned char *)0xF0698)
#define ELL1LNK1 (*(volatile unsigned char *)0xF0699)
#define ELL1LNK2 (*(volatile unsigned char *)0xF069A)
#define ELL1LNK3 (*(volatile unsigned char *)0xF069B)
#define ELL1LNK4 (*(volatile unsigned char *)0xF069C)
#define ELL1LNK5 (*(volatile unsigned char *)0xF069D)
#define ELL1LNK6 (*(volatile unsigned char *)0xF069E)
#define ELL2SEL0 (*(volatile unsigned char *)0xF06A0)
#define ELL2SEL1 (*(volatile unsigned char *)0xF06A1)
#define ELL2SEL2 (*(volatile unsigned char *)0xF06A2)
#define ELL2SEL3 (*(volatile unsigned char *)0xF06A3)
#define ELL2SEL4 (*(volatile unsigned char *)0xF06A4)
#define ELL2SEL5 (*(volatile unsigned char *)0xF06A5)
#define ELL2SEL6 (*(volatile unsigned char *)0xF06A6)
#define ELL2CTL (*(volatile unsigned char *)0xF06A7)
#define ELL2LNK0 (*(volatile unsigned char *)0xF06A8)
#define ELL2LNK1 (*(volatile unsigned char *)0xF06A9)
#define ELL2LNK2 (*(volatile unsigned char *)0xF06AA)
#define ELL2LNK3 (*(volatile unsigned char *)0xF06AB)
#define ELL2LNK4 (*(volatile unsigned char *)0xF06AC)
#define ELL2LNK5 (*(volatile unsigned char *)0xF06AD)
#define ELL2LNK6 (*(volatile unsigned char *)0xF06AE)
#define ELL3SEL0 (*(volatile unsigned char *)0xF06B0)
#define ELL3SEL1 (*(volatile unsigned char *)0xF06B1)
#define ELL3SEL2 (*(volatile unsigned char *)0xF06B2)
#define ELL3SEL3 (*(volatile unsigned char *)0xF06B3)
#define ELL3SEL4 (*(volatile unsigned char *)0xF06B4)
#define ELL3SEL5 (*(volatile unsigned char *)0xF06B5)
#define ELL3SEL6 (*(volatile unsigned char *)0xF06B6)
#define ELL3CTL (*(volatile unsigned char *)0xF06B7)
#define ELL3LNK0 (*(volatile unsigned char *)0xF06B8)
#define ELL3LNK1 (*(volatile unsigned char *)0xF06B9)
#define ELL3LNK2 (*(volatile unsigned char *)0xF06BA)
#define ELL3LNK3 (*(volatile unsigned char *)0xF06BB)
#define ELL3LNK4 (*(volatile unsigned char *)0xF06BC)
#define ELL3LNK5 (*(volatile unsigned char *)0xF06BD)
#define ELL3LNK6 (*(volatile unsigned char *)0xF06BE)
#define ELOSEL0 (*(volatile unsigned char *)0xF06C0)
#define ELOSEL1 (*(volatile unsigned char *)0xF06C1)
#define ELOSEL2 (*(volatile unsigned char *)0xF06C2)
#define ELOSEL3 (*(volatile unsigned char *)0xF06C3)
#define ELOSEL4 (*(volatile unsigned char *)0xF06C4)
#define ELOSEL5 (*(volatile unsigned char *)0xF06C5)
#define ELOSEL6 (*(volatile unsigned char *)0xF06C6)
#define ELOSEL7 (*(volatile unsigned char *)0xF06C7)
#define ELOENCTL (*(volatile unsigned char *)0xF06C8)
#define ELOMONI (*(volatile unsigned char *)0xF06C9)

/*
 Sfr bits
 */
#define ADTYP0 ADM2_bit.no0
#define ADTYP1 ADM2_bit.no1
#define AWC ADM2_bit.no2
#define ADRCK ADM2_bit.no3
#define ULBS0 ULBS_bit.no0
#define ULBS1 ULBS_bit.no1
#define ULBS2 ULBS_bit.no2
#define ULBS3 ULBS_bit.no3
#define ULBS4 ULBS_bit.no4
#define ULBS5 ULBS_bit.no5
#define DFLEN DFLCTL_bit.no0
#define MODE0 FLMODE_bit.no6
#define MODE1 FLMODE_bit.no7
#define FLMWEN FLMWRP_bit.no0
#define ESQST FSSE_bit.no7
#define TAU0EN PER0_bit.no0
#define TAU1EN PER0_bit.no1
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define IICA1EN PER0_bit.no6
#define RTCWEN PER0_bit.no7
#define TAU0RES PRR0_bit.no0
#define TAU1RES PRR0_bit.no1
#define SAU0RES PRR0_bit.no2
#define SAU1RES PRR0_bit.no3
#define IICA0RES PRR0_bit.no4
#define ADCRES PRR0_bit.no5
#define IICA1RES PRR0_bit.no6
#define HIPREC OSMC_bit.no0
#define WUTMMCK0 OSMC_bit.no4
#define RTCLPC OSMC_bit.no7
#define RPEF RPECTL_bit.no0
#define RPERDIS RPECTL_bit.no7
#define PORF PORSR_bit.no0
#define CTSUEN PER1_bit.no0
#define REMCEN PER1_bit.no1
#define UTAEN PER1_bit.no2
#define DTCEN PER1_bit.no3
#define TML32EN PER1_bit.no4
#define CMPEN PER1_bit.no5
#define SMSEN PER1_bit.no6
#define DACEN PER1_bit.no7
#define CTSURES PRR1_bit.no0
#define REMCRES PRR1_bit.no1
#define TML32RES PRR1_bit.no4
#define CMPRES PRR1_bit.no5
#define SMSRES PRR1_bit.no6
#define DACRES PRR1_bit.no7
#define FWKUP WKUPMD_bit.no0
#define RAMSDS PSMCR_bit.no0
#define RAMSDMD PSMCR_bit.no1
#define DLVD0FCLR LVDFCLR_bit.no2
#define DLVD1FCLR LVDFCLR_bit.no3
#define RTC128EN RTCC0_bit.no4
#define RCLOE1 RTCC0_bit.no5
#define RTCE RTCC0_bit.no7
#define RWAIT RTCC1_bit.no0
#define RWST RTCC1_bit.no1
#define RIFG RTCC1_bit.no3
#define WAFG RTCC1_bit.no4
#define WALIE RTCC1_bit.no6
#define WALE RTCC1_bit.no7
#define SPT0 IICCTL00_bit.no0
#define STT0 IICCTL00_bit.no1
#define ACKE0 IICCTL00_bit.no2
#define WTIM0 IICCTL00_bit.no3
#define SPIE0 IICCTL00_bit.no4
#define WREL0 IICCTL00_bit.no5
#define LREL0 IICCTL00_bit.no6
#define IICE0 IICCTL00_bit.no7
#define PRS0 IICCTL01_bit.no0
#define DFC0 IICCTL01_bit.no2
#define SMC0 IICCTL01_bit.no3
#define DAD0 IICCTL01_bit.no4
#define CLD0 IICCTL01_bit.no5
#define SVADIS0 IICCTL01_bit.no6
#define WUP0 IICCTL01_bit.no7
#define SPT1 IICCTL10_bit.no0
#define STT1 IICCTL10_bit.no1
#define ACKE1 IICCTL10_bit.no2
#define WTIM1 IICCTL10_bit.no3
#define SPIE1 IICCTL10_bit.no4
#define WREL1 IICCTL10_bit.no5
#define LREL1 IICCTL10_bit.no6
#define IICE1 IICCTL10_bit.no7
#define PRS1 IICCTL11_bit.no0
#define DFC1 IICCTL11_bit.no2
#define SMC1 IICCTL11_bit.no3
#define DAD1 IICCTL11_bit.no4
#define CLD1 IICCTL11_bit.no5
#define SVADIS1 IICCTL11_bit.no6
#define WUP1 IICCTL11_bit.no7
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define CRC0EN CRC0CTL_bit.no7
#define ISRMA0 ASIMA00_bit.no0
#define ISSMA0 ASIMA00_bit.no1
#define RXEA0 ASIMA00_bit.no5
#define TXEA0 ASIMA00_bit.no6
#define UARTAEN0 ASIMA00_bit.no7
#define OVECTA0 ASCTA0_bit.no0
#define FECTA0 ASCTA0_bit.no1
#define PECTA0 ASCTA0_bit.no2
#define ISRMA1 ASIMA10_bit.no0
#define ISSMA1 ASIMA10_bit.no1
#define RXEA1 ASIMA10_bit.no5
#define TXEA1 ASIMA10_bit.no6
#define UARTAEN1 ASIMA10_bit.no7
#define OVECTA1 ASCTA1_bit.no0
#define FECTA1 ASCTA1_bit.no1
#define PECTA1 ASCTA1_bit.no2
#define DACE0 DAM_bit.no4
#define DACE1 DAM_bit.no5
#define C0ENB COMPMDR_bit.no0
#define C1ENB COMPMDR_bit.no4
#define C0IE COMPOCR_bit.no0
#define C0OE COMPOCR_bit.no1
#define C1IE COMPOCR_bit.no4
#define C1OE COMPOCR_bit.no5
#define ITLEN00 ITLCTL0_bit.no0
#define ITLEN01 ITLCTL0_bit.no1
#define ITLEN02 ITLCTL0_bit.no2
#define ITLEN03 ITLCTL0_bit.no3
#define CAPR0 ITLCC0_bit.no4
#define CAPF0CR ITLCC0_bit.no6
#define LONGWAIT SMSC_bit.no4
#define SMSTRGWAIT SMSC_bit.no5
#define SMSSTOP SMSC_bit.no6
#define SMSSTART SMSC_bit.no7
#define SMSSTAT SMSS_bit.no7
#define ENFLG REMCON0_bit.no0
#define INFLG REMCON0_bit.no3
#define EN REMCON1_bit.no2
#define INTMD REMCON1_bit.no3
#define CPFLG REMSTS_bit.no0
#define REFLG REMSTS_bit.no1
#define DRFLG REMSTS_bit.no2
#define BFULFLG REMSTS_bit.no3
#define HDFLG REMSTS_bit.no4
#define D0FLG REMSTS_bit.no5
#define D1FLG REMSTS_bit.no6
#define SDFLG REMSTS_bit.no7
#define CPINT REMINT_bit.no0
#define REINT REMINT_bit.no1
#define DRINT REMINT_bit.no2
#define BFULINT REMINT_bit.no3
#define HDINT REMINT_bit.no4
#define DINT REMINT_bit.no5
#define SDINT REMINT_bit.no7
#define SNZON REMSTC_bit.no0
#define RBIT0 REMRBIT_bit.no0
#define DAT00 REMDAT0_bit.no0

/*
 Interrupt vector addresses
 */
#endif

#endif
