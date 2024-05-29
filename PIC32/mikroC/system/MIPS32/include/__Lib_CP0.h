/*
 * Contains register definitions for the CP0 registers and bits
 */

/* CP0 Register Defines
 * const _CP0_<register_name> <register_number>, <select_number>
 */
const CP0_HWRENA                             = 7;
const unsigned long CP0_HWRENA_SELECT        = 0;
const unsigned long CP0_BADVADDR             = 8;
const unsigned long CP0_BADVADDR_SELECT      = 0;
const unsigned long CP0_COUNT                = 9;
const unsigned long CP0_COUNT_SELECT         = 0;
const unsigned long CP0_COMPARE              = 11;
const unsigned long CP0_COMPARE_SELECT       = 0;
const unsigned long CP0_STATUS               = 12;
const unsigned long CP0_STATUS_SELECT        = 0;
const unsigned long CP0_INTCTL               = 12;
const unsigned long CP0_INTCTL_SELECT        = 1;
const unsigned long CP0_SRSCTL               = 12;
const unsigned long CP0_SRSCTL_SELECT        = 2;
const unsigned long CP0_SRSMAP               = 12;
const unsigned long CP0_SRSMAP_SELECT        = 3;
const unsigned long CP0_CAUSE                = 13;
const unsigned long CP0_CAUSE_SELECT         = 0;
const unsigned long CP0_EPC                  = 14;
const unsigned long CP0_EPC_SELECT           = 0;
const unsigned long CP0_PRID                 = 15;
const unsigned long CP0_PRID_SELECT          = 0;
const unsigned long CP0_EBASE                = 15;
const unsigned long CP0_EBASE_SELECT         = 1;
const unsigned long CP0_CONFIG               = 16;
const unsigned long CP0_CONFIG_SELECT        = 0;
const unsigned long CP0_CONFIG1              = 16;
const unsigned long CP0_CONFIG1_SELECT       = 1;
const unsigned long CP0_CONFIG2              = 16;
const unsigned long CP0_CONFIG2_SELECT       = 2;
const unsigned long CP0_CONFIG3              = 16;
const unsigned long CP0_CONFIG3_SELECT       = 3;
const unsigned long CP0_DEBUG                = 23;
const unsigned long CP0_DEBUG_SELECT         = 0;
const unsigned long CP0_TRACECONTROL         = 23;
const unsigned long CP0_TRACECONTROL_SELECT  = 1;
const unsigned long CP0_TRACECONTROL2        = 23;
const unsigned long CP0_TRACECONTROL2_SELECT = 2;
const unsigned long CP0_USERTRACEDATA        = 23;
const unsigned long CP0_USERTRACEDATA_SELECT = 3;
const unsigned long CP0_TRACEBPC             = 23;
const unsigned long CP0_TRACEBPC_SELECT      = 4;
const unsigned long CP0_DEBUG2               = 23;
const unsigned long CP0_DEBUG2_SELEECT       = 5;
const unsigned long CP0_DEPC                 = 24;
const unsigned long CP0_DEPC_SELECT          = 0;
const unsigned long CP0_ERROREPC             = 30;
const unsigned long CP0_ERROREPC_SELECT      = 0;
const unsigned long CP0_DESAVE               = 31;
const unsigned long CP0_DESAVE_SELECT        = 0;

// There are CP0_GET and CP0_SET built-ins in the compiler
// CP0_GET returns the value of a register or part of a register (bitfield/bit)
// CP0_SET sets the value of a register or part of a register (bitfield/bit)

// every register must have a REGISTER_NAME_SELECT

// every bitfield/bit must have a REGISTER_NAME_POSITION, REGISTER_NAME_MASK, REGISTER_NAME_LENGTH

const unsigned long CP0_HWRENA_MASK                       = 0x00000000;
const unsigned long CP0_HWRENA_MASK_POSITION              = 0x00000000;
const unsigned long CP0_HWRENA_MASK_MASK                  = 0x0000000F;
const unsigned long CP0_HWRENA_MASK_LENGTH                = 0x00000004;

const unsigned long CP0_STATUS_IE                         = 0x00000000;
const unsigned long CP0_STATUS_IE_POSITION                = 0x00000000;
const unsigned long CP0_STATUS_IE_MASK                    = 0x00000001;
const unsigned long CP0_STATUS_IE_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_EXL                        = 0x00000001;
const unsigned long CP0_STATUS_EXL_POSITION               = 0x00000001;
const unsigned long CP0_STATUS_EXL_MASK                   = 0x00000002;
const unsigned long CP0_STATUS_EXL_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_ERL                        = 0x00000002;
const unsigned long CP0_STATUS_ERL_POSITION               = 0x00000002;
const unsigned long CP0_STATUS_ERL_MASK                   = 0x00000004;
const unsigned long CP0_STATUS_ERL_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_UM                         = 0x00000004;
const unsigned long CP0_STATUS_UM_POSITION                = 0x00000004;
const unsigned long CP0_STATUS_UM_MASK                    = 0x00000010;
const unsigned long CP0_STATUS_UM_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_IM0                        = 0x00000008;
const unsigned long CP0_STATUS_IM0_POSITION               = 0x00000008;
const unsigned long CP0_STATUS_IM0_MASK                   = 0x00000100;
const unsigned long CP0_STATUS_IM0_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM1                        = 0x00000009;
const unsigned long CP0_STATUS_IM1_POSITION               = 0x00000009;
const unsigned long CP0_STATUS_IM1_MASK                   = 0x00000200;
const unsigned long CP0_STATUS_IM1_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IPL                        = 0x0000000A;
const unsigned long CP0_STATUS_IPL_POSITION               = 0x0000000A;
const unsigned long CP0_STATUS_IPL_MASK                   = 0x0000FC00;
const unsigned long CP0_STATUS_IPL_LENGTH                 = 0x00000006;

const unsigned long CP0_STATUS_IM2                        = 0x0000000A;
const unsigned long CP0_STATUS_IM2_POSITION               = 0x0000000A;
const unsigned long CP0_STATUS_IM2_MASK                   = 0x00000400;
const unsigned long CP0_STATUS_IM2_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM3                        = 0x0000000B;
const unsigned long CP0_STATUS_IM3_POSITION               = 0x0000000B;
const unsigned long CP0_STATUS_IM3_MASK                   = 0x00000800;
const unsigned long CP0_STATUS_IM3_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM4                        = 0x0000000C;
const unsigned long CP0_STATUS_IM4_POSITION               = 0x0000000C;
const unsigned long CP0_STATUS_IM4_MASK                   = 0x00001000;
const unsigned long CP0_STATUS_IM4_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM5                        = 0x0000000D;
const unsigned long CP0_STATUS_IM5_POSITION               = 0x0000000D;
const unsigned long CP0_STATUS_IM5_MASK                   = 0x00002000;
const unsigned long CP0_STATUS_IM5_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM6                        = 0x0000000E;
const unsigned long CP0_STATUS_IM6_POSITION               = 0x0000000E;
const unsigned long CP0_STATUS_IM6_MASK                   = 0x00004000;
const unsigned long CP0_STATUS_IM6_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_IM7                        = 0x0000000F;
const unsigned long CP0_STATUS_IM7_POSITION               = 0x0000000F;
const unsigned long CP0_STATUS_IM7_MASK                   = 0x00008000;
const unsigned long CP0_STATUS_IM7_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_CEE                        = 0x00000011;
const unsigned long CP0_STATUS_CEE_POSITION               = 0x00000011;
const unsigned long CP0_STATUS_CEE_MASK                   = 0x00020000;
const unsigned long CP0_STATUS_CEE_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_NMI                        = 0x00000013;
const unsigned long CP0_STATUS_NMI_POSITION               = 0x00000013;
const unsigned long CP0_STATUS_NMI_MASK                   = 0x00080000;
const unsigned long CP0_STATUS_NMI_LENGTH                 = 0x00000001;

const unsigned long _CPO_STATUS_SR                        = 0x00000014;
const unsigned long _CPO_STATUS_SR_POSITION               = 0x00000014;
const unsigned long CP0_STATUS_SR_MASK                    = 0x00100000;
const unsigned long CP0_STATUS_SR_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_TS                         = 0x00000015;
const unsigned long CP0_STATUS_TS_POSITION                = 0x00000015;
const unsigned long CP0_STATUS_TS_MASK                    = 0x00200000;
const unsigned long CP0_STATUS_TS_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_BEV                        = 0x00000016;
const unsigned long CP0_STATUS_BEV_POSITION               = 0x00000016;
const unsigned long CP0_STATUS_BEV_MASK                   = 0x00400000;
const unsigned long CP0_STATUS_BEV_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_RE                         = 0x00000019;
const unsigned long CP0_STATUS_RE_POSITION                = 0x00000019;
const unsigned long CP0_STATUS_RE_MASK                    = 0x02000000;
const unsigned long CP0_STATUS_RE_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_FR                         = 0x0000001A;
const unsigned long CP0_STATUS_FR_POSITION                = 0x0000001A;
const unsigned long CP0_STATUS_FR_MASK                    = 0x04000000;
const unsigned long CP0_STATUS_FR_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_RP                         = 0x0000001B;
const unsigned long CP0_STATUS_RP_POSITION                = 0x0000001B;
const unsigned long CP0_STATUS_RP_MASK                    = 0x08000000;
const unsigned long CP0_STATUS_RP_LENGTH                  = 0x00000001;

const unsigned long CP0_STATUS_CU0                        = 0x0000001C;
const unsigned long CP0_STATUS_CU0_POSITION               = 0x0000001C;
const unsigned long CP0_STATUS_CU0_MASK                   = 0x10000000;
const unsigned long CP0_STATUS_CU0_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_CU1                        = 0x0000001D;
const unsigned long CP0_STATUS_CU1_POSITION               = 0x0000001D;
const unsigned long CP0_STATUS_CU1_MASK                   = 0x20000000;
const unsigned long CP0_STATUS_CU1_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_CU2                        = 0x0000001E;
const unsigned long CP0_STATUS_CU2_POSITION               = 0x0000001E;
const unsigned long CP0_STATUS_CU2_MASK                   = 0x40000000;
const unsigned long CP0_STATUS_CU2_LENGTH                 = 0x00000001;

const unsigned long CP0_STATUS_CU3                        = 0x0000001F;
const unsigned long CP0_STATUS_CU3_POSITION               = 0x0000001F;
const unsigned long CP0_STATUS_CU3_MASK                   = 0x80000000;
const unsigned long CP0_STATUS_CU3_LENGTH                 = 0x00000001;

const unsigned long CP0_INTCTL_VS                         = 0x00000005;
const unsigned long CP0_INTCTL_VS_POSITION                = 0x00000005;
const unsigned long CP0_INTCTL_VS_MASK                    = 0x000003E0;
const unsigned long CP0_INTCTL_VS_LENGTH                  = 0x00000005;

const unsigned long CP0_INTCTL_IPPCI                      = 0x0000001A;
const unsigned long CP0_INTCTL_IPPCI_POSITION             = 0x0000001A;
const unsigned long CP0_INTCTL_IPPCI_MASK                 = 0x1C000000;
const unsigned long CP0_INTCTL_IPPCI_LENGTH               = 0x00000003;

const unsigned long CP0_INTCTL_IPTI                       = 0x0000001D;
const unsigned long CP0_INTCTL_IPTI_POSITION              = 0x0000001D;
const unsigned long CP0_INTCTL_IPTI_MASK                  = 0xE0000000;
const unsigned long CP0_INTCTL_IPTI_LENGTH                = 0x00000003;

const unsigned long CP0_SRSCTL_CSS                        = 0x00000000;
const unsigned long CP0_SRSCTL_CSS_POSITION               = 0x00000000;
const unsigned long CP0_SRSCTL_CSS_MASK                   = 0x0000000F;
const unsigned long CP0_SRSCTL_CSS_LENGTH                 = 0x00000004;

const unsigned long CP0_SRSCTL_PSS                        = 0x00000006;
const unsigned long CP0_SRSCTL_PSS_POSITION               = 0x00000006;
const unsigned long CP0_SRSCTL_PSS_MASK                   = 0x000003C0;
const unsigned long CP0_SRSCTL_PSS_LENGTH                 = 0x00000004;

const unsigned long CP0_SRSCTL_ESS                        = 0x0000000C;
const unsigned long CP0_SRSCTL_ESS_POSITION               = 0x0000000C;
const unsigned long CP0_SRSCTL_ESS_MASK                   = 0x0000F000;
const unsigned long CP0_SRSCTL_ESS_LENGTH                 = 0x00000004;

const unsigned long CP0_SRSCTL_EICSS                      = 0x00000012;
const unsigned long CP0_SRSCTL_EICSS_POSITION             = 0x00000012;
const unsigned long CP0_SRSCTL_EICSS_MASK                 = 0x003C0000;
const unsigned long CP0_SRSCTL_EICSS_LENGTH               = 0x00000004;

const unsigned long CP0_SRSCTL_HSS                        = 0x0000001A;
const unsigned long CP0_SRSCTL_HSS_POSITION               = 0x0000001A;
const unsigned long CP0_SRSCTL_HSS_MASK                   = 0x3C000000;
const unsigned long CP0_SRSCTL_HSS_LENGTH                 = 0x00000004;

const unsigned long CP0_SRSMAP_SSV0                       = 0x00000000;
const unsigned long CP0_SRSMAP_SSV0_POSITION              = 0x00000000;
const unsigned long CP0_SRSMAP_SSV0_MASK                  = 0x0000000F;
const unsigned long CP0_SRSMAP_SSV0_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV1                       = 0x00000004;
const unsigned long CP0_SRSMAP_SSV1_POSITION              = 0x00000004;
const unsigned long CP0_SRSMAP_SSV1_MASK                  = 0x000000F0;
const unsigned long CP0_SRSMAP_SSV1_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV2                       = 0x00000008;
const unsigned long CP0_SRSMAP_SSV2_POSITION              = 0x00000008;
const unsigned long CP0_SRSMAP_SSV2_MASK                  = 0x00000F00;
const unsigned long CP0_SRSMAP_SSV2_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV3                       = 0x0000000C;
const unsigned long CP0_SRSMAP_SSV3_POSITION              = 0x0000000C;
const unsigned long CP0_SRSMAP_SSV3_MASK                  = 0x0000F000;
const unsigned long CP0_SRSMAP_SSV3_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV4                       = 0x00000010;
const unsigned long CP0_SRSMAP_SSV4_POSITION              = 0x00000010;
const unsigned long CP0_SRSMAP_SSV4_MASK                  = 0x000F0000;
const unsigned long CP0_SRSMAP_SSV4_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV5                       = 0x00000014;
const unsigned long CP0_SRSMAP_SSV5_POSITION              = 0x00000014;
const unsigned long CP0_SRSMAP_SSV5_MASK                  = 0x00F00000;
const unsigned long CP0_SRSMAP_SSV5_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV6                       = 0x00000018;
const unsigned long CP0_SRSMAP_SSV6_POSITION              = 0x00000018;
const unsigned long CP0_SRSMAP_SSV6_MASK                  = 0x0F000000;
const unsigned long CP0_SRSMAP_SSV6_LENGTH                = 0x00000004;

const unsigned long CP0_SRSMAP_SSV7                       = 0x0000001C;
const unsigned long CP0_SRSMAP_SSV7_POSITION              = 0x0000001C;
const unsigned long CP0_SRSMAP_SSV7_MASK                  = 0xF0000000;
const unsigned long CP0_SRSMAP_SSV7_LENGTH                = 0x00000004;

const unsigned long CP0_CAUSE_EXCCODE                     = 0x00000002;
const unsigned long CP0_CAUSE_EXCCODE_POSITION            = 0x00000002;
const unsigned long CP0_CAUSE_EXCCODE_MASK                = 0x0000007C;
const unsigned long CP0_CAUSE_EXCCODE_LENGTH              = 0x00000005;

const unsigned long CP0_CAUSE_IP0                         = 0x00000008;
const unsigned long CP0_CAUSE_IP0_POSITION                = 0x00000008;
const unsigned long CP0_CAUSE_IP0_MASK                    = 0x00000100;
const unsigned long CP0_CAUSE_IP0_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP1                         = 0x00000009;
const unsigned long CP0_CAUSE_IP1_POSITION                = 0x00000009;
const unsigned long CP0_CAUSE_IP1_MASK                    = 0x00000200;
const unsigned long CP0_CAUSE_IP1_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_RIPL                        = 0x0000000A;
const unsigned long CP0_CAUSE_RIPL_POSITION               = 0x0000000A;
const unsigned long CP0_CAUSE_RIPL_MASK                   = 0x0000FC00;
const unsigned long CP0_CAUSE_RIPL_LENGTH                 = 0x00000006;

const unsigned long CP0_CAUSE_IP2                         = 0x0000000A;
const unsigned long CP0_CAUSE_IP2_POSITION                = 0x0000000A;
const unsigned long CP0_CAUSE_IP2_MASK                    = 0x00000400;
const unsigned long CP0_CAUSE_IP2_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP3                         = 0x0000000B;
const unsigned long CP0_CAUSE_IP3_POSITION                = 0x0000000B;
const unsigned long CP0_CAUSE_IP3_MASK                    = 0x00000800;
const unsigned long CP0_CAUSE_IP3_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP4                         = 0x0000000C;
const unsigned long CP0_CAUSE_IP4_POSITION                = 0x0000000C;
const unsigned long CP0_CAUSE_IP4_MASK                    = 0x00001000;
const unsigned long CP0_CAUSE_IP4_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP5                         = 0x0000000D;
const unsigned long CP0_CAUSE_IP5_POSITION                = 0x0000000D;
const unsigned long CP0_CAUSE_IP5_MASK                    = 0x00002000;
const unsigned long CP0_CAUSE_IP5_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP6                         = 0x0000000E;
const unsigned long CP0_CAUSE_IP6_POSITION                = 0x0000000E;
const unsigned long CP0_CAUSE_IP6_MASK                    = 0x00004000;
const unsigned long CP0_CAUSE_IP6_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_IP7                         = 0x0000000F;
const unsigned long CP0_CAUSE_IP7_POSITION                = 0x0000000F;
const unsigned long CP0_CAUSE_IP7_MASK                    = 0x00008000;
const unsigned long CP0_CAUSE_IP7_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_WP                          = 0x00000016;
const unsigned long CP0_CAUSE_WP_POSITION                 = 0x00000016;
const unsigned long CP0_CAUSE_WP_MASK                     = 0x00400000;
const unsigned long CP0_CAUSE_WP_LENGTH                   = 0x00000001;

const unsigned long CP0_CAUSE_IV                          = 0x00000017;
const unsigned long CP0_CAUSE_IV_POSITION                 = 0x00000017;
const unsigned long CP0_CAUSE_IV_MASK                     = 0x00800000;
const unsigned long CP0_CAUSE_IV_LENGTH                   = 0x00000001;

const unsigned long CP0_CAUSE_PCI                         = 0x0000001A;
const unsigned long CP0_CAUSE_PCI_POSITION                = 0x0000001A;
const unsigned long CP0_CAUSE_PCI_MASK                    = 0x04000000;
const unsigned long CP0_CAUSE_PCI_LENGTH                  = 0x00000001;

const unsigned long CP0_CAUSE_DC                          = 0x0000001B;
const unsigned long CP0_CAUSE_DC_POSITION                 = 0x0000001B;
const unsigned long CP0_CAUSE_DC_MASK                     = 0x08000000;
const unsigned long CP0_CAUSE_DC_LENGTH                   = 0x00000001;

const unsigned long CP0_CAUSE_CE                          = 0x0000001C;
const unsigned long CP0_CAUSE_CE_POSITION                 = 0x0000001C;
const unsigned long CP0_CAUSE_CE_MASK                     = 0x30000000;
const unsigned long CP0_CAUSE_CE_LENGTH                   = 0x00000002;

const unsigned long CP0_CAUSE_TI                          = 0x0000001E;
const unsigned long CP0_CAUSE_TI_POSITION                 = 0x0000001E;
const unsigned long CP0_CAUSE_TI_MASK                     = 0x40000000;
const unsigned long CP0_CAUSE_TI_LENGTH                   = 0x00000001;

const unsigned long CP0_CAUSE_BD                          = 0x0000001F;
const unsigned long CP0_CAUSE_BD_POSITION                 = 0x0000001F;
const unsigned long CP0_CAUSE_BD_MASK                     = 0x80000000;
const unsigned long CP0_CAUSE_BD_LENGTH                   = 0x00000001;

const unsigned long _EXCCODE_INT                          = 0x00;
const unsigned long _EXCCODE_ADEL                         = 0x04;
const unsigned long _EXCCODE_ADES                         = 0x05;
const unsigned long _EXCCODE_IBE                          = 0x06;
const unsigned long _EXCCODE_DBE                          = 0x07;
const unsigned long _EXCCODE_SYS                          = 0x08;
const unsigned long _EXCCODE_BP                           = 0x09;
const unsigned long _EXCCODE_RI                           = 0x0A;
const unsigned long _EXCCODE_CPU                          = 0x0B;
const unsigned long _EXCCODE_OV                           = 0x0C;
const unsigned long _EXCCODE_TR                           = 0x0D;
const unsigned long _EXCCODE_IS1                          = 0x10;
const unsigned long _EXCCODE_CEU                          = 0x11;
const unsigned long _EXCCODE_C2E                          = 0x12;

const unsigned long CP0_PRID_REVISION                     = 0x00000000;
const unsigned long CP0_PRID_REVISION_POSITION            = 0x00000000;
const unsigned long CP0_PRID_REVISION_MASK                = 0x000000FF;
const unsigned long CP0_PRID_REVISION_LENGTH              = 0x00000020;

const unsigned long CP0_PRID_PATCHREV                     = 0x00000000;
const unsigned long CP0_PRID_PATCHREV_POSITION            = 0x00000000;
const unsigned long CP0_PRID_PATCHREV_MASK                = 0x00000003;
const unsigned long CP0_PRID_PATCHREV_LENGTH              = 0x00000002;

const unsigned long CP0_PRID_MINORREV                     = 0x00000002;
const unsigned long CP0_PRID_MINORREV_POSITION            = 0x00000002;
const unsigned long CP0_PRID_MINORREV_MASK                = 0x0000001C;
const unsigned long CP0_PRID_MINORREV_LENGTH              = 0x00000003;

const unsigned long CP0_PRID_MAJORREV                     = 0x00000005;
const unsigned long CP0_PRID_MAJORREV_POSITION            = 0x00000005;
const unsigned long CP0_PRID_MAJORREV_MASK                = 0x000000E0;
const unsigned long CP0_PRID_MAJORREV_LENGTH              = 0x00000003;

const unsigned long CP0_PRID_PROCESSORID                  = 0x00000008;
const unsigned long CP0_PRID_PROCESSORID_POSITION         = 0x00000008;
const unsigned long CP0_PRID_PROCESSORID_MASK             = 0x0000FF00;
const unsigned long CP0_PRID_PROCESSORID_LENGTH           = 0x00000008;

const unsigned long CP0_PRID_COMPANYID                    = 0x00000010;
const unsigned long CP0_PRID_COMPANYID_POSITION           = 0x00000010;
const unsigned long CP0_PRID_COMPANYID_MASK               = 0x00FF0000;
const unsigned long CP0_PRID_COMPANYID_LENGTH             = 0x00000008;

const unsigned long CP0_EBASE_CPUNUM                      = 0x00000000;
const unsigned long CP0_EBASE_CPUNUM_POSTION              = 0x00000000;
const unsigned long CP0_EBASE_CPUNUM_MASK                 = 0x000003FF;
const unsigned long CP0_EBASE_CPUNUM_LENGTH               = 0x0000000A;

const unsigned long CP0_EBASE_EBASE_POSITION              = 0x0000000C;
const unsigned long CP0_EBASE_EBASE                       = 0x00000000;
const unsigned long CP0_EBASE_EBASE_MASK                  = 0x3FFFF000;
const unsigned long CP0_EBASE_EBASE_LENGTH                = 0x0000000E;

const unsigned long CP0_CONFIG_K0_POSITION                = 0x00000000;
const unsigned long CP0_CONFIG_K0                         = 0x00000000;
const unsigned long CP0_CONFIG_K0_MASK                    = 0x00000007;
const unsigned long CP0_CONFIG_K0_LENGTH                  = 0x00000003;

const unsigned long CP0_CONFIG_MT_POSITION                = 0x00000007;
const unsigned long CP0_CONFIG_MT                         = 0x00000007;
const unsigned long CP0_CONFIG_MT_MASK                    = 0x00000380;
const unsigned long CP0_CONFIG_MT_LENGTH                  = 0x00000003;

const unsigned long CP0_CONFIG_AR_POSITION                = 0x0000000A;
const unsigned long CP0_CONFIG_AR                         = 0x0000000A;
const unsigned long CP0_CONFIG_AR_MASK                    = 0x00001C00;
const unsigned long CP0_CONFIG_AR_LENGTH                  = 0x00000003;

const unsigned long CP0_CONFIG_AT_POSITION                = 0x0000000D;
const unsigned long CP0_CONFIG_AT                         = 0x0000000D;
const unsigned long CP0_CONFIG_AT_MASK                    = 0x00006000;
const unsigned long CP0_CONFIG_AT_LENGTH                  = 0x00000002;

const unsigned long CP0_CONFIG_BE_POSITION                = 0x0000000F;
const unsigned long CP0_CONFIG_BE                         = 0x0000000F;
const unsigned long CP0_CONFIG_BE_MASK                    = 0x00008000;
const unsigned long CP0_CONFIG_BE_LENGTH                  = 0x00000001;

const unsigned long CP0_CONFIG_DS_POSITION                = 0x00000010;
const unsigned long CP0_CONFIG_DS                         = 0x00000010;
const unsigned long CP0_CONFIG_DS_MASK                    = 0x00010000;
const unsigned long CP0_CONFIG_DS_LENGTH                  = 0x00000001;

const unsigned long CP0_CONFIG_MDU_POSITION               = 0x00000014;
const unsigned long CP0_CONFIG_MDU                        = 0x00000014;
const unsigned long CP0_CONFIG_MDU_MASK                   = 0x00100000;
const unsigned long CP0_CONFIG_MDU_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG_SB_POSITION                = 0x00000015;
const unsigned long CP0_CONFIG_SB                         = 0x00000015;
const unsigned long CP0_CONFIG_SB_MASK                    = 0x00200000;
const unsigned long CP0_CONFIG_SB_LENGTH                  = 0x00000001;

const unsigned long CP0_CONFIG_UDI_POSITION               = 0x00000016;
const unsigned long CP0_CONFIG_UDI                        = 0x00000016;
const unsigned long CP0_CONFIG_UDI_MASK                   = 0x00400000;
const unsigned long CP0_CONFIG_UDI_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG_KU_POSITION                = 0x00000019;
const unsigned long CP0_CONFIG_KU                         = 0x00000019;
const unsigned long CP0_CONFIG_KU_MASK                    = 0x70000000;
const unsigned long CP0_CONFIG_KU_LENGTH                  = 0x00000003;

const unsigned long CP0_CONFIG_M_POSITION                 = 0x0000001F;
const unsigned long CP0_CONFIG_M                          = 0x0000001F;
const unsigned long CP0_CONFIG_M_MASK                     = 0x80000000;
const unsigned long CP0_CONFIG_M_LENGTH                   = 0x00000001;

const unsigned long CP0_CONFIG1_FP_POSITION               = 0x00000000;
const unsigned long CP0_CONFIG1_FP                        = 0x00000000;
const unsigned long CP0_CONFIG1_FP_MASK                   = 0x00000001;
const unsigned long CP0_CONFIG1_FP_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_EP_POSITION               = 0x00000001;
const unsigned long CP0_CONFIG1_EP                        = 0x00000001;
const unsigned long CP0_CONFIG1_EP_MASK                   = 0x00000002;
const unsigned long CP0_CONFIG1_EP_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_CA_POSITION               = 0x00000002;
const unsigned long CP0_CONFIG1_CA                        = 0x00000002;
const unsigned long CP0_CONFIG1_CA_MASK                   = 0x00000004;
const unsigned long CP0_CONFIG1_CA_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_WR_POSITION               = 0x00000003;
const unsigned long CP0_CONFIG1_WR                        = 0x00000003;
const unsigned long CP0_CONFIG1_WR_MASK                   = 0x00000008;
const unsigned long CP0_CONFIG1_WR_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_PC_POSITION               = 0x00000004;
const unsigned long CP0_CONFIG1_PC                        = 0x00000004;
const unsigned long CP0_CONFIG1_PC_MASK                   = 0x00000010;
const unsigned long CP0_CONFIG1_PC_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_MD_POSITION               = 0x00000005;
const unsigned long CP0_CONFIG1_MD                        = 0x00000005;
const unsigned long CP0_CONFIG1_MD_MASK                   = 0x00000020;
const unsigned long CP0_CONFIG1_MD_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_C2_POSITION               = 0x00000006;
const unsigned long CP0_CONFIG1_C2                        = 0x00000006;
const unsigned long CP0_CONFIG1_C2_MASK                   = 0x00000040;
const unsigned long CP0_CONFIG1_C2_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG1_DA_POSITION               = 0x00000007;
const unsigned long CP0_CONFIG1_DA                        = 0x00000007;
const unsigned long CP0_CONFIG1_DA_MASK                   = 0x00000380;
const unsigned long CP0_CONFIG1_DA_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_DL_POSITION               = 0x0000000A;
const unsigned long CP0_CONFIG1_DL                        = 0x0000000A;
const unsigned long CP0_CONFIG1_DL_MASK                   = 0x00001C00;
const unsigned long CP0_CONFIG1_DL_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_DS_POSITION               = 0x0000000D;
const unsigned long CP0_CONFIG1_DS                        = 0x0000000D;
const unsigned long CP0_CONFIG1_DS_MASK                   = 0x0000E000;
const unsigned long CP0_CONFIG1_DS_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_IA_POSITION               = 0x00000010;
const unsigned long CP0_CONFIG1_IA                        = 0x00000010;
const unsigned long CP0_CONFIG1_IA_MASK                   = 0x00070000;
const unsigned long CP0_CONFIG1_IA_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_IL_POSITION               = 0x00000013;
const unsigned long CP0_CONFIG1_IL                        = 0x00000013;
const unsigned long CP0_CONFIG1_IL_MASK                   = 0x00380000;
const unsigned long CP0_CONFIG1_IL_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_IS_POSITION               = 0x00000016;
const unsigned long CP0_CONFIG1_IS                        = 0x00000016;
const unsigned long CP0_CONFIG1_IS_MASK                   = 0x01C00000;
const unsigned long CP0_CONFIG1_IS_LENGTH                 = 0x00000003;

const unsigned long CP0_CONFIG1_MMUSIZE_POSITION          = 0x00000019;
const unsigned long CP0_CONFIG1_MMUSIZE                   = 0x00000019;
const unsigned long CP0_CONFIG1_MMUSIZE_MASK              = 0x7E000000;
const unsigned long CP0_CONFIG1_MMUSIZE_LENGTH            = 0x00000006;

const unsigned long CP0_CONFIG1_M_POSITION                = 0x0000001F;
const unsigned long CP0_CONFIG1_M                         = 0x0000001F;
const unsigned long CP0_CONFIG1_M_MASK                    = 0x80000000;
const unsigned long CP0_CONFIG1_M_LENGTH                  = 0x00000001;

const unsigned long CP0_CONFIG2_M_POSITION                = 0x0000001F;
const unsigned long CP0_CONFIG2_M                         = 0x0000001F;
const unsigned long CP0_CONFIG2_M_MASK                    = 0x80000000;
const unsigned long CP0_CONFIG2_M_LENGTH                  = 0x00000001;

const unsigned long CP0_CONFIG3_TL_POSITION               = 0x00000000;
const unsigned long CP0_CONFIG3_TL                        = 0x00000000;
const unsigned long CP0_CONFIG3_TL_MASK                   = 0x00000001;
const unsigned long CP0_CONFIG3_TL_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG3_SM_POSITION               = 0x00000001;
const unsigned long CP0_CONFIG3_SM                        = 0x00000001;
const unsigned long CP0_CONFIG3_SM_MASK                   = 0x00000002;
const unsigned long CP0_CONFIG3_SM_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG3_SP_POSITION               = 0x00000004;
const unsigned long CP0_CONFIG3_SP                        = 0x00000004;
const unsigned long CP0_CONFIG3_SP_MASK                   = 0x00000010;
const unsigned long CP0_CONFIG3_SP_LENGTH                 = 0x00000001;

const unsigned long CP0_CONFIG3_VINT_POSITION             = 0x00000005;
const unsigned long CP0_CONFIG3_VINT                      = 0x00000005;
const unsigned long CP0_CONFIG3_VINT_MASK                 = 0x00000020;
const unsigned long CP0_CONFIG3_VINT_LENGTH               = 0x00000001;

const unsigned long CP0_CONFIG3_VEIC_POSITION             = 0x00000006;
const unsigned long CP0_CONFIG3_VEIC                      = 0x00000006;
const unsigned long CP0_CONFIG3_VEIC_MASK                 = 0x00000040;
const unsigned long CP0_CONFIG3_VEIC_LENGTH               = 0x00000001;

const unsigned long CP0_CONFIG3_ITL_POSITION              = 0x00000008;
const unsigned long CP0_CONFIG3_ITL                       = 0x00000008;
const unsigned long CP0_CONFIG3_ITL_MASK                  = 0x00000100;
const unsigned long CP0_CONFIG3_ITL_LENGTH                = 0x00000001;

const unsigned long CP0_CONFIG3_M_POSITION                = 0x0000001F;
const unsigned long CP0_CONFIG3_M                         = 0x0000001F;
const unsigned long CP0_CONFIG3_M_MASK                    = 0x80000000;
const unsigned long CP0_CONFIG3_M_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG_DSS_POSITION                = 0x00000000;
const unsigned long CP0_DEBUG_DSS                         = 0x00000000;
const unsigned long CP0_DEBUG_DSS_MASK                    = 0x00000001;
const unsigned long CP0_DEBUG_DSS_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG_DBP_POSITION                = 0x00000001;
const unsigned long CP0_DEBUG_DBP                         = 0x00000001;
const unsigned long CP0_DEBUG_DBP_MASK                    = 0x00000002;
const unsigned long CP0_DEBUG_DBP_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG_DDBL_POSITION               = 0x00000002;
const unsigned long CP0_DEBUG_DDBL                        = 0x00000002;
const unsigned long CP0_DEBUG_DDBL_MASK                   = 0x00000004;
const unsigned long CP0_DEBUG_DDBL_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_DDBS_POSITION               = 0x00000003;
const unsigned long CP0_DEBUG_DDBS                        = 0x00000003;
const unsigned long CP0_DEBUG_DDBS_MASK                   = 0x00000008;
const unsigned long CP0_DEBUG_DDBS_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_DIB_POSITION                = 0x00000004;
const unsigned long CP0_DEBUG_DIB                         = 0x00000004;
const unsigned long CP0_DEBUG_DIB_MASK                    = 0x00000010;
const unsigned long CP0_DEBUG_DIB_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG_DINT_POSITION               = 0x00000005;
const unsigned long CP0_DEBUG_DINT                        = 0x00000005;
const unsigned long CP0_DEBUG_DINT_MASK                   = 0x00000020;
const unsigned long CP0_DEBUG_DINT_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_DIBIMPR_POSITION            = 0x00000006;
const unsigned long CP0_DEBUG_DIBIMPR                     = 0x00000006;
const unsigned long CP0_DEBUG_DIBIMPR_MASK                = 0x00000040;
const unsigned long CP0_DEBUG_DIBIMPR_LENGTH              = 0x00000001;

const unsigned long CP0_DEBUG_R_POSITION                  = 0x00000007;
const unsigned long CP0_DEBUG_R                           = 0x00000007;
const unsigned long CP0_DEBUG_R_MASK                      = 0x00000080;
const unsigned long CP0_DEBUG_R_LENGTH                    = 0x00000001;

const unsigned long CP0_DEBUG_SST_POSITION                = 0x00000008;
const unsigned long CP0_DEBUG_SST                         = 0x00000008;
const unsigned long CP0_DEBUG_SST_MASK                    = 0x00000100;
const unsigned long CP0_DEBUG_SST_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG_NOSST_POSITION              = 0x00000009;
const unsigned long CP0_DEBUG_NOSST                       = 0x00000009;
const unsigned long CP0_DEBUG_NOSST_MASK                  = 0x00000200;
const unsigned long CP0_DEBUG_NOSST_LENGTH                = 0x00000001;

const unsigned long CP0_DEBUG_DEXCCODE_POSITION           = 0x0000000A;
const unsigned long CP0_DEBUG_DEXCCODE                    = 0x0000000A;
const unsigned long CP0_DEBUG_DEXCCODE_MASK               = 0x00007C00;
const unsigned long CP0_DEBUG_DEXCCODE_LENGTH             = 0x00000005;

const unsigned long CP0_DEBUG_VER_POSITION                = 0x0000000F;
const unsigned long CP0_DEBUG_VER                         = 0x0000000F;
const unsigned long CP0_DEBUG_VER_MASK                    = 0x00038000;
const unsigned long CP0_DEBUG_VER_LENGTH                  = 0x00000003;

const unsigned long CP0_DEBUG_DDBLIMPR_POSITION           = 0x00000012;
const unsigned long CP0_DEBUG_DDBLIMPR                    = 0x00000012;
const unsigned long CP0_DEBUG_DDBLIMPR_MASK               = 0x00040000;
const unsigned long CP0_DEBUG_DDBLIMPR_LENGTH             = 0x00000001;

const unsigned long CP0_DEBUG_DDBSIMPR_POSITION           = 0x00000013;
const unsigned long CP0_DEBUG_DDBSIMPR                    = 0x00000013;
const unsigned long CP0_DEBUG_DDBSIMPR_MASK               = 0x00080000;
const unsigned long CP0_DEBUG_DDBSIMPR_LENGTH             = 0x00000001;

const unsigned long CP0_DEBUG_IEXI_POSITION               = 0x00000014;
const unsigned long CP0_DEBUG_IEXI                        = 0x00000014;
const unsigned long CP0_DEBUG_IEXI_MASK                   = 0x00100000;
const unsigned long CP0_DEBUG_IEXI_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_DBUSEP_POSITION             = 0x00000015;
const unsigned long CP0_DEBUG_DBUSEP                      = 0x00000015;
const unsigned long CP0_DEBUG_DBUSEP_MASK                 = 0x00200000;
const unsigned long CP0_DEBUG_DBUSEP_LENGTH               = 0x00000001;

const unsigned long CP0_DEBUG_CACHEEP_POSITION            = 0x00000016;
const unsigned long CP0_DEBUG_CACHEEP                     = 0x00000016;
const unsigned long CP0_DEBUG_CACHEEP_MASK                = 0x00400000;
const unsigned long CP0_DEBUG_CACHEEP_LENGTH              = 0x00000001;

const unsigned long CP0_DEBUG_MCHECKP_POSITION            = 0x00000017;
const unsigned long CP0_DEBUG_MCHECKP                     = 0x00000017;
const unsigned long CP0_DEBUG_MCHECKP_MASK                = 0x00800000;
const unsigned long CP0_DEBUG_MCHECKP_LENGTH              = 0x00000001;

const unsigned long CP0_DEBUG_IBUSEP_POSITION             = 0x00000018;
const unsigned long CP0_DEBUG_IBUSEP                      = 0x00000018;
const unsigned long CP0_DEBUG_IBUSEP_MASK                 = 0x01000000;
const unsigned long CP0_DEBUG_IBUSEP_LENGTH               = 0x00000001;

const unsigned long CP0_DEBUG_COUNTDM                     = 0x00000019;
const unsigned long CP0_DEBUG_COUNTDM_POSITION            = 0x00000019;
const unsigned long CP0_DEBUG_COUNTDM_MASK                = 0x02000000;
const unsigned long CP0_DEBUG_COUNTDM_LENGTH              = 0x00000001;

const unsigned long CP0_DEBUG_HALT                        = 0x0000001A;
const unsigned long CP0_DEBUG_HALT_POSITION               = 0x0000001A;
const unsigned long CP0_DEBUG_HALT_MASK                   = 0x04000000;
const unsigned long CP0_DEBUG_HALT_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_DOZE_POSITION               = 0x0000001B;
const unsigned long CP0_DEBUG_DOZE                        = 0x0000001B;
const unsigned long CP0_DEBUG_DOZE_MASK                   = 0x08000000;
const unsigned long CP0_DEBUG_DOZE_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_LSNM_POSITION               = 0x0000001C;
const unsigned long CP0_DEBUG_LSNM                        = 0x0000001C;
const unsigned long CP0_DEBUG_LSNM_MASK                   = 0x10000000;
const unsigned long CP0_DEBUG_LSNM_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG_NODCR_POSITION              = 0x0000001D;
const unsigned long CP0_DEBUG_NODCR                       = 0x0000001D;
const unsigned long CP0_DEBUG_NODCR_MASK                  = 0x20000000;
const unsigned long CP0_DEBUG_NODCR_LENGTH                = 0x00000001;

const unsigned long CP0_DEBUG_DM_POSITION                 = 0x0000001E;
const unsigned long CP0_DEBUG_DM                          = 0x0000001E;
const unsigned long CP0_DEBUG_DM_MASK                     = 0x40000000;
const unsigned long CP0_DEBUG_DM_LENGTH                   = 0x00000001;

const unsigned long CP0_DEBUG_DBD_POSITION                = 0x0000001F;
const unsigned long CP0_DEBUG_DBD                         = 0x0000001F;
const unsigned long CP0_DEBUG_DBD_MASK                    = 0x80000000;
const unsigned long CP0_DEBUG_DBD_LENGTH                  = 0x00000001;

const unsigned long CP0_TRACECONTROL_ON_POSITION          = 0x00000000;
const unsigned long CP0_TRACECONTROL_ON                   = 0x00000000;
const unsigned long CP0_TRACECONTROL_ON_MASK              = 0x00000001;
const unsigned long CP0_TRACECONTROL_ON_LENGTH            = 0x00000001;

const unsigned long CP0_TRACECONTROL_MODE_POSITION        = 0x00000001;
const unsigned long CP0_TRACECONTROL_MODE                 = 0x00000001;
const unsigned long CP0_TRACECONTROL_MODE_MASK            = 0x0000000E;
const unsigned long CP0_TRACECONTROL_MODE_LENGTH          = 0x00000003;

const unsigned long CP0_TRACECONTROL_G_POSITION           = 0x00000004;
const unsigned long CP0_TRACECONTROL_G                    = 0x00000004;
const unsigned long CP0_TRACECONTROL_G_MASK               = 0x00000010;
const unsigned long CP0_TRACECONTROL_G_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_ASID_POSITION        = 0x00000005;
const unsigned long CP0_TRACECONTROL_ASID                 = 0x00000005;
const unsigned long CP0_TRACECONTROL_ASID_MASK            = 0x00001FE0;
const unsigned long CP0_TRACECONTROL_ASID_LENGTH          = 0x00000008;

const unsigned long CP0_TRACECONTROL_U_POSITION           = 0x00000015;
const unsigned long CP0_TRACECONTROL_U                    = 0x00000015;
const unsigned long CP0_TRACECONTROL_U_MASK               = 0x00200000;
const unsigned long CP0_TRACECONTROL_U_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_0_POSITION           = 0x00000016;
const unsigned long CP0_TRACECONTROL_0                    = 0x00000016;
const unsigned long CP0_TRACECONTROL_0_MASK               = 0x00400000;
const unsigned long CP0_TRACECONTROL_0_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_K_POSITION           = 0x00000017;
const unsigned long CP0_TRACECONTROL_K                    = 0x00000017;
const unsigned long CP0_TRACECONTROL_K_MASK               = 0x00800000;
const unsigned long CP0_TRACECONTROL_K_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_E_POSITION           = 0x00000018;
const unsigned long CP0_TRACECONTROL_E                    = 0x00000018;
const unsigned long CP0_TRACECONTROL_E_MASK               = 0x01000000;
const unsigned long CP0_TRACECONTROL_E_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_D_POSITION           = 0x00000019;
const unsigned long CP0_TRACECONTROL_D                    = 0x00000019;
const unsigned long CP0_TRACECONTROL_D_MASK               = 0x02000000;
const unsigned long CP0_TRACECONTROL_D_LENGTH             = 0x00000001;

const unsigned long CP0_TRACECONTROL_IO_POSITION          = 0x0000001A;
const unsigned long CP0_TRACECONTROL_IO                   = 0x0000001A;
const unsigned long CP0_TRACECONTROL_IO_MASK              = 0x04000000;
const unsigned long CP0_TRACECONTROL_IO_LENGTH            = 0x00000001;

const unsigned long CP0_TRACECONTROL_TB_POSITION          = 0x0000001B;
const unsigned long CP0_TRACECONTROL_TB                   = 0x0000001B;
const unsigned long CP0_TRACECONTROL_TB_MASK              = 0x08000000;
const unsigned long CP0_TRACECONTROL_TB_LENGTH            = 0x00000001;

const unsigned long CP0_TRACECONTROL_UT_POSITION          = 0x0000001E;
const unsigned long CP0_TRACECONTROL_UT                   = 0x0000001E;
const unsigned long CP0_TRACECONTROL_UT_MASK              = 0x40000000;
const unsigned long CP0_TRACECONTROL_UT_LENGTH            = 0x00000001;

const unsigned long CP0_TRACECONTROL_TS_POSITION          = 0x0000001F;
const unsigned long CP0_TRACECONTROL_TS                   = 0x0000001F;
const unsigned long CP0_TRACECONTROL_TS_MASK              = 0x80000000;
const unsigned long CP0_TRACECONTROL_TS_LENGTH            = 0x00000001;

const unsigned long CP0_TRACECONTROL2_SYP_POSITION        = 0x00000000;
const unsigned long CP0_TRACECONTROL2_SYP                 = 0x00000000;
const unsigned long CP0_TRACECONTROL2_SYP_MASK            = 0x00000007;
const unsigned long CP0_TRACECONTROL2_SYP_LENGTH          = 0x00000003;

const unsigned long CP0_TRACECONTROL2_TBU_POSITION        = 0x00000003;
const unsigned long CP0_TRACECONTROL2_TBU                 = 0x00000003;
const unsigned long CP0_TRACECONTROL2_TBU_MASK            = 0x00000008;
const unsigned long CP0_TRACECONTROL2_TBU_LENGTH          = 0x00000001;

const unsigned long CP0_TRACECONTROL2_TBI_POSITION        = 0x00000004;
const unsigned long CP0_TRACECONTROL2_TBI                 = 0x00000004;
const unsigned long CP0_TRACECONTROL2_TBI_MASK            = 0x00000010;
const unsigned long CP0_TRACECONTROL2_TBI_LENGTH          = 0x00000001;

const unsigned long CP0_TRACECONTROL2_VALIDMODES_POSITION = 0x00000005;
const unsigned long CP0_TRACECONTROL2_VALIDMODES          = 0x00000005;
const unsigned long CP0_TRACECONTROL2_VALIDMODES_MASK     = 0x00000060;
const unsigned long CP0_TRACECONTROL2_VALIDMODES_LENGTH   = 0x00000002;

const unsigned long CP0_USERTRACEDATA_DATA_POSITION       = 0x00000000;
const unsigned long CP0_USERTRACEDATA_DATA                = 0x00000000;
const unsigned long CP0_USERTRACEDATA_DATA_MASK           = 0xFFFFFFFF;
const unsigned long CP0_USERTRACEDATA_DATA_LENGTH         = 0x00000020;

const unsigned long CP0_TRACEBPC_IBPON_POSITION           = 0x00000000;
const unsigned long CP0_TRACEBPC_IBPON                    = 0x00000000;
const unsigned long CP0_TRACEBPC_IBPON_MASK               = 0x0000003F;
const unsigned long CP0_TRACEBPC_IBPON_LENGTH             = 0x00000006;

const unsigned long CP0_TRACEBPC_IE_POSITION              = 0x0000000F;
const unsigned long CP0_TRACEBPC_IE                       = 0x0000000F;
const unsigned long CP0_TRACEBPC_IE_MASK                  = 0x00008000;
const unsigned long CP0_TRACEBPC_IE_LENGTH                = 0x00000001;

const unsigned long CP0_TRACEBPC_DBPON_POSITION           = 0x00000010;
const unsigned long CP0_TRACEBPC_DBPON                    = 0x00000010;
const unsigned long CP0_TRACEBPC_DBPON_MASK               = 0x00030000;
const unsigned long CP0_TRACEBPC_DBPON_LENGTH             = 0x00000002;

const unsigned long CP0_TRACEBPC_DE                       = 0x0000001F;
const unsigned long CP0_TRACEBPC_DE_POSITION              = 0x0000001F;
const unsigned long CP0_TRACEBPC_DE_MASK                  = 0x80000000;
const unsigned long CP0_TRACEBPC_DE_LENGTH                = 0x00000001;

const unsigned long CP0_DEBUG2_PACO                       = 0x00000000;
const unsigned long CP0_DEBUG2_PACO_POSITION              = 0x00000000;
const unsigned long CP0_DEBUG2_PACO_MASK                  = 0x00000001;
const unsigned long CP0_DEBUG2_PACO_LENGTH                = 0x00000001;

const unsigned long CP0_DEBUG2_TUP                        = 0x00000001;
const unsigned long CP0_DEBUG2_TUP_POSITION               = 0x00000001;
const unsigned long CP0_DEBUG2_TUP_MASK                   = 0x00000002;
const unsigned long CP0_DEBUG2_TUP_LENGTH                 = 0x00000001;

const unsigned long CP0_DEBUG2_DQ                         = 0x00000002;
const unsigned long CP0_DEBUG2_DQ_POSITION                = 0x00000002;
const unsigned long CP0_DEBUG2_DQ_MASK                    = 0x00000004;
const unsigned long CP0_DEBUG2_DQ_LENGTH                  = 0x00000001;

const unsigned long CP0_DEBUG2_PRM                        = 0x00000003;
const unsigned long CP0_DEBUG2_PRM_POSITION               = 0x00000003;
const unsigned long CP0_DEBUG2_PRM_MASK                   = 0x00000008;
const unsigned long CP0_DEBUG2_PRM_LENGTH                 = 0x00000001;
