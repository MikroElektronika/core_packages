/*
 * Generated MCU header wrapper for Renesas RL78/L23.
 *
 * The register definitions below are taken without semantic changes from the
 * RL78/L23 iodefine.h and iodefine_ext.h sources from the Renesas GitHub repo
 * https://github.com/renesas/ArduinoCore-rl78l23_fpb.
 */
#ifndef MIKROE_RL78_L23_MCU_H
#define MIKROE_RL78_L23_MCU_H

/* ==================== Renesas iodefine.h ==================== */
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
* Copyright (C) 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : iodefine.h
* Description  :
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 03.12.2024 1.90     First Release.
***********************************************************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() __builtin_rl78_di()
#define EI() __builtin_rl78_ei()
#define HALT() __halt()
#define NOP() __nop()
#define STOP() __stop()

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
union un_pm12 {
	unsigned char pm12;
	__BITS8 BIT;
};
union un_pm14 {
	unsigned char pm14;
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
union un_lcdm1 {
	unsigned char lcdm1;
	__BITS8 BIT;
};
union un_mlcd {
	unsigned char mlcd;
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
#define P12 (*(volatile union un_p12 *)0xFFF0C).p12
#define P12_bit (*(volatile union un_p12 *)0xFFF0C).BIT
#define P13 (*(volatile union un_p13 *)0xFFF0D).p13
#define P13_bit (*(volatile union un_p13 *)0xFFF0D).BIT
#define P14 (*(volatile union un_p14 *)0xFFF0E).p14
#define P14_bit (*(volatile union un_p14 *)0xFFF0E).BIT
#define SDR00 (*(volatile unsigned short *)0xFFF10)
#define SIO00 (*(volatile unsigned char *)0xFFF10)
#define TXD0 (*(volatile unsigned char *)0xFFF10)
#define SDR01 (*(volatile unsigned short *)0xFFF12)
#define RXD0 (*(volatile unsigned char *)0xFFF12)
#define SIO01 (*(volatile unsigned char *)0xFFF12)
#define SDR12 (*(volatile unsigned short *)0xFFF14)
#define TXD3 (*(volatile unsigned char *)0xFFF14)
#define SIO30 (*(volatile unsigned char *)0xFFF14)
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
#define PM12 (*(volatile union un_pm12 *)0xFFF2C).pm12
#define PM12_bit (*(volatile union un_pm12 *)0xFFF2C).BIT
#define PM14 (*(volatile union un_pm14 *)0xFFF2E).pm14
#define PM14_bit (*(volatile union un_pm14 *)0xFFF2E).BIT
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
#define LCDM0 (*(volatile unsigned char *)0xFFF40)
#define LCDM1 (*(volatile union un_lcdm1 *)0xFFF41).lcdm1
#define LCDM1_bit (*(volatile union un_lcdm1 *)0xFFF41).BIT
#define LCDC0 (*(volatile unsigned char *)0xFFF42)
#define VLCD (*(volatile unsigned char *)0xFFF43)
#define SDR02 (*(volatile unsigned short *)0xFFF44)
#define TXD1 (*(volatile unsigned char *)0xFFF44)
#define SIO10 (*(volatile unsigned char *)0xFFF44)
#define SDR03 (*(volatile unsigned short *)0xFFF46)
#define RXD1 (*(volatile unsigned char *)0xFFF46)
#define SIO11 (*(volatile unsigned char *)0xFFF46)
#define SDR10 (*(volatile unsigned short *)0xFFF48)
#define TXD2 (*(volatile unsigned char *)0xFFF48)
#define SIO20 (*(volatile unsigned char *)0xFFF48)
#define SDR11 (*(volatile unsigned short *)0xFFF4A)
#define RXD2 (*(volatile unsigned char *)0xFFF4A)
#define SIO21 (*(volatile unsigned char *)0xFFF4A)
#define MLCD (*(volatile union un_mlcd *)0xFFF4C).mlcd
#define MLCD_bit (*(volatile union un_mlcd *)0xFFF4C).BIT
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
#define LCDVLM LCDM1_bit.no0
#define LCDSEL LCDM1_bit.no3
#define BLON LCDM1_bit.no4
#define VLCON LCDM1_bit.no5
#define SCOC LCDM1_bit.no6
#define LCDON LCDM1_bit.no7
#define OPTCKE MLCD_bit.no4
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
#define UREIF3 IF2L_bit.no0
#define TMIF06 IF2L_bit.no1
#define ITIF50 IF2L_bit.no1
#define ITIF60 IF2L_bit.no2
#define TMIF07 IF2L_bit.no2
#define PIF6 IF2L_bit.no3
#define PIF7 IF2L_bit.no4
#define ITIF10 IF2L_bit.no5
#define OSDIF IF2L_bit.no6
#define PIF9 IF2L_bit.no6
#define FLIF IF2L_bit.no7
#define CMPIF0 IF2H_bit.no0
#define CMPIF1 IF2H_bit.no1
#define ITIF70 IF2H_bit.no2
#define UREIF0 IF2H_bit.no2
#define UREIF1 IF2H_bit.no3
#define TMKBIF1 IF2H_bit.no3
#define UREIF2 IF2H_bit.no4
#define TMKBIF2 IF2H_bit.no4
#define TRJIF1 IF2H_bit.no5
#define SREIF3 IF2H_bit.no5
#define CTSUWRIF IF2H_bit.no6
#define IICAIF1 IF2H_bit.no7
#define CTSURDIF IF3L_bit.no0
#define CTSUFNIF IF3L_bit.no1
#define TRJIF0 IF3L_bit.no2
#define UTIF0 IF3L_bit.no3
#define URIF0 IF3L_bit.no4
#define UTIF1 IF3L_bit.no5
#define URIF1 IF3L_bit.no6
#define UTIF2 IF3L_bit.no7
#define URIF2 IF3H_bit.no0
#define UTIF3 IF3H_bit.no1
#define URIF3 IF3H_bit.no2
#define TMKBIF0 IF3H_bit.no3
#define EXSDIF IF3H_bit.no4
#define TMMK05 MK2L_bit.no0
#define UREMK3 MK2L_bit.no0
#define TMMK06 MK2L_bit.no1
#define ITMK50 MK2L_bit.no1
#define TMMK07 MK2L_bit.no2
#define ITMK60 MK2L_bit.no2
#define PMK6 MK2L_bit.no3
#define PMK7 MK2L_bit.no4
#define ITMK10 MK2L_bit.no5
#define OSDMK MK2L_bit.no6
#define FLMK MK2L_bit.no7
#define CMPMK0 MK2H_bit.no0
#define CMPMK1 MK2H_bit.no1
#define ITMK70 MK2H_bit.no2
#define UREMK0 MK2H_bit.no2
#define TMKBMK1 MK2H_bit.no3
#define UREMK1 MK2H_bit.no3
#define TMKBMK2 MK2H_bit.no4
#define UREMK2 MK2H_bit.no4
#define TRJMK1 MK2H_bit.no5
#define SREMK3 MK2H_bit.no5
#define CTSUWRMK MK2H_bit.no6
#define IICAMK1 MK2H_bit.no7
#define CTSURDMK MK3L_bit.no0
#define CTSUFNMK MK3L_bit.no1
#define TRJMK0 MK3L_bit.no2
#define UTMK0 MK3L_bit.no3
#define URMK0 MK3L_bit.no4
#define UTMK1 MK3L_bit.no5
#define URMK1 MK3L_bit.no6
#define UTMK2 MK3L_bit.no7
#define URMK2 MK3H_bit.no0
#define UTMK3 MK3H_bit.no1
#define URMK3 MK3H_bit.no2
#define TMKBMK0 MK3H_bit.no3
#define EXSDMK MK3H_bit.no4
#define TMPR005 PR02L_bit.no0
#define UREPR03 PR02L_bit.no0
#define TMPR006 PR02L_bit.no1
#define ITPR050 PR02L_bit.no1
#define ITPR060 PR02L_bit.no2
#define TMPR007 PR02L_bit.no2
#define PPR06 PR02L_bit.no3
#define PPR07 PR02L_bit.no4
#define ITPR010 PR02L_bit.no5
#define OSDPR0 PR02L_bit.no6
#define FLPR0 PR02L_bit.no7
#define CMPPR00 PR02H_bit.no0
#define CMPPR01 PR02H_bit.no1
#define ITPR070 PR02H_bit.no2
#define UREPR00 PR02H_bit.no2
#define TMKBPR01 PR02H_bit.no3
#define UREPR01 PR02H_bit.no3
#define TMKBPR02 PR02H_bit.no4
#define UREPR02 PR02H_bit.no4
#define TRJPR01 PR02H_bit.no5
#define SREPR03 PR02H_bit.no5
#define CTSUWRPR0 PR02H_bit.no6
#define IICAPR01 PR02H_bit.no7
#define CTSURDPR0 PR03L_bit.no0
#define CTSUFNPR0 PR03L_bit.no1
#define TRJPR00 PR03L_bit.no2
#define UTPR00 PR03L_bit.no3
#define URPR00 PR03L_bit.no4
#define UTPR01 PR03L_bit.no5
#define URPR01 PR03L_bit.no6
#define UTPR02 PR03L_bit.no7
#define URPR02 PR03H_bit.no0
#define UTPR03 PR03H_bit.no1
#define URPR03 PR03H_bit.no2
#define TMKBPR00 PR03H_bit.no3
#define EXSDPR0 PR03H_bit.no4
#define TMPR105 PR12L_bit.no0
#define UREPR13 PR12L_bit.no0
#define ITPR150 PR12L_bit.no1
#define TMPR106 PR12L_bit.no1
#define ITPR160 PR12L_bit.no2
#define TMPR107 PR12L_bit.no2
#define PPR16 PR12L_bit.no3
#define PPR17 PR12L_bit.no4
#define ITPR110 PR12L_bit.no5
#define OSDPR1 PR12L_bit.no6
#define FLPR1 PR12L_bit.no7
#define CMPPR10 PR12H_bit.no0
#define CMPPR11 PR12H_bit.no1
#define ITPR170 PR12H_bit.no2
#define UREPR10 PR12H_bit.no2
#define TMKBPR11 PR12H_bit.no3
#define UREPR11 PR12H_bit.no3
#define TMKBPR12 PR12H_bit.no4
#define UREPR12 PR12H_bit.no4
#define SREPR13 PR12H_bit.no5
#define TRJPR11 PR12H_bit.no5
#define CTSUWRPR1 PR12H_bit.no6
#define IICAPR11 PR12H_bit.no7
#define CTSURDPR1 PR13L_bit.no0
#define CTSUFNPR1 PR13L_bit.no1
#define TRJPR10 PR13L_bit.no2
#define UTPR10 PR13L_bit.no3
#define URPR10 PR13L_bit.no4
#define UTPR11 PR13L_bit.no5
#define URPR11 PR13L_bit.no6
#define UTPR12 PR13L_bit.no7
#define URPR12 PR13H_bit.no0
#define UTPR13 PR13H_bit.no1
#define URPR13 PR13H_bit.no2
#define TMKBPR10 PR13H_bit.no3
#define EXSDPR1 PR13H_bit.no4
#define WDTIIF IF0L_bit.no0
#define LVIIF IF0L_bit.no1
#define PIF0 IF0L_bit.no2
#define PIF1 IF0L_bit.no3
#define PIF2 IF0L_bit.no4
#define PIF3 IF0L_bit.no5
#define PIF4 IF0L_bit.no6
#define PIF5 IF0L_bit.no7
#define STIF2 IF0H_bit.no0
#define CSIIF20 IF0H_bit.no0
#define IICIF20 IF0H_bit.no0
#define ITIF01 IF0H_bit.no0
#define SRIF2 IF0H_bit.no1
#define ITIF41 IF0H_bit.no1
#define CSIIF21 IF0H_bit.no1
#define IICIF21 IF0H_bit.no1
#define ITIF20 IF0H_bit.no2
#define SREIF2 IF0H_bit.no2
#define ELCLIF IF0H_bit.no3
#define SMSEIF IF0H_bit.no4
#define STIF0 IF0H_bit.no5
#define ITIF21 IF0H_bit.no5
#define IICIF00 IF0H_bit.no5
#define CSIIF00 IF0H_bit.no5
#define TMIF00 IF0H_bit.no6
#define TMIF01H IF0H_bit.no7
#define ITIF30 IF0H_bit.no7
#define SREIF0 IF0H_bit.no7
#define STIF1 IF1L_bit.no0
#define IICIF10 IF1L_bit.no0
#define ITIF11 IF1L_bit.no0
#define CSIIF10 IF1L_bit.no0
#define ITIF61 IF1L_bit.no1
#define SRIF1 IF1L_bit.no1
#define IICIF11 IF1L_bit.no1
#define CSIIF11 IF1L_bit.no1
#define TMIF03H IF1L_bit.no2
#define ITIF40 IF1L_bit.no2
#define SREIF1 IF1L_bit.no2
#define IICAIF0 IF1L_bit.no3
#define ITIF51 IF1L_bit.no4
#define SRIF0 IF1L_bit.no4
#define IICIF01 IF1L_bit.no4
#define CSIIF01 IF1L_bit.no4
#define TMIF01 IF1L_bit.no5
#define TMIF02 IF1L_bit.no6
#define TMIF03 IF1L_bit.no7
#define ADIF IF1H_bit.no0
#define RTCIF IF1H_bit.no1
#define ITLIF IF1H_bit.no2
#define KRIF IF1H_bit.no3
#define STIF3 IF1H_bit.no4
#define ITIF31 IF1H_bit.no4
#define CSIIF30 IF1H_bit.no4
#define IICIF30 IF1H_bit.no4
#define SRIF3 IF1H_bit.no5
#define ITIF71 IF1H_bit.no5
#define CSIIF31 IF1H_bit.no5
#define IICIF31 IF1H_bit.no5
#define ITIF00 IF1H_bit.no6
#define TMIF04 IF1H_bit.no7
#define WDTIMK MK0L_bit.no0
#define LVIMK MK0L_bit.no1
#define PMK0 MK0L_bit.no2
#define PMK1 MK0L_bit.no3
#define PMK2 MK0L_bit.no4
#define PMK3 MK0L_bit.no5
#define PMK4 MK0L_bit.no6
#define PMK5 MK0L_bit.no7
#define STMK2 MK0H_bit.no0
#define ITMK01 MK0H_bit.no0
#define CSIMK20 MK0H_bit.no0
#define IICMK20 MK0H_bit.no0
#define ITMK41 MK0H_bit.no1
#define SRMK2 MK0H_bit.no1
#define CSIMK21 MK0H_bit.no1
#define IICMK21 MK0H_bit.no1
#define ITMK20 MK0H_bit.no2
#define SREMK2 MK0H_bit.no2
#define ELCLMK MK0H_bit.no3
#define SMSEMK MK0H_bit.no4
#define STMK0 MK0H_bit.no5
#define ITMK21 MK0H_bit.no5
#define CSIMK00 MK0H_bit.no5
#define IICMK00 MK0H_bit.no5
#define TMMK00 MK0H_bit.no6
#define ITMK30 MK0H_bit.no7
#define TMMK01H MK0H_bit.no7
#define SREMK0 MK0H_bit.no7
#define STMK1 MK1L_bit.no0
#define ITMK11 MK1L_bit.no0
#define IICMK10 MK1L_bit.no0
#define CSIMK10 MK1L_bit.no0
#define ITMK61 MK1L_bit.no1
#define SRMK1 MK1L_bit.no1
#define CSIMK11 MK1L_bit.no1
#define IICMK11 MK1L_bit.no1
#define ITMK40 MK1L_bit.no2
#define TMMK03H MK1L_bit.no2
#define SREMK1 MK1L_bit.no2
#define IICAMK0 MK1L_bit.no3
#define ITMK51 MK1L_bit.no4
#define SRMK0 MK1L_bit.no4
#define CSIMK01 MK1L_bit.no4
#define IICMK01 MK1L_bit.no4
#define TMMK01 MK1L_bit.no5
#define TMMK02 MK1L_bit.no6
#define TMMK03 MK1L_bit.no7
#define ADMK MK1H_bit.no0
#define RTCMK MK1H_bit.no1
#define ITLMK MK1H_bit.no2
#define KRMK MK1H_bit.no3
#define ITMK31 MK1H_bit.no4
#define STMK3 MK1H_bit.no4
#define IICMK30 MK1H_bit.no4
#define CSIMK30 MK1H_bit.no4
#define SRMK3 MK1H_bit.no5
#define ITMK71 MK1H_bit.no5
#define IICMK31 MK1H_bit.no5
#define CSIMK31 MK1H_bit.no5
#define ITMK00 MK1H_bit.no6
#define TMMK04 MK1H_bit.no7
#define WDTIPR0 PR00L_bit.no0
#define LVIPR0 PR00L_bit.no1
#define PPR00 PR00L_bit.no2
#define PPR01 PR00L_bit.no3
#define PPR02 PR00L_bit.no4
#define PPR03 PR00L_bit.no5
#define PPR04 PR00L_bit.no6
#define PPR05 PR00L_bit.no7
#define ITPR001 PR00H_bit.no0
#define STPR02 PR00H_bit.no0
#define CSIPR020 PR00H_bit.no0
#define IICPR020 PR00H_bit.no0
#define ITPR041 PR00H_bit.no1
#define SRPR02 PR00H_bit.no1
#define IICPR021 PR00H_bit.no1
#define CSIPR021 PR00H_bit.no1
#define ITPR020 PR00H_bit.no2
#define SREPR02 PR00H_bit.no2
#define ELCLPR0 PR00H_bit.no3
#define SMSEPR0 PR00H_bit.no4
#define STPR00 PR00H_bit.no5
#define ITPR021 PR00H_bit.no5
#define CSIPR000 PR00H_bit.no5
#define IICPR000 PR00H_bit.no5
#define TMPR000 PR00H_bit.no6
#define TMPR001H PR00H_bit.no7
#define ITPR030 PR00H_bit.no7
#define SREPR00 PR00H_bit.no7
#define STPR01 PR01L_bit.no0
#define ITPR011 PR01L_bit.no0
#define IICPR010 PR01L_bit.no0
#define CSIPR010 PR01L_bit.no0
#define ITPR061 PR01L_bit.no1
#define SRPR01 PR01L_bit.no1
#define IICPR011 PR01L_bit.no1
#define CSIPR011 PR01L_bit.no1
#define TMPR003H PR01L_bit.no2
#define ITPR040 PR01L_bit.no2
#define SREPR01 PR01L_bit.no2
#define IICAPR00 PR01L_bit.no3
#define SRPR00 PR01L_bit.no4
#define ITPR051 PR01L_bit.no4
#define CSIPR001 PR01L_bit.no4
#define IICPR001 PR01L_bit.no4
#define TMPR001 PR01L_bit.no5
#define TMPR002 PR01L_bit.no6
#define TMPR003 PR01L_bit.no7
#define ADPR0 PR01H_bit.no0
#define RTCPR0 PR01H_bit.no1
#define ITLPR0 PR01H_bit.no2
#define KRPR0 PR01H_bit.no3
#define STPR03 PR01H_bit.no4
#define IICPR030 PR01H_bit.no4
#define CSIPR030 PR01H_bit.no4
#define ITPR031 PR01H_bit.no4
#define CSIPR031 PR01H_bit.no5
#define SRPR03 PR01H_bit.no5
#define ITPR071 PR01H_bit.no5
#define IICPR031 PR01H_bit.no5
#define ITPR000 PR01H_bit.no6
#define TMPR004 PR01H_bit.no7
#define WDTIPR1 PR10L_bit.no0
#define LVIPR1 PR10L_bit.no1
#define PPR10 PR10L_bit.no2
#define PPR11 PR10L_bit.no3
#define PPR12 PR10L_bit.no4
#define PPR13 PR10L_bit.no5
#define PPR14 PR10L_bit.no6
#define PPR15 PR10L_bit.no7
#define STPR12 PR10H_bit.no0
#define IICPR120 PR10H_bit.no0
#define CSIPR120 PR10H_bit.no0
#define ITPR101 PR10H_bit.no0
#define CSIPR121 PR10H_bit.no1
#define SRPR12 PR10H_bit.no1
#define IICPR121 PR10H_bit.no1
#define ITPR141 PR10H_bit.no1
#define SREPR12 PR10H_bit.no2
#define ITPR120 PR10H_bit.no2
#define ELCLPR1 PR10H_bit.no3
#define SMSEPR1 PR10H_bit.no4
#define IICPR100 PR10H_bit.no5
#define ITPR121 PR10H_bit.no5
#define STPR10 PR10H_bit.no5
#define CSIPR100 PR10H_bit.no5
#define TMPR100 PR10H_bit.no6
#define TMPR101H PR10H_bit.no7
#define SREPR10 PR10H_bit.no7
#define ITPR130 PR10H_bit.no7
#define CSIPR110 PR11L_bit.no0
#define IICPR110 PR11L_bit.no0
#define ITPR111 PR11L_bit.no0
#define STPR11 PR11L_bit.no0
#define CSIPR111 PR11L_bit.no1
#define IICPR111 PR11L_bit.no1
#define ITPR161 PR11L_bit.no1
#define SRPR11 PR11L_bit.no1
#define TMPR103H PR11L_bit.no2
#define SREPR11 PR11L_bit.no2
#define ITPR140 PR11L_bit.no2
#define IICAPR10 PR11L_bit.no3
#define CSIPR101 PR11L_bit.no4
#define ITPR151 PR11L_bit.no4
#define SRPR10 PR11L_bit.no4
#define IICPR101 PR11L_bit.no4
#define TMPR101 PR11L_bit.no5
#define TMPR102 PR11L_bit.no6
#define TMPR103 PR11L_bit.no7
#define ADPR1 PR11H_bit.no0
#define RTCPR1 PR11H_bit.no1
#define ITLPR1 PR11H_bit.no2
#define KRPR1 PR11H_bit.no3
#define IICPR130 PR11H_bit.no4
#define STPR13 PR11H_bit.no4
#define ITPR131 PR11H_bit.no4
#define CSIPR130 PR11H_bit.no4
#define SRPR13 PR11H_bit.no5
#define ITPR171 PR11H_bit.no5
#define IICPR131 PR11H_bit.no5
#define CSIPR131 PR11H_bit.no5
#define ITPR100 PR11H_bit.no6
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
#define INTIT01_vect 0x14
#define INTST2_vect 0x14
#define INTCSI21_vect 0x16
#define INTIIC21_vect 0x16
#define INTIT41_vect 0x16
#define INTSR2_vect 0x16
#define INTIT20_vect 0x18
#define INTSRE2_vect 0x18
#define INTELCL_vect 0x1A
#define INTSMSE_vect 0x1C
#define INTCSI00_vect 0x1E
#define INTIIC00_vect 0x1E
#define INTIT21_vect 0x1E
#define INTST0_vect 0x1E
#define INTTM00_vect 0x20
#define INTIT30_vect 0x22
#define INTSRE0_vect 0x22
#define INTTM01H_vect 0x22
#define INTCSI10_vect 0x24
#define INTIIC10_vect 0x24
#define INTIT11_vect 0x24
#define INTST1_vect 0x24
#define INTCSI11_vect 0x26
#define INTIIC11_vect 0x26
#define INTIT61_vect 0x26
#define INTSR1_vect 0x26
#define INTIT40_vect 0x28
#define INTSRE1_vect 0x28
#define INTTM03H_vect 0x28
#define INTIICA0_vect 0x2A
#define INTCSI01_vect 0x2C
#define INTIIC01_vect 0x2C
#define INTIT51_vect 0x2C
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
#define INTIT31_vect 0x3C
#define INTST3_vect 0x3C
#define INTCSI31_vect 0x3E
#define INTIIC31_vect 0x3E
#define INTIT71_vect 0x3E
#define INTSR3_vect 0x3E
#define INTIT00_vect 0x40
#define INTTM04_vect 0x42
#define INTTM05_vect 0x44
#define INTURE3_vect 0x44
#define INTIT50_vect 0x46
#define INTTM06_vect 0x46
#define INTIT60_vect 0x48
#define INTTM07_vect 0x48
#define INTP6_vect 0x4A
#define INTP7_vect 0x4C
#define INTIT10_vect 0x4E
#define INTOSDC_vect 0x50
#define INTFL_vect 0x52
#define INTCMP0_vect 0x54
#define INTCMP1_vect 0x56
#define INTIT70_vect 0x58
#define INTURE0_vect 0x58
#define INTTMKB1_vect 0x5A
#define INTURE1_vect 0x5A
#define INTTMKB2_vect 0x5C
#define INTURE2_vect 0x5C
#define INTSRE3_vect 0x5E
#define INTTRJ1_vect 0x5E
#define INTCTSUWR_vect 0x60
#define INTIICA1_vect 0x62
#define INTCTSURD_vect 0x64
#define INTCTSUFN_vect 0x66
#define INTTRJ0_vect 0x68
#define INTUT0_vect 0x6A
#define INTUR0_vect 0x6C
#define INTUT1_vect 0x6E
#define INTUR1_vect 0x70
#define INTUT2_vect 0x72
#define INTUR2_vect 0x74
#define INTUT3_vect 0x76
#define INTUR3_vect 0x78
#define INTTM3G_vect 0x7A
#define INTTMKB0_vect 0x7A
#define INTEXSD_vect 0x7C
#define INTTM5MG_vect 0x7C
#define BRK_I_vect 0x7E
#endif

/* ================= Renesas iodefine_ext.h =================== */
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
* Copyright (C) 2024 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : iodefine_ext.h
* Description  :
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 03.12.2024 1.90     First Release.
***********************************************************************************************************************/

#ifndef __INTRINSIC_FUNCTIONS
#define __INTRINSIC_FUNCTIONS

#define DI() __builtin_rl78_di()
#define EI() __builtin_rl78_ei()
#define HALT() __halt()
#define NOP() __nop()
#define STOP() __stop()

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
union un_pu2 {
	unsigned char pu2;
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
union un_pim2 {
	unsigned char pim2;
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
union un_pim6 {
	unsigned char pim6;
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
union un_pim9 {
	unsigned char pim9;
	__BITS8 BIT;
};
union un_pim12 {
	unsigned char pim12;
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
union un_pom2 {
	unsigned char pom2;
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
union un_pom6 {
	unsigned char pom6;
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
union un_pom13 {
	unsigned char pom13;
	__BITS8 BIT;
};
union un_pom14 {
	unsigned char pom14;
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
union un_pmca4 {
	unsigned char pmca4;
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
union un_isc {
	unsigned char isc;
	__BITS8 BIT;
};
union un_ulbs {
	unsigned char ulbs;
	__BITS8 BIT;
};
union un_tos {
	unsigned char tos;
	__BITS8 BIT;
};
union un_pms {
	unsigned char pms;
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
union un_per2 {
	unsigned char per2;
	__BITS8 BIT;
};
union un_prr2 {
	unsigned char prr2;
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
union un_trjioc0 {
	unsigned char trjioc0;
	__BITS8 BIT;
};
union un_trjmr0 {
	unsigned char trjmr0;
	__BITS8 BIT;
};
union un_trjisr0 {
	unsigned char trjisr0;
	__BITS8 BIT;
};
union un_trjioc1 {
	unsigned char trjioc1;
	__BITS8 BIT;
};
union un_trjmr1 {
	unsigned char trjmr1;
	__BITS8 BIT;
};
union un_trjisr1 {
	unsigned char trjisr1;
	__BITS8 BIT;
};
union un_exsdm1 {
	unsigned char exsdm1;
	__BITS8 BIT;
};
union un_exsdm0 {
	unsigned char exsdm0;
	__BITS8 BIT;
};
union un_pmct0 {
	unsigned char pmct0;
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
union un_pmct7 {
	unsigned char pmct7;
	__BITS8 BIT;
};
union un_pmct9 {
	unsigned char pmct9;
	__BITS8 BIT;
};
union un_pmct12 {
	unsigned char pmct12;
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
union un_pmce6 {
	unsigned char pmce6;
	__BITS8 BIT;
};
union un_pmce7 {
	unsigned char pmce7;
	__BITS8 BIT;
};
union un_pfseg0 {
	unsigned char pfseg0;
	__BITS8 BIT;
};
union un_pfseg1 {
	unsigned char pfseg1;
	__BITS8 BIT;
};
union un_pfseg2 {
	unsigned char pfseg2;
	__BITS8 BIT;
};
union un_pfseg3 {
	unsigned char pfseg3;
	__BITS8 BIT;
};
union un_pfseg4 {
	unsigned char pfseg4;
	__BITS8 BIT;
};
union un_pfseg5 {
	unsigned char pfseg5;
	__BITS8 BIT;
};
union un_pfseg6 {
	unsigned char pfseg6;
	__BITS8 BIT;
};
union un_pfseg7 {
	unsigned char pfseg7;
	__BITS8 BIT;
};
union un_isclcd {
	unsigned char isclcd;
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
union un_pdidis2 {
	unsigned char pdidis2;
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
union un_pdidis6 {
	unsigned char pdidis6;
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
union un_clkdctl {
	unsigned char clkdctl;
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
union un_dtcen5 {
	unsigned char dtcen5;
	__BITS8 BIT;
};
union un_dtcen6 {
	unsigned char dtcen6;
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
union un_uta0ck {
	unsigned char uta0ck;
	__BITS8 BIT;
};
union un_tmc5mg {
	unsigned char tmc5mg;
	__BITS8 BIT;
};
union un_tcl5mg {
	unsigned char tcl5mg;
	__BITS8 BIT;
};
union un_dam0 {
	unsigned char dam0;
	__BITS8 BIT;
};
union un_dam1 {
	unsigned char dam1;
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
union un_tmc3 {
	unsigned char tmc3;
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
union un_trtcr0 {
	unsigned char trtcr0;
	__BITS8 BIT;
};
union un_trtcr1 {
	unsigned char trtcr1;
	__BITS8 BIT;
};
union un_trtcr2 {
	unsigned char trtcr2;
	__BITS8 BIT;
};
union un_trtcr3 {
	unsigned char trtcr3;
	__BITS8 BIT;
};
union un_trtcr4 {
	unsigned char trtcr4;
	__BITS8 BIT;
};
union un_trtcr5 {
	unsigned char trtcr5;
	__BITS8 BIT;
};
union un_trtcr6 {
	unsigned char trtcr6;
	__BITS8 BIT;
};
union un_trtcr7 {
	unsigned char trtcr7;
	__BITS8 BIT;
};
union un_tkbtrg2 {
	unsigned char tkbtrg2;
	__BITS8 BIT;
};
union un_tkbflg2 {
	unsigned char tkbflg2;
	__BITS8 BIT;
};
union un_tkbioc20 {
	unsigned char tkbioc20;
	__BITS8 BIT;
};
union un_tkbclr2 {
	unsigned char tkbclr2;
	__BITS8 BIT;
};
union un_tkbioc21 {
	unsigned char tkbioc21;
	__BITS8 BIT;
};
union un_tkbctl21 {
	unsigned char tkbctl21;
	__BITS8 BIT;
};
union un_tkbpahfs2 {
	unsigned char tkbpahfs2;
	__BITS8 BIT;
};
union un_tkbpahft2 {
	unsigned char tkbpahft2;
	__BITS8 BIT;
};
union un_tkbpaflg2 {
	unsigned char tkbpaflg2;
	__BITS8 BIT;
};
union un_tkbpactl22 {
	unsigned char tkbpactl22;
	__BITS8 BIT;
};
union un_ctsucr0 {
	unsigned char ctsucr0;
	__BITS8 BIT;
};
union un_ctsucr1 {
	unsigned char ctsucr1;
	__BITS8 BIT;
};
union un_ctsucr2 {
	unsigned char ctsucr2;
	__BITS8 BIT;
};
union un_ctsucr3 {
	unsigned char ctsucr3;
	__BITS8 BIT;
};
union un_ctsusdprs {
	unsigned char ctsusdprs;
	__BITS8 BIT;
};
union un_ctsumfaf {
	unsigned char ctsumfaf;
	__BITS8 BIT;
};
union un_ctsuchac0 {
	unsigned char ctsuchac0;
	__BITS8 BIT;
};
union un_ctsuchac1 {
	unsigned char ctsuchac1;
	__BITS8 BIT;
};
union un_ctsuchac2 {
	unsigned char ctsuchac2;
	__BITS8 BIT;
};
union un_ctsuchac3 {
	unsigned char ctsuchac3;
	__BITS8 BIT;
};
union un_ctsuchac4 {
	unsigned char ctsuchac4;
	__BITS8 BIT;
};
union un_ctsuchac5 {
	unsigned char ctsuchac5;
	__BITS8 BIT;
};
union un_ctsuchtrc0 {
	unsigned char ctsuchtrc0;
	__BITS8 BIT;
};
union un_ctsuchtrc1 {
	unsigned char ctsuchtrc1;
	__BITS8 BIT;
};
union un_ctsuchtrc2 {
	unsigned char ctsuchtrc2;
	__BITS8 BIT;
};
union un_ctsuchtrc3 {
	unsigned char ctsuchtrc3;
	__BITS8 BIT;
};
union un_ctsuchtrc4 {
	unsigned char ctsuchtrc4;
	__BITS8 BIT;
};
union un_ctsuchtrc5 {
	unsigned char ctsuchtrc5;
	__BITS8 BIT;
};
union un_ctsust1 {
	unsigned char ctsust1;
	__BITS8 BIT;
};
union un_ctsust {
	unsigned char ctsust;
	__BITS8 BIT;
};
union un_trngscr0 {
	unsigned char trngscr0;
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
union un_uta1ck {
	unsigned char uta1ck;
	__BITS8 BIT;
};
union un_asima20 {
	unsigned char asima20;
	__BITS8 BIT;
};
union un_asima21 {
	unsigned char asima21;
	__BITS8 BIT;
};
union un_ascta2 {
	unsigned char ascta2;
	__BITS8 BIT;
};
union un_uta2ck {
	unsigned char uta2ck;
	__BITS8 BIT;
};
union un_asima30 {
	unsigned char asima30;
	__BITS8 BIT;
};
union un_asima31 {
	unsigned char asima31;
	__BITS8 BIT;
};
union un_ascta3 {
	unsigned char ascta3;
	__BITS8 BIT;
};
union un_uta3ck {
	unsigned char uta3ck;
	__BITS8 BIT;
};
union un_tkbtrg0 {
	unsigned char tkbtrg0;
	__BITS8 BIT;
};
union un_tkbflg0 {
	unsigned char tkbflg0;
	__BITS8 BIT;
};
union un_tkbioc00 {
	unsigned char tkbioc00;
	__BITS8 BIT;
};
union un_tkbclr0 {
	unsigned char tkbclr0;
	__BITS8 BIT;
};
union un_tkbioc01 {
	unsigned char tkbioc01;
	__BITS8 BIT;
};
union un_tkbctl01 {
	unsigned char tkbctl01;
	__BITS8 BIT;
};
union un_tkbpahfs0 {
	unsigned char tkbpahfs0;
	__BITS8 BIT;
};
union un_tkbpahft0 {
	unsigned char tkbpahft0;
	__BITS8 BIT;
};
union un_tkbpaflg0 {
	unsigned char tkbpaflg0;
	__BITS8 BIT;
};
union un_tkbpactl02 {
	unsigned char tkbpactl02;
	__BITS8 BIT;
};
union un_tkbtrg1 {
	unsigned char tkbtrg1;
	__BITS8 BIT;
};
union un_tkbflg1 {
	unsigned char tkbflg1;
	__BITS8 BIT;
};
union un_tkbioc10 {
	unsigned char tkbioc10;
	__BITS8 BIT;
};
union un_tkbclr1 {
	unsigned char tkbclr1;
	__BITS8 BIT;
};
union un_tkbioc11 {
	unsigned char tkbioc11;
	__BITS8 BIT;
};
union un_tkbctl11 {
	unsigned char tkbctl11;
	__BITS8 BIT;
};
union un_tkbpahfs1 {
	unsigned char tkbpahfs1;
	__BITS8 BIT;
};
union un_tkbpahft1 {
	unsigned char tkbpahft1;
	__BITS8 BIT;
};
union un_tkbpaflg1 {
	unsigned char tkbpaflg1;
	__BITS8 BIT;
};
union un_tkbpactl12 {
	unsigned char tkbpactl12;
	__BITS8 BIT;
};

#define ADM2 (*(volatile union un_adm2 *)0xF0010).adm2
#define ADM2_bit (*(volatile union un_adm2 *)0xF0010).BIT
#define ADUL (*(volatile unsigned char *)0xF0011)
#define ADLL (*(volatile unsigned char *)0xF0012)
#define ADTES (*(volatile unsigned char *)0xF0013)
#define ADCR0 (*(volatile unsigned short *)0xF0020)
#define ADCR0H (*(volatile unsigned char *)0xF0021)
#define PU0 (*(volatile union un_pu0 *)0xF0030).pu0
#define PU0_bit (*(volatile union un_pu0 *)0xF0030).BIT
#define PU1 (*(volatile union un_pu1 *)0xF0031).pu1
#define PU1_bit (*(volatile union un_pu1 *)0xF0031).BIT
#define PU2 (*(volatile union un_pu2 *)0xF0032).pu2
#define PU2_bit (*(volatile union un_pu2 *)0xF0032).BIT
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
#define PU12 (*(volatile union un_pu12 *)0xF003C).pu12
#define PU12_bit (*(volatile union un_pu12 *)0xF003C).BIT
#define PU14 (*(volatile union un_pu14 *)0xF003E).pu14
#define PU14_bit (*(volatile union un_pu14 *)0xF003E).BIT
#define PIM0 (*(volatile union un_pim0 *)0xF0040).pim0
#define PIM0_bit (*(volatile union un_pim0 *)0xF0040).BIT
#define PIM1 (*(volatile union un_pim1 *)0xF0041).pim1
#define PIM1_bit (*(volatile union un_pim1 *)0xF0041).BIT
#define PIM2 (*(volatile union un_pim2 *)0xF0042).pim2
#define PIM2_bit (*(volatile union un_pim2 *)0xF0042).BIT
#define PIM3 (*(volatile union un_pim3 *)0xF0043).pim3
#define PIM3_bit (*(volatile union un_pim3 *)0xF0043).BIT
#define PIM4 (*(volatile union un_pim4 *)0xF0044).pim4
#define PIM4_bit (*(volatile union un_pim4 *)0xF0044).BIT
#define PIM5 (*(volatile union un_pim5 *)0xF0045).pim5
#define PIM5_bit (*(volatile union un_pim5 *)0xF0045).BIT
#define PIM6 (*(volatile union un_pim6 *)0xF0046).pim6
#define PIM6_bit (*(volatile union un_pim6 *)0xF0046).BIT
#define PIM7 (*(volatile union un_pim7 *)0xF0047).pim7
#define PIM7_bit (*(volatile union un_pim7 *)0xF0047).BIT
#define PIM8 (*(volatile union un_pim8 *)0xF0048).pim8
#define PIM8_bit (*(volatile union un_pim8 *)0xF0048).BIT
#define PIM9 (*(volatile union un_pim9 *)0xF0049).pim9
#define PIM9_bit (*(volatile union un_pim9 *)0xF0049).BIT
#define PIM12 (*(volatile union un_pim12 *)0xF004C).pim12
#define PIM12_bit (*(volatile union un_pim12 *)0xF004C).BIT
#define PIM14 (*(volatile union un_pim14 *)0xF004E).pim14
#define PIM14_bit (*(volatile union un_pim14 *)0xF004E).BIT
#define POM0 (*(volatile union un_pom0 *)0xF0050).pom0
#define POM0_bit (*(volatile union un_pom0 *)0xF0050).BIT
#define POM1 (*(volatile union un_pom1 *)0xF0051).pom1
#define POM1_bit (*(volatile union un_pom1 *)0xF0051).BIT
#define POM2 (*(volatile union un_pom2 *)0xF0052).pom2
#define POM2_bit (*(volatile union un_pom2 *)0xF0052).BIT
#define POM3 (*(volatile union un_pom3 *)0xF0053).pom3
#define POM3_bit (*(volatile union un_pom3 *)0xF0053).BIT
#define POM4 (*(volatile union un_pom4 *)0xF0054).pom4
#define POM4_bit (*(volatile union un_pom4 *)0xF0054).BIT
#define POM5 (*(volatile union un_pom5 *)0xF0055).pom5
#define POM5_bit (*(volatile union un_pom5 *)0xF0055).BIT
#define POM6 (*(volatile union un_pom6 *)0xF0056).pom6
#define POM6_bit (*(volatile union un_pom6 *)0xF0056).BIT
#define POM7 (*(volatile union un_pom7 *)0xF0057).pom7
#define POM7_bit (*(volatile union un_pom7 *)0xF0057).BIT
#define POM8 (*(volatile union un_pom8 *)0xF0058).pom8
#define POM8_bit (*(volatile union un_pom8 *)0xF0058).BIT
#define POM9 (*(volatile union un_pom9 *)0xF0059).pom9
#define POM9_bit (*(volatile union un_pom9 *)0xF0059).BIT
#define POM12 (*(volatile union un_pom12 *)0xF005C).pom12
#define POM12_bit (*(volatile union un_pom12 *)0xF005C).BIT
#define POM13 (*(volatile union un_pom13 *)0xF005D).pom13
#define POM13_bit (*(volatile union un_pom13 *)0xF005D).BIT
#define POM14 (*(volatile union un_pom14 *)0xF005E).pom14
#define POM14_bit (*(volatile union un_pom14 *)0xF005E).BIT
#define PMCA1 (*(volatile union un_pmca1 *)0xF0061).pmca1
#define PMCA1_bit (*(volatile union un_pmca1 *)0xF0061).BIT
#define PMCA2 (*(volatile union un_pmca2 *)0xF0062).pmca2
#define PMCA2_bit (*(volatile union un_pmca2 *)0xF0062).BIT
#define PMCA4 (*(volatile union un_pmca4 *)0xF0064).pmca4
#define PMCA4_bit (*(volatile union un_pmca4 *)0xF0064).BIT
#define NFEN0 (*(volatile union un_nfen0 *)0xF0070).nfen0
#define NFEN0_bit (*(volatile union un_nfen0 *)0xF0070).BIT
#define NFEN1 (*(volatile union un_nfen1 *)0xF0071).nfen1
#define NFEN1_bit (*(volatile union un_nfen1 *)0xF0071).BIT
#define ISC (*(volatile union un_isc *)0xF0073).isc
#define ISC_bit (*(volatile union un_isc *)0xF0073).BIT
#define TIS0 (*(volatile unsigned char *)0xF0074)
#define TIS1 (*(volatile unsigned char *)0xF0075)
#define IAWCTL (*(volatile unsigned char *)0xF0078)
#define ULBS (*(volatile union un_ulbs *)0xF0079).ulbs
#define ULBS_bit (*(volatile union un_ulbs *)0xF0079).BIT
#define TOS (*(volatile union un_tos *)0xF007A).tos
#define TOS_bit (*(volatile union un_tos *)0xF007A).BIT
#define PMS (*(volatile union un_pms *)0xF007B).pms
#define PMS_bit (*(volatile union un_pms *)0xF007B).BIT
#define DFLCTL (*(volatile union un_dflctl *)0xF0090).dflctl
#define DFLCTL_bit (*(volatile union un_dflctl *)0xF0090).BIT
#define MODRV (*(volatile unsigned char *)0xF009E)
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
#define PFCMD (*(volatile unsigned char *)0xF00C0)
#define PFS (*(volatile union un_pfs *)0xF00C1).pfs
#define PFS_bit (*(volatile union un_pfs *)0xF00C1).BIT
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
#define PER2 (*(volatile union un_per2 *)0xF00FC).per2
#define PER2_bit (*(volatile union un_per2 *)0xF00FC).BIT
#define PRR2 (*(volatile union un_prr2 *)0xF00FD).prr2
#define PRR2_bit (*(volatile union un_prr2 *)0xF00FD).BIT
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
#define MIOTRM (*(volatile unsigned char *)0xF0212)
#define LIOTRM (*(volatile unsigned char *)0xF0213)
#define MOSCDIV (*(volatile unsigned char *)0xF0214)
#define WKUPMD (*(volatile union un_wkupmd *)0xF0215).wkupmd
#define WKUPMD_bit (*(volatile union un_wkupmd *)0xF0215).BIT
#define PSMCR (*(volatile union un_psmcr *)0xF0216).psmcr
#define PSMCR_bit (*(volatile union un_psmcr *)0xF0216).BIT
#define SOMRG (*(volatile unsigned char *)0xF0217)
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
#define TRJCR0 (*(volatile unsigned char *)0xF0240)
#define TRJIOC0 (*(volatile union un_trjioc0 *)0xF0241).trjioc0
#define TRJIOC0_bit (*(volatile union un_trjioc0 *)0xF0241).BIT
#define TRJMR0 (*(volatile union un_trjmr0 *)0xF0242).trjmr0
#define TRJMR0_bit (*(volatile union un_trjmr0 *)0xF0242).BIT
#define TRJISR0 (*(volatile union un_trjisr0 *)0xF0243).trjisr0
#define TRJISR0_bit (*(volatile union un_trjisr0 *)0xF0243).BIT
#define TRJCR1 (*(volatile unsigned char *)0xF0244)
#define TRJIOC1 (*(volatile union un_trjioc1 *)0xF0245).trjioc1
#define TRJIOC1_bit (*(volatile union un_trjioc1 *)0xF0245).BIT
#define TRJMR1 (*(volatile union un_trjmr1 *)0xF0246).trjmr1
#define TRJMR1_bit (*(volatile union un_trjmr1 *)0xF0246).BIT
#define TRJISR1 (*(volatile union un_trjisr1 *)0xF0247).trjisr1
#define TRJISR1_bit (*(volatile union un_trjisr1 *)0xF0247).BIT
#define EXSDM1 (*(volatile union un_exsdm1 *)0xF025A).exsdm1
#define EXSDM1_bit (*(volatile union un_exsdm1 *)0xF025A).BIT
#define EXSDM0 (*(volatile union un_exsdm0 *)0xF025B).exsdm0
#define EXSDM0_bit (*(volatile union un_exsdm0 *)0xF025B).BIT
#define PMCT0 (*(volatile union un_pmct0 *)0xF0260).pmct0
#define PMCT0_bit (*(volatile union un_pmct0 *)0xF0260).BIT
#define PMCT3 (*(volatile union un_pmct3 *)0xF0263).pmct3
#define PMCT3_bit (*(volatile union un_pmct3 *)0xF0263).BIT
#define PMCT5 (*(volatile union un_pmct5 *)0xF0265).pmct5
#define PMCT5_bit (*(volatile union un_pmct5 *)0xF0265).BIT
#define PMCT7 (*(volatile union un_pmct7 *)0xF0267).pmct7
#define PMCT7_bit (*(volatile union un_pmct7 *)0xF0267).BIT
#define PMCT9 (*(volatile union un_pmct9 *)0xF0269).pmct9
#define PMCT9_bit (*(volatile union un_pmct9 *)0xF0269).BIT
#define PMCT12 (*(volatile union un_pmct12 *)0xF026C).pmct12
#define PMCT12_bit (*(volatile union un_pmct12 *)0xF026C).BIT
#define PMCE0 (*(volatile union un_pmce0 *)0xF0280).pmce0
#define PMCE0_bit (*(volatile union un_pmce0 *)0xF0280).BIT
#define PMCE1 (*(volatile union un_pmce1 *)0xF0281).pmce1
#define PMCE1_bit (*(volatile union un_pmce1 *)0xF0281).BIT
#define PMCE6 (*(volatile union un_pmce6 *)0xF0286).pmce6
#define PMCE6_bit (*(volatile union un_pmce6 *)0xF0286).BIT
#define PMCE7 (*(volatile union un_pmce7 *)0xF0287).pmce7
#define PMCE7_bit (*(volatile union un_pmce7 *)0xF0287).BIT
#define PFSEG0 (*(volatile union un_pfseg0 *)0xF0290).pfseg0
#define PFSEG0_bit (*(volatile union un_pfseg0 *)0xF0290).BIT
#define PFSEG1 (*(volatile union un_pfseg1 *)0xF0291).pfseg1
#define PFSEG1_bit (*(volatile union un_pfseg1 *)0xF0291).BIT
#define PFSEG2 (*(volatile union un_pfseg2 *)0xF0292).pfseg2
#define PFSEG2_bit (*(volatile union un_pfseg2 *)0xF0292).BIT
#define PFSEG3 (*(volatile union un_pfseg3 *)0xF0293).pfseg3
#define PFSEG3_bit (*(volatile union un_pfseg3 *)0xF0293).BIT
#define PFSEG4 (*(volatile union un_pfseg4 *)0xF0294).pfseg4
#define PFSEG4_bit (*(volatile union un_pfseg4 *)0xF0294).BIT
#define PFSEG5 (*(volatile union un_pfseg5 *)0xF0295).pfseg5
#define PFSEG5_bit (*(volatile union un_pfseg5 *)0xF0295).BIT
#define PFSEG6 (*(volatile union un_pfseg6 *)0xF0296).pfseg6
#define PFSEG6_bit (*(volatile union un_pfseg6 *)0xF0296).BIT
#define PFSEG7 (*(volatile union un_pfseg7 *)0xF0297).pfseg7
#define PFSEG7_bit (*(volatile union un_pfseg7 *)0xF0297).BIT
#define ISCLCD (*(volatile union un_isclcd *)0xF0298).isclcd
#define ISCLCD_bit (*(volatile union un_isclcd *)0xF0298).BIT
#define LCDM2 (*(volatile unsigned char *)0xF0299)
#define ADM1EX (*(volatile unsigned char *)0xF029E)
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
#define PDIDIS2 (*(volatile union un_pdidis2 *)0xF02B2).pdidis2
#define PDIDIS2_bit (*(volatile union un_pdidis2 *)0xF02B2).BIT
#define PDIDIS3 (*(volatile union un_pdidis3 *)0xF02B3).pdidis3
#define PDIDIS3_bit (*(volatile union un_pdidis3 *)0xF02B3).BIT
#define PDIDIS4 (*(volatile union un_pdidis4 *)0xF02B4).pdidis4
#define PDIDIS4_bit (*(volatile union un_pdidis4 *)0xF02B4).BIT
#define PDIDIS5 (*(volatile union un_pdidis5 *)0xF02B5).pdidis5
#define PDIDIS5_bit (*(volatile union un_pdidis5 *)0xF02B5).BIT
#define PDIDIS6 (*(volatile union un_pdidis6 *)0xF02B6).pdidis6
#define PDIDIS6_bit (*(volatile union un_pdidis6 *)0xF02B6).BIT
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
#define OSDC (*(volatile unsigned short *)0xF02D0)
#define CLKDCTL (*(volatile union un_clkdctl *)0xF02D4).clkdctl
#define CLKDCTL_bit (*(volatile union un_clkdctl *)0xF02D4).BIT
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
#define DTCEN5 (*(volatile union un_dtcen5 *)0xF02ED).dtcen5
#define DTCEN5_bit (*(volatile union un_dtcen5 *)0xF02ED).BIT
#define DTCEN6 (*(volatile union un_dtcen6 *)0xF02EE).dtcen6
#define DTCEN6_bit (*(volatile union un_dtcen6 *)0xF02EE).BIT
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
#define UTA0CK (*(volatile union un_uta0ck *)0xF0310).uta0ck
#define UTA0CK_bit (*(volatile union un_uta0ck *)0xF0310).BIT
#define TMC5MG (*(volatile union un_tmc5mg *)0xF0320).tmc5mg
#define TMC5MG_bit (*(volatile union un_tmc5mg *)0xF0320).BIT
#define TCL5MG (*(volatile union un_tcl5mg *)0xF0321).tcl5mg
#define TCL5MG_bit (*(volatile union un_tcl5mg *)0xF0321).BIT
#define CR5MGL (*(volatile unsigned char *)0xF0322)
#define CR5MGH (*(volatile unsigned char *)0xF0323)
#define DACS0 (*(volatile unsigned char *)0xF0330)
#define DACS1 (*(volatile unsigned char *)0xF0331)
#define DAM0 (*(volatile union un_dam0 *)0xF0332).dam0
#define DAM0_bit (*(volatile union un_dam0 *)0xF0332).BIT
#define DACS2 (*(volatile unsigned char *)0xF0338)
#define DAM1 (*(volatile union un_dam1 *)0xF033A).dam1
#define DAM1_bit (*(volatile union un_dam1 *)0xF033A).BIT
#define COMPMDR (*(volatile union un_compmdr *)0xF0340).compmdr
#define COMPMDR_bit (*(volatile union un_compmdr *)0xF0340).BIT
#define COMPFIR (*(volatile union un_compfir *)0xF0341).compfir
#define COMPFIR_bit (*(volatile union un_compfir *)0xF0341).BIT
#define COMPOCR (*(volatile union un_compocr *)0xF0342).compocr
#define COMPOCR_bit (*(volatile union un_compocr *)0xF0342).BIT
#define TM3L (*(volatile unsigned char *)0xF0350)
#define TM3H (*(volatile unsigned char *)0xF0351)
#define TMC3 (*(volatile union un_tmc3 *)0xF0352).tmc3
#define TMC3_bit (*(volatile union un_tmc3 *)0xF0352).BIT
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
#define INTPCTL0 (*(volatile unsigned char *)0xF0370)
#define INTPCTL1 (*(volatile unsigned char *)0xF0371)
#define INTPCTL2 (*(volatile unsigned char *)0xF0372)
#define INTPCTL3 (*(volatile unsigned char *)0xF0373)
#define INTPCTL4 (*(volatile unsigned char *)0xF0374)
#define INTPCTL5 (*(volatile unsigned char *)0xF0375)
#define INTPCTL6 (*(volatile unsigned char *)0xF0376)
#define INTPCTL7 (*(volatile unsigned char *)0xF0377)
#define TPS2 (*(volatile unsigned char *)0xF037F)
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
#define SEG0 (*(volatile unsigned char *)0xF0400)
#define SEG1 (*(volatile unsigned char *)0xF0401)
#define SEG2 (*(volatile unsigned char *)0xF0402)
#define SEG3 (*(volatile unsigned char *)0xF0403)
#define SEG4 (*(volatile unsigned char *)0xF0404)
#define SEG5 (*(volatile unsigned char *)0xF0405)
#define SEG6 (*(volatile unsigned char *)0xF0406)
#define SEG7 (*(volatile unsigned char *)0xF0407)
#define SEG8 (*(volatile unsigned char *)0xF0408)
#define SEG9 (*(volatile unsigned char *)0xF0409)
#define SEG10 (*(volatile unsigned char *)0xF040A)
#define SEG11 (*(volatile unsigned char *)0xF040B)
#define SEG12 (*(volatile unsigned char *)0xF040C)
#define SEG13 (*(volatile unsigned char *)0xF040D)
#define SEG14 (*(volatile unsigned char *)0xF040E)
#define SEG15 (*(volatile unsigned char *)0xF040F)
#define SEG16 (*(volatile unsigned char *)0xF0410)
#define SEG17 (*(volatile unsigned char *)0xF0411)
#define SEG18 (*(volatile unsigned char *)0xF0412)
#define SEG19 (*(volatile unsigned char *)0xF0413)
#define SEG20 (*(volatile unsigned char *)0xF0414)
#define SEG21 (*(volatile unsigned char *)0xF0415)
#define SEG22 (*(volatile unsigned char *)0xF0416)
#define SEG23 (*(volatile unsigned char *)0xF0417)
#define SEG24 (*(volatile unsigned char *)0xF0418)
#define SEG25 (*(volatile unsigned char *)0xF0419)
#define SEG26 (*(volatile unsigned char *)0xF041A)
#define SEG27 (*(volatile unsigned char *)0xF041B)
#define SEG28 (*(volatile unsigned char *)0xF041C)
#define SEG29 (*(volatile unsigned char *)0xF041D)
#define SEG30 (*(volatile unsigned char *)0xF041E)
#define SEG31 (*(volatile unsigned char *)0xF041F)
#define SEG32 (*(volatile unsigned char *)0xF0420)
#define SEG33 (*(volatile unsigned char *)0xF0421)
#define SEG34 (*(volatile unsigned char *)0xF0422)
#define SEG35 (*(volatile unsigned char *)0xF0423)
#define SEG36 (*(volatile unsigned char *)0xF0424)
#define SEG37 (*(volatile unsigned char *)0xF0425)
#define SEG38 (*(volatile unsigned char *)0xF0426)
#define SEG39 (*(volatile unsigned char *)0xF0427)
#define SEG40 (*(volatile unsigned char *)0xF0428)
#define SEG41 (*(volatile unsigned char *)0xF0429)
#define SEG42 (*(volatile unsigned char *)0xF042A)
#define SEG43 (*(volatile unsigned char *)0xF042B)
#define SEG44 (*(volatile unsigned char *)0xF042C)
#define SEG45 (*(volatile unsigned char *)0xF042D)
#define SEG46 (*(volatile unsigned char *)0xF042E)
#define SEG47 (*(volatile unsigned char *)0xF042F)
#define SEG48 (*(volatile unsigned char *)0xF0430)
#define SEG49 (*(volatile unsigned char *)0xF0431)
#define SEG50 (*(volatile unsigned char *)0xF0432)
#define SEG51 (*(volatile unsigned char *)0xF0433)
#define SEG52 (*(volatile unsigned char *)0xF0434)
#define SEG53 (*(volatile unsigned char *)0xF0435)
#define SEG54 (*(volatile unsigned char *)0xF0436)
#define SEG55 (*(volatile unsigned char *)0xF0437)
#define TRTCMP0 (*(volatile unsigned short *)0xF0440)
#define TRTCMP00 (*(volatile unsigned char *)0xF0440)
#define TRTCMP01 (*(volatile unsigned char *)0xF0441)
#define TRTCR0 (*(volatile union un_trtcr0 *)0xF0442).trtcr0
#define TRTCR0_bit (*(volatile union un_trtcr0 *)0xF0442).BIT
#define TRTMD0 (*(volatile unsigned char *)0xF0443)
#define TRTCMP1 (*(volatile unsigned short *)0xF0448)
#define TRTCMP10 (*(volatile unsigned char *)0xF0448)
#define TRTCMP11 (*(volatile unsigned char *)0xF0449)
#define TRTCR1 (*(volatile union un_trtcr1 *)0xF044A).trtcr1
#define TRTCR1_bit (*(volatile union un_trtcr1 *)0xF044A).BIT
#define TRTMD1 (*(volatile unsigned char *)0xF044B)
#define TRTCMP2 (*(volatile unsigned short *)0xF0450)
#define TRTCMP20 (*(volatile unsigned char *)0xF0450)
#define TRTCMP21 (*(volatile unsigned char *)0xF0451)
#define TRTCR2 (*(volatile union un_trtcr2 *)0xF0452).trtcr2
#define TRTCR2_bit (*(volatile union un_trtcr2 *)0xF0452).BIT
#define TRTMD2 (*(volatile unsigned char *)0xF0453)
#define TRTCMP3 (*(volatile unsigned short *)0xF0458)
#define TRTCMP30 (*(volatile unsigned char *)0xF0458)
#define TRTCMP31 (*(volatile unsigned char *)0xF0459)
#define TRTCR3 (*(volatile union un_trtcr3 *)0xF045A).trtcr3
#define TRTCR3_bit (*(volatile union un_trtcr3 *)0xF045A).BIT
#define TRTMD3 (*(volatile unsigned char *)0xF045B)
#define TRTCMP4 (*(volatile unsigned short *)0xF0460)
#define TRTCMP40 (*(volatile unsigned char *)0xF0460)
#define TRTCMP41 (*(volatile unsigned char *)0xF0461)
#define TRTCR4 (*(volatile union un_trtcr4 *)0xF0462).trtcr4
#define TRTCR4_bit (*(volatile union un_trtcr4 *)0xF0462).BIT
#define TRTMD4 (*(volatile unsigned char *)0xF0463)
#define TRTCMP5 (*(volatile unsigned short *)0xF0468)
#define TRTCMP50 (*(volatile unsigned char *)0xF0468)
#define TRTCMP51 (*(volatile unsigned char *)0xF0469)
#define TRTCR5 (*(volatile union un_trtcr5 *)0xF046A).trtcr5
#define TRTCR5_bit (*(volatile union un_trtcr5 *)0xF046A).BIT
#define TRTMD5 (*(volatile unsigned char *)0xF046B)
#define TRTCMP6 (*(volatile unsigned short *)0xF0470)
#define TRTCMP60 (*(volatile unsigned char *)0xF0470)
#define TRTCMP61 (*(volatile unsigned char *)0xF0471)
#define TRTCR6 (*(volatile union un_trtcr6 *)0xF0472).trtcr6
#define TRTCR6_bit (*(volatile union un_trtcr6 *)0xF0472).BIT
#define TRTMD6 (*(volatile unsigned char *)0xF0473)
#define TRTCMP7 (*(volatile unsigned short *)0xF0478)
#define TRTCMP70 (*(volatile unsigned char *)0xF0478)
#define TRTCMP71 (*(volatile unsigned char *)0xF0479)
#define TRTCR7 (*(volatile union un_trtcr7 *)0xF047A).trtcr7
#define TRTCR7_bit (*(volatile union un_trtcr7 *)0xF047A).BIT
#define TRTMD7 (*(volatile unsigned char *)0xF047B)
#define FLSIVC0 (*(volatile unsigned short *)0xF0480)
#define FLSIVC1 (*(volatile unsigned short *)0xF0482)
#define GFLASH0 (*(volatile unsigned short *)0xF0488)
#define GFLASH1 (*(volatile unsigned short *)0xF048A)
#define GFLASH2 (*(volatile unsigned short *)0xF048C)
#define GIAWCTL (*(volatile unsigned short *)0xF048E)
#define TKBTCTL0 (*(volatile unsigned char *)0xF0490)
#define TKBTCMP0 (*(volatile unsigned char *)0xF0491)
#define TKBTCTL1 (*(volatile unsigned char *)0xF0492)
#define TKBTCMP1 (*(volatile unsigned char *)0xF0493)
#define TKBTCTL2 (*(volatile unsigned char *)0xF0494)
#define TKBTCMP2 (*(volatile unsigned char *)0xF0495)
#define TKBCR20 (*(volatile unsigned short *)0xF04A0)
#define TKBCR21 (*(volatile unsigned short *)0xF04A2)
#define TKBCR22 (*(volatile unsigned short *)0xF04A4)
#define TKBCR23 (*(volatile unsigned short *)0xF04A6)
#define TKBTGCR2 (*(volatile unsigned short *)0xF04A8)
#define TKBSIR20 (*(volatile unsigned short *)0xF04AA)
#define TKBSIR21 (*(volatile unsigned short *)0xF04AC)
#define TKBDNR20 (*(volatile unsigned char *)0xF04AE)
#define TKBSSR20 (*(volatile unsigned char *)0xF04AF)
#define TKBDNR21 (*(volatile unsigned char *)0xF04B0)
#define TKBSSR21 (*(volatile unsigned char *)0xF04B1)
#define TKBTRG2 (*(volatile union un_tkbtrg2 *)0xF04B2).tkbtrg2
#define TKBTRG2_bit (*(volatile union un_tkbtrg2 *)0xF04B2).BIT
#define TKBFLG2 (*(volatile union un_tkbflg2 *)0xF04B3).tkbflg2
#define TKBFLG2_bit (*(volatile union un_tkbflg2 *)0xF04B3).BIT
#define TKBCRLD20 (*(volatile unsigned short *)0xF04B4)
#define TKBCRLD21 (*(volatile unsigned short *)0xF04B6)
#define TKBCNT2 (*(volatile unsigned short *)0xF04C0)
#define TKBCTL20 (*(volatile unsigned short *)0xF04C2)
#define TKBMFR2 (*(volatile unsigned short *)0xF04C4)
#define TKBIOC20 (*(volatile union un_tkbioc20 *)0xF04C6).tkbioc20
#define TKBIOC20_bit (*(volatile union un_tkbioc20 *)0xF04C6).BIT
#define TKBCLR2 (*(volatile union un_tkbclr2 *)0xF04C7).tkbclr2
#define TKBCLR2_bit (*(volatile union un_tkbclr2 *)0xF04C7).BIT
#define TKBIOC21 (*(volatile union un_tkbioc21 *)0xF04C8).tkbioc21
#define TKBIOC21_bit (*(volatile union un_tkbioc21 *)0xF04C8).BIT
#define TKBCTL21 (*(volatile union un_tkbctl21 *)0xF04C9).tkbctl21
#define TKBCTL21_bit (*(volatile union un_tkbctl21 *)0xF04C9).BIT
#define TKBCTL22 (*(volatile unsigned short *)0xF04CA)
#define TKBPACTL20 (*(volatile unsigned short *)0xF04D0)
#define TKBPACTL21 (*(volatile unsigned short *)0xF04D2)
#define TKBPAHFS2 (*(volatile union un_tkbpahfs2 *)0xF04D4).tkbpahfs2
#define TKBPAHFS2_bit (*(volatile union un_tkbpahfs2 *)0xF04D4).BIT
#define TKBPAHFT2 (*(volatile union un_tkbpahft2 *)0xF04D5).tkbpahft2
#define TKBPAHFT2_bit (*(volatile union un_tkbpahft2 *)0xF04D5).BIT
#define TKBPAFLG2 (*(volatile union un_tkbpaflg2 *)0xF04D6).tkbpaflg2
#define TKBPAFLG2_bit (*(volatile union un_tkbpaflg2 *)0xF04D6).BIT
#define TKBPACTL22 (*(volatile union un_tkbpactl22 *)0xF04D7).tkbpactl22
#define TKBPACTL22_bit (*(volatile union un_tkbpactl22 *)0xF04D7).BIT
#define TKBPAHZS20 (*(volatile unsigned short *)0xF04D8)
#define TKBPAHZS21 (*(volatile unsigned short *)0xF04DA)
#define TKBPAFXS20 (*(volatile unsigned short *)0xF04DC)
#define TKBPAFXS21 (*(volatile unsigned short *)0xF04DE)
#define PIOR0 (*(volatile unsigned char *)0xF04E0)
#define PIOR1 (*(volatile unsigned char *)0xF04E1)
#define PIOR2 (*(volatile unsigned char *)0xF04E2)
#define PIOR3 (*(volatile unsigned char *)0xF04E3)
#define PIOR4 (*(volatile unsigned char *)0xF04E4)
#define PIOR5 (*(volatile unsigned char *)0xF04E5)
#define PIOR6 (*(volatile unsigned char *)0xF04E6)
#define PIOR7 (*(volatile unsigned char *)0xF04E7)
#define PIOR8 (*(volatile unsigned char *)0xF04E8)
#define PIOR9 (*(volatile unsigned char *)0xF04E9)
#define PIOR10 (*(volatile unsigned char *)0xF04EA)
#define PIOR11 (*(volatile unsigned char *)0xF04EB)
#define PIOR12 (*(volatile unsigned char *)0xF04EC)
#define PIOR13 (*(volatile unsigned char *)0xF04ED)
#define CTSUCRAL (*(volatile unsigned short *)0xF0500)
#define CTSUCR0 (*(volatile union un_ctsucr0 *)0xF0500).ctsucr0
#define CTSUCR0_bit (*(volatile union un_ctsucr0 *)0xF0500).BIT
#define CTSUCR1 (*(volatile union un_ctsucr1 *)0xF0501).ctsucr1
#define CTSUCR1_bit (*(volatile union un_ctsucr1 *)0xF0501).BIT
#define CTSUCRAH (*(volatile unsigned short *)0xF0502)
#define CTSUCR2 (*(volatile union un_ctsucr2 *)0xF0502).ctsucr2
#define CTSUCR2_bit (*(volatile union un_ctsucr2 *)0xF0502).BIT
#define CTSUCR3 (*(volatile union un_ctsucr3 *)0xF0503).ctsucr3
#define CTSUCR3_bit (*(volatile union un_ctsucr3 *)0xF0503).BIT
#define CTSUCRBL (*(volatile unsigned short *)0xF0504)
#define CTSUSDPRS (*(volatile union un_ctsusdprs *)0xF0504).ctsusdprs
#define CTSUSDPRS_bit (*(volatile union un_ctsusdprs *)0xF0504).BIT
#define CTSUSST (*(volatile unsigned char *)0xF0505)
#define CTSUCRBH (*(volatile unsigned short *)0xF0506)
#define CTSUDCLKC (*(volatile unsigned char *)0xF0507)
#define CTSUMCHL (*(volatile unsigned short *)0xF0508)
#define CTSUMCH0 (*(volatile unsigned char *)0xF0508)
#define CTSUMCH1 (*(volatile unsigned char *)0xF0509)
#define CTSUMCHH (*(volatile unsigned short *)0xF050A)
#define CTSUMFAF (*(volatile union un_ctsumfaf *)0xF050A).ctsumfaf
#define CTSUMFAF_bit (*(volatile union un_ctsumfaf *)0xF050A).BIT
#define CTSUCHACAL (*(volatile unsigned short *)0xF050C)
#define CTSUCHAC0 (*(volatile union un_ctsuchac0 *)0xF050C).ctsuchac0
#define CTSUCHAC0_bit (*(volatile union un_ctsuchac0 *)0xF050C).BIT
#define CTSUCHAC1 (*(volatile union un_ctsuchac1 *)0xF050D).ctsuchac1
#define CTSUCHAC1_bit (*(volatile union un_ctsuchac1 *)0xF050D).BIT
#define CTSUCHACAH (*(volatile unsigned short *)0xF050E)
#define CTSUCHAC2 (*(volatile union un_ctsuchac2 *)0xF050E).ctsuchac2
#define CTSUCHAC2_bit (*(volatile union un_ctsuchac2 *)0xF050E).BIT
#define CTSUCHAC3 (*(volatile union un_ctsuchac3 *)0xF050F).ctsuchac3
#define CTSUCHAC3_bit (*(volatile union un_ctsuchac3 *)0xF050F).BIT
#define CTSUCHACBL (*(volatile unsigned short *)0xF0510)
#define CTSUCHAC4 (*(volatile union un_ctsuchac4 *)0xF0510).ctsuchac4
#define CTSUCHAC4_bit (*(volatile union un_ctsuchac4 *)0xF0510).BIT
#define CTSUCHAC5 (*(volatile union un_ctsuchac5 *)0xF0511).ctsuchac5
#define CTSUCHAC5_bit (*(volatile union un_ctsuchac5 *)0xF0511).BIT
#define CTSUCHTRCAL (*(volatile unsigned short *)0xF0514)
#define CTSUCHTRC0 (*(volatile union un_ctsuchtrc0 *)0xF0514).ctsuchtrc0
#define CTSUCHTRC0_bit (*(volatile union un_ctsuchtrc0 *)0xF0514).BIT
#define CTSUCHTRC1 (*(volatile union un_ctsuchtrc1 *)0xF0515).ctsuchtrc1
#define CTSUCHTRC1_bit (*(volatile union un_ctsuchtrc1 *)0xF0515).BIT
#define CTSUCHTRCAH (*(volatile unsigned short *)0xF0516)
#define CTSUCHTRC2 (*(volatile union un_ctsuchtrc2 *)0xF0516).ctsuchtrc2
#define CTSUCHTRC2_bit (*(volatile union un_ctsuchtrc2 *)0xF0516).BIT
#define CTSUCHTRC3 (*(volatile union un_ctsuchtrc3 *)0xF0517).ctsuchtrc3
#define CTSUCHTRC3_bit (*(volatile union un_ctsuchtrc3 *)0xF0517).BIT
#define CTSUCHTRCBL (*(volatile unsigned short *)0xF0518)
#define CTSUCHTRC4 (*(volatile union un_ctsuchtrc4 *)0xF0518).ctsuchtrc4
#define CTSUCHTRC4_bit (*(volatile union un_ctsuchtrc4 *)0xF0518).BIT
#define CTSUCHTRC5 (*(volatile union un_ctsuchtrc5 *)0xF0519).ctsuchtrc5
#define CTSUCHTRC5_bit (*(volatile union un_ctsuchtrc5 *)0xF0519).BIT
#define CTSUSRL (*(volatile unsigned short *)0xF051C)
#define CTSUST1 (*(volatile union un_ctsust1 *)0xF051C).ctsust1
#define CTSUST1_bit (*(volatile union un_ctsust1 *)0xF051C).BIT
#define CTSUST (*(volatile union un_ctsust *)0xF051D).ctsust
#define CTSUST_bit (*(volatile union un_ctsust *)0xF051D).BIT
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
#define TRNGSCR0 (*(volatile union un_trngscr0 *)0xF0542).trngscr0
#define TRNGSCR0_bit (*(volatile union un_trngscr0 *)0xF0542).BIT
#define TRT0 (*(volatile unsigned short *)0xF0550)
#define TRT00 (*(volatile unsigned char *)0xF0550)
#define TRT01 (*(volatile unsigned char *)0xF0551)
#define TRT1 (*(volatile unsigned short *)0xF0558)
#define TRT10 (*(volatile unsigned char *)0xF0558)
#define TRT11 (*(volatile unsigned char *)0xF0559)
#define TRT2 (*(volatile unsigned short *)0xF0560)
#define TRT20 (*(volatile unsigned char *)0xF0560)
#define TRT21 (*(volatile unsigned char *)0xF0561)
#define TRT3 (*(volatile unsigned short *)0xF0568)
#define TRT30 (*(volatile unsigned char *)0xF0568)
#define TRT31 (*(volatile unsigned char *)0xF0569)
#define TRT4 (*(volatile unsigned short *)0xF0570)
#define TRT40 (*(volatile unsigned char *)0xF0570)
#define TRT41 (*(volatile unsigned char *)0xF0571)
#define TRT5 (*(volatile unsigned short *)0xF0578)
#define TRT50 (*(volatile unsigned char *)0xF0578)
#define TRT51 (*(volatile unsigned char *)0xF0579)
#define TRT6 (*(volatile unsigned short *)0xF0580)
#define TRT60 (*(volatile unsigned char *)0xF0580)
#define TRT61 (*(volatile unsigned char *)0xF0581)
#define TRT7 (*(volatile unsigned short *)0xF0588)
#define TRT70 (*(volatile unsigned char *)0xF0588)
#define TRT71 (*(volatile unsigned char *)0xF0589)
#define TRJ0 (*(volatile unsigned short *)0xF0598)
#define TRJ1 (*(volatile unsigned short *)0xF059A)
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
#define TXBA1 (*(volatile unsigned char *)0xF0610)
#define RXBA1 (*(volatile unsigned char *)0xF0611)
#define ASIMA10 (*(volatile union un_asima10 *)0xF0612).asima10
#define ASIMA10_bit (*(volatile union un_asima10 *)0xF0612).BIT
#define ASIMA11 (*(volatile union un_asima11 *)0xF0613).asima11
#define ASIMA11_bit (*(volatile union un_asima11 *)0xF0613).BIT
#define BRGCA1 (*(volatile unsigned char *)0xF0614)
#define ASISA1 (*(volatile unsigned char *)0xF0615)
#define ASCTA1 (*(volatile union un_ascta1 *)0xF0616).ascta1
#define ASCTA1_bit (*(volatile union un_ascta1 *)0xF0616).BIT
#define UTA1CK (*(volatile union un_uta1ck *)0xF0620).uta1ck
#define UTA1CK_bit (*(volatile union un_uta1ck *)0xF0620).BIT
#define TXBA2 (*(volatile unsigned char *)0xF0630)
#define RXBA2 (*(volatile unsigned char *)0xF0631)
#define ASIMA20 (*(volatile union un_asima20 *)0xF0632).asima20
#define ASIMA20_bit (*(volatile union un_asima20 *)0xF0632).BIT
#define ASIMA21 (*(volatile union un_asima21 *)0xF0633).asima21
#define ASIMA21_bit (*(volatile union un_asima21 *)0xF0633).BIT
#define BRGCA2 (*(volatile unsigned char *)0xF0634)
#define ASISA2 (*(volatile unsigned char *)0xF0635)
#define ASCTA2 (*(volatile union un_ascta2 *)0xF0636).ascta2
#define ASCTA2_bit (*(volatile union un_ascta2 *)0xF0636).BIT
#define UTA2CK (*(volatile union un_uta2ck *)0xF0640).uta2ck
#define UTA2CK_bit (*(volatile union un_uta2ck *)0xF0640).BIT
#define TXBA3 (*(volatile unsigned char *)0xF0650)
#define RXBA3 (*(volatile unsigned char *)0xF0651)
#define ASIMA30 (*(volatile union un_asima30 *)0xF0652).asima30
#define ASIMA30_bit (*(volatile union un_asima30 *)0xF0652).BIT
#define ASIMA31 (*(volatile union un_asima31 *)0xF0653).asima31
#define ASIMA31_bit (*(volatile union un_asima31 *)0xF0653).BIT
#define BRGCA3 (*(volatile unsigned char *)0xF0654)
#define ASISA3 (*(volatile unsigned char *)0xF0655)
#define ASCTA3 (*(volatile union un_ascta3 *)0xF0656).ascta3
#define ASCTA3_bit (*(volatile union un_ascta3 *)0xF0656).BIT
#define UTA3CK (*(volatile union un_uta3ck *)0xF0660).uta3ck
#define UTA3CK_bit (*(volatile union un_uta3ck *)0xF0660).BIT
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
#define TKBCR00 (*(volatile unsigned short *)0xF0740)
#define TKBCR01 (*(volatile unsigned short *)0xF0742)
#define TKBCR02 (*(volatile unsigned short *)0xF0744)
#define TKBCR03 (*(volatile unsigned short *)0xF0746)
#define TKBTGCR0 (*(volatile unsigned short *)0xF0748)
#define TKBSIR00 (*(volatile unsigned short *)0xF074A)
#define TKBSIR01 (*(volatile unsigned short *)0xF074C)
#define TKBDNR00 (*(volatile unsigned char *)0xF074E)
#define TKBSSR00 (*(volatile unsigned char *)0xF074F)
#define TKBDNR01 (*(volatile unsigned char *)0xF0750)
#define TKBSSR01 (*(volatile unsigned char *)0xF0751)
#define TKBTRG0 (*(volatile union un_tkbtrg0 *)0xF0752).tkbtrg0
#define TKBTRG0_bit (*(volatile union un_tkbtrg0 *)0xF0752).BIT
#define TKBFLG0 (*(volatile union un_tkbflg0 *)0xF0753).tkbflg0
#define TKBFLG0_bit (*(volatile union un_tkbflg0 *)0xF0753).BIT
#define TKBCRLD00 (*(volatile unsigned short *)0xF0754)
#define TKBCRLD01 (*(volatile unsigned short *)0xF0756)
#define TKBCNT0 (*(volatile unsigned short *)0xF0760)
#define TKBCTL00 (*(volatile unsigned short *)0xF0762)
#define TKBMFR0 (*(volatile unsigned short *)0xF0764)
#define TKBIOC00 (*(volatile union un_tkbioc00 *)0xF0766).tkbioc00
#define TKBIOC00_bit (*(volatile union un_tkbioc00 *)0xF0766).BIT
#define TKBCLR0 (*(volatile union un_tkbclr0 *)0xF0767).tkbclr0
#define TKBCLR0_bit (*(volatile union un_tkbclr0 *)0xF0767).BIT
#define TKBIOC01 (*(volatile union un_tkbioc01 *)0xF0768).tkbioc01
#define TKBIOC01_bit (*(volatile union un_tkbioc01 *)0xF0768).BIT
#define TKBCTL01 (*(volatile union un_tkbctl01 *)0xF0769).tkbctl01
#define TKBCTL01_bit (*(volatile union un_tkbctl01 *)0xF0769).BIT
#define TKBCTL02 (*(volatile unsigned short *)0xF076A)
#define TKBPACTL00 (*(volatile unsigned short *)0xF0770)
#define TKBPACTL01 (*(volatile unsigned short *)0xF0772)
#define TKBPAHFS0 (*(volatile union un_tkbpahfs0 *)0xF0774).tkbpahfs0
#define TKBPAHFS0_bit (*(volatile union un_tkbpahfs0 *)0xF0774).BIT
#define TKBPAHFT0 (*(volatile union un_tkbpahft0 *)0xF0775).tkbpahft0
#define TKBPAHFT0_bit (*(volatile union un_tkbpahft0 *)0xF0775).BIT
#define TKBPAFLG0 (*(volatile union un_tkbpaflg0 *)0xF0776).tkbpaflg0
#define TKBPAFLG0_bit (*(volatile union un_tkbpaflg0 *)0xF0776).BIT
#define TKBPACTL02 (*(volatile union un_tkbpactl02 *)0xF0777).tkbpactl02
#define TKBPACTL02_bit (*(volatile union un_tkbpactl02 *)0xF0777).BIT
#define TKBPAHZS00 (*(volatile unsigned short *)0xF0778)
#define TKBPAHZS01 (*(volatile unsigned short *)0xF077A)
#define TKBPAFXS00 (*(volatile unsigned short *)0xF077C)
#define TKBPAFXS01 (*(volatile unsigned short *)0xF077E)
#define TKBCR10 (*(volatile unsigned short *)0xF0780)
#define TKBCR11 (*(volatile unsigned short *)0xF0782)
#define TKBCR12 (*(volatile unsigned short *)0xF0784)
#define TKBCR13 (*(volatile unsigned short *)0xF0786)
#define TKBTGCR1 (*(volatile unsigned short *)0xF0788)
#define TKBSIR10 (*(volatile unsigned short *)0xF078A)
#define TKBSIR11 (*(volatile unsigned short *)0xF078C)
#define TKBDNR10 (*(volatile unsigned char *)0xF078E)
#define TKBSSR10 (*(volatile unsigned char *)0xF078F)
#define TKBDNR11 (*(volatile unsigned char *)0xF0790)
#define TKBSSR11 (*(volatile unsigned char *)0xF0791)
#define TKBTRG1 (*(volatile union un_tkbtrg1 *)0xF0792).tkbtrg1
#define TKBTRG1_bit (*(volatile union un_tkbtrg1 *)0xF0792).BIT
#define TKBFLG1 (*(volatile union un_tkbflg1 *)0xF0793).tkbflg1
#define TKBFLG1_bit (*(volatile union un_tkbflg1 *)0xF0793).BIT
#define TKBCRLD10 (*(volatile unsigned short *)0xF0794)
#define TKBCRLD11 (*(volatile unsigned short *)0xF0796)
#define TKBCNT1 (*(volatile unsigned short *)0xF07A0)
#define TKBCTL10 (*(volatile unsigned short *)0xF07A2)
#define TKBMFR1 (*(volatile unsigned short *)0xF07A4)
#define TKBIOC10 (*(volatile union un_tkbioc10 *)0xF07A6).tkbioc10
#define TKBIOC10_bit (*(volatile union un_tkbioc10 *)0xF07A6).BIT
#define TKBCLR1 (*(volatile union un_tkbclr1 *)0xF07A7).tkbclr1
#define TKBCLR1_bit (*(volatile union un_tkbclr1 *)0xF07A7).BIT
#define TKBIOC11 (*(volatile union un_tkbioc11 *)0xF07A8).tkbioc11
#define TKBIOC11_bit (*(volatile union un_tkbioc11 *)0xF07A8).BIT
#define TKBCTL11 (*(volatile union un_tkbctl11 *)0xF07A9).tkbctl11
#define TKBCTL11_bit (*(volatile union un_tkbctl11 *)0xF07A9).BIT
#define TKBCTL12 (*(volatile unsigned short *)0xF07AA)
#define TKBPACTL10 (*(volatile unsigned short *)0xF07B0)
#define TKBPACTL11 (*(volatile unsigned short *)0xF07B2)
#define TKBPAHFS1 (*(volatile union un_tkbpahfs1 *)0xF07B4).tkbpahfs1
#define TKBPAHFS1_bit (*(volatile union un_tkbpahfs1 *)0xF07B4).BIT
#define TKBPAHFT1 (*(volatile union un_tkbpahft1 *)0xF07B5).tkbpahft1
#define TKBPAHFT1_bit (*(volatile union un_tkbpahft1 *)0xF07B5).BIT
#define TKBPAFLG1 (*(volatile union un_tkbpaflg1 *)0xF07B6).tkbpaflg1
#define TKBPAFLG1_bit (*(volatile union un_tkbpaflg1 *)0xF07B6).BIT
#define TKBPACTL12 (*(volatile union un_tkbpactl12 *)0xF07B7).tkbpactl12
#define TKBPACTL12_bit (*(volatile union un_tkbpactl12 *)0xF07B7).BIT
#define TKBPAHZS10 (*(volatile unsigned short *)0xF07B8)
#define TKBPAHZS11 (*(volatile unsigned short *)0xF07BA)
#define TKBPAFXS10 (*(volatile unsigned short *)0xF07BC)
#define TKBPAFXS11 (*(volatile unsigned short *)0xF07BE)

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
#define ULBS6 ULBS_bit.no6
#define ULBS7 ULBS_bit.no7
#define TOS0 TOS_bit.no0
#define DFLEN DFLCTL_bit.no0
#define BANKPGEN FLMODE_bit.no1
#define MODE0 FLMODE_bit.no6
#define MODE1 FLMODE_bit.no7
#define FLMWEN FLMWRP_bit.no0
#define ESQST FSSE_bit.no7
#define TAU0EN PER0_bit.no0
#define SAU0EN PER0_bit.no2
#define SAU1EN PER0_bit.no3
#define IICA0EN PER0_bit.no4
#define ADCEN PER0_bit.no5
#define IICA1EN PER0_bit.no6
#define RTCWEN PER0_bit.no7
#define TAU0RES PRR0_bit.no0
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
#define UTA0EN PER1_bit.no2
#define DTCEN PER1_bit.no3
#define TML32EN PER1_bit.no4
#define CMPEN PER1_bit.no5
#define SMSEN PER1_bit.no6
#define DACEN PER1_bit.no7
#define CTSURES PRR1_bit.no0
#define TML32RES PRR1_bit.no4
#define CMPRES PRR1_bit.no5
#define SMSRES PRR1_bit.no6
#define DACRES PRR1_bit.no7
#define TRJ0EN PER2_bit.no0
#define TRJ1EN PER2_bit.no1
#define UTA1EN PER2_bit.no2
#define UTA2EN PER2_bit.no3
#define UTA3EN PER2_bit.no4
#define TKBEN PER2_bit.no5
#define OSDCEN PER2_bit.no6
#define EXSDEN PER2_bit.no7
#define TRJ0RES PRR2_bit.no0
#define TRJ1RES PRR2_bit.no1
#define TKBRES PRR2_bit.no5
#define OSDCRES PRR2_bit.no6
#define EXSDRES PRR2_bit.no7
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
#define EXSDLPC EXSDM1_bit.no0
#define EXSDOE00 EXSDM0_bit.no0
#define EXSDOE01 EXSDM0_bit.no1
#define PRTY0 EXSDM0_bit.no5
#define EXSDD00 EXSDM0_bit.no6
#define EXSDD01 EXSDM0_bit.no7
#define FSSTP FSSQ_bit.no6
#define SQST FSSQ_bit.no7
#define CLKDEN0 CLKDCTL_bit.no0
#define CLKDEN1 CLKDCTL_bit.no1
#define CLKDEN2 CLKDCTL_bit.no2
#define CLKDEN3 CLKDCTL_bit.no3
#define CRC0EN CRC0CTL_bit.no7
#define ISRMA0 ASIMA00_bit.no0
#define ISSMA0 ASIMA00_bit.no1
#define RXEA0 ASIMA00_bit.no5
#define TXEA0 ASIMA00_bit.no6
#define UARTAEN0 ASIMA00_bit.no7
#define OVECTA0 ASCTA0_bit.no0
#define FECTA0 ASCTA0_bit.no1
#define PECTA0 ASCTA0_bit.no2
#define TCE5MG TMC5MG_bit.no7
#define TCL5MG0 TCL5MG_bit.no0
#define DACE0 DAM0_bit.no4
#define DACE1 DAM0_bit.no5
#define DACE2 DAM1_bit.no4
#define C0ENB COMPMDR_bit.no0
#define C1ENB COMPMDR_bit.no4
#define C0IE COMPOCR_bit.no0
#define C0OE COMPOCR_bit.no1
#define C1IE COMPOCR_bit.no4
#define C1OE COMPOCR_bit.no5
#define COVF3 TMC3_bit.no0
#define TM3ST TMC3_bit.no7
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
#define TSTART00 TRTCR0_bit.no0
#define TSTART01 TRTCR0_bit.no2
#define TSTART10 TRTCR1_bit.no0
#define TSTART11 TRTCR1_bit.no2
#define TSTART20 TRTCR2_bit.no0
#define TSTART21 TRTCR2_bit.no2
#define TSTART30 TRTCR3_bit.no0
#define TSTART31 TRTCR3_bit.no2
#define TSTART40 TRTCR4_bit.no0
#define TSTART41 TRTCR4_bit.no2
#define TSTART50 TRTCR5_bit.no0
#define TSTART51 TRTCR5_bit.no2
#define TSTART60 TRTCR6_bit.no0
#define TSTART61 TRTCR6_bit.no2
#define TSTART70 TRTCR7_bit.no0
#define TSTART71 TRTCR7_bit.no2
#define TKBRDT2 TKBTRG2_bit.no0
#define TKBRSF2 TKBFLG2_bit.no0
#define TKBMFF2 TKBFLG2_bit.no1
#define TKBIEF2 TKBFLG2_bit.no2
#define TKBIRF2 TKBFLG2_bit.no3
#define TKBSEF20 TKBFLG2_bit.no4
#define TKBSEF21 TKBFLG2_bit.no5
#define TKBSSF20 TKBFLG2_bit.no6
#define TKBSSF21 TKBFLG2_bit.no7
#define TKBTOD20 TKBIOC20_bit.no0
#define TKBTOD21 TKBIOC20_bit.no1
#define TKBTOL20 TKBIOC20_bit.no2
#define TKBTOL21 TKBIOC20_bit.no3
#define TKBCLMF2 TKBCLR2_bit.no1
#define TKBCLIE2 TKBCLR2_bit.no2
#define TKBCLIR2 TKBCLR2_bit.no3
#define TKBCLSE20 TKBCLR2_bit.no4
#define TKBCLSE21 TKBCLR2_bit.no5
#define TKBTOE20 TKBIOC21_bit.no0
#define TKBTOE21 TKBIOC21_bit.no1
#define TKBCE2 TKBCTL21_bit.no7
#define TKBPAHTS20 TKBPAHFS2_bit.no0
#define TKBPAHTS21 TKBPAHFS2_bit.no1
#define TKBPAHTT20 TKBPAHFT2_bit.no0
#define TKBPAHTT21 TKBPAHFT2_bit.no1
#define TKBPAHIF20 TKBPAFLG2_bit.no0
#define TKBPAFIF20 TKBPAFLG2_bit.no1
#define TKBPAHIF21 TKBPAFLG2_bit.no2
#define TKBPAFIF21 TKBPAFLG2_bit.no3
#define TKBPAHSF20 TKBPAFLG2_bit.no4
#define TKBPAFSF20 TKBPAFLG2_bit.no5
#define TKBPAHSF21 TKBPAFLG2_bit.no6
#define TKBPAFSF21 TKBPAFLG2_bit.no7
#define TKBPACE20 TKBPACTL22_bit.no0
#define TKBPACE21 TKBPACTL22_bit.no1
#define TRNGST TRNGSCR0_bit.no2
#define TRNGEN TRNGSCR0_bit.no3
#define TRNGRDY TRNGSCR0_bit.no7
#define ISRMA1 ASIMA10_bit.no0
#define ISSMA1 ASIMA10_bit.no1
#define RXEA1 ASIMA10_bit.no5
#define TXEA1 ASIMA10_bit.no6
#define UARTAEN1 ASIMA10_bit.no7
#define OVECTA1 ASCTA1_bit.no0
#define FECTA1 ASCTA1_bit.no1
#define PECTA1 ASCTA1_bit.no2
#define ISRMA2 ASIMA20_bit.no0
#define ISSMA2 ASIMA20_bit.no1
#define RXEA2 ASIMA20_bit.no5
#define TXEA2 ASIMA20_bit.no6
#define UARTAEN2 ASIMA20_bit.no7
#define OVECTA2 ASCTA2_bit.no0
#define FECTA2 ASCTA2_bit.no1
#define PECTA2 ASCTA2_bit.no2
#define ISRMA3 ASIMA30_bit.no0
#define ISSMA3 ASIMA30_bit.no1
#define RXEA3 ASIMA30_bit.no5
#define TXEA3 ASIMA30_bit.no6
#define UARTAEN3 ASIMA30_bit.no7
#define OVECTA3 ASCTA3_bit.no0
#define FECTA3 ASCTA3_bit.no1
#define PECTA3 ASCTA3_bit.no2
#define TKBRDT0 TKBTRG0_bit.no0
#define TKBRSF0 TKBFLG0_bit.no0
#define TKBMFF0 TKBFLG0_bit.no1
#define TKBIEF0 TKBFLG0_bit.no2
#define TKBIRF0 TKBFLG0_bit.no3
#define TKBSEF00 TKBFLG0_bit.no4
#define TKBSEF01 TKBFLG0_bit.no5
#define TKBSSF00 TKBFLG0_bit.no6
#define TKBSSF01 TKBFLG0_bit.no7
#define TKBTOD00 TKBIOC00_bit.no0
#define TKBTOD01 TKBIOC00_bit.no1
#define TKBTOL00 TKBIOC00_bit.no2
#define TKBTOL01 TKBIOC00_bit.no3
#define TKBCLMF0 TKBCLR0_bit.no1
#define TKBCLIE0 TKBCLR0_bit.no2
#define TKBCLIR0 TKBCLR0_bit.no3
#define TKBCLSE00 TKBCLR0_bit.no4
#define TKBCLSE01 TKBCLR0_bit.no5
#define TKBTOE00 TKBIOC01_bit.no0
#define TKBTOE01 TKBIOC01_bit.no1
#define TKBCE0 TKBCTL01_bit.no7
#define TKBPAHTS00 TKBPAHFS0_bit.no0
#define TKBPAHTS01 TKBPAHFS0_bit.no1
#define TKBPAHTT00 TKBPAHFT0_bit.no0
#define TKBPAHTT01 TKBPAHFT0_bit.no1
#define TKBPAHIF00 TKBPAFLG0_bit.no0
#define TKBPAFIF00 TKBPAFLG0_bit.no1
#define TKBPAHIF01 TKBPAFLG0_bit.no2
#define TKBPAFIF01 TKBPAFLG0_bit.no3
#define TKBPAHSF00 TKBPAFLG0_bit.no4
#define TKBPAFSF00 TKBPAFLG0_bit.no5
#define TKBPAHSF01 TKBPAFLG0_bit.no6
#define TKBPAFSF01 TKBPAFLG0_bit.no7
#define TKBPACE00 TKBPACTL02_bit.no0
#define TKBPACE01 TKBPACTL02_bit.no1
#define TKBRDT1 TKBTRG1_bit.no0
#define TKBRSF1 TKBFLG1_bit.no0
#define TKBMFF1 TKBFLG1_bit.no1
#define TKBIEF1 TKBFLG1_bit.no2
#define TKBIRF1 TKBFLG1_bit.no3
#define TKBSEF10 TKBFLG1_bit.no4
#define TKBSEF11 TKBFLG1_bit.no5
#define TKBSSF10 TKBFLG1_bit.no6
#define TKBSSF11 TKBFLG1_bit.no7
#define TKBTOD10 TKBIOC10_bit.no0
#define TKBTOD11 TKBIOC10_bit.no1
#define TKBTOL10 TKBIOC10_bit.no2
#define TKBTOL11 TKBIOC10_bit.no3
#define TKBCLMF1 TKBCLR1_bit.no1
#define TKBCLIE1 TKBCLR1_bit.no2
#define TKBCLIR1 TKBCLR1_bit.no3
#define TKBCLSE10 TKBCLR1_bit.no4
#define TKBCLSE11 TKBCLR1_bit.no5
#define TKBTOE10 TKBIOC11_bit.no0
#define TKBTOE11 TKBIOC11_bit.no1
#define TKBCE1 TKBCTL11_bit.no7
#define TKBPAHTS10 TKBPAHFS1_bit.no0
#define TKBPAHTS11 TKBPAHFS1_bit.no1
#define TKBPAHTT10 TKBPAHFT1_bit.no0
#define TKBPAHTT11 TKBPAHFT1_bit.no1
#define TKBPAHIF10 TKBPAFLG1_bit.no0
#define TKBPAFIF10 TKBPAFLG1_bit.no1
#define TKBPAHIF11 TKBPAFLG1_bit.no2
#define TKBPAFIF11 TKBPAFLG1_bit.no3
#define TKBPAHSF10 TKBPAFLG1_bit.no4
#define TKBPAFSF10 TKBPAFLG1_bit.no5
#define TKBPAHSF11 TKBPAFLG1_bit.no6
#define TKBPAFSF11 TKBPAFLG1_bit.no7
#define TKBPACE10 TKBPACTL12_bit.no0
#define TKBPACE11 TKBPACTL12_bit.no1

/*
 Interrupt vector addresses
 */
#endif

#endif /* MIKROE_RL78_L23_MCU_H */
