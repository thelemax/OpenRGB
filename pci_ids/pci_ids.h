﻿/*---------------------------------------------------------*\
| PCI Vendor IDs                                            |
\*---------------------------------------------------------*/
#define AMD_VEN                                         0x1022
#define AMD_GPU_VEN                                     0x1002
#define INTEL_VEN                                       0x8086
#define NVIDIA_VEN                                      0x10DE

/*-----------------------------------------------------*\
| AMD Device IDs                                        |
\*-----------------------------------------------------*/
#define AMD_FCH_SMBUS_DEV                               0x790B

/*-----------------------------------------------------*\
| AMD GPU Device IDs                                    |
|
| Note: AMD uses the same PCI IDs for different SKUs    |
| based on the same silicon, so we use internal code    |
| names here instead of referring to specific products. |
\*-----------------------------------------------------*/
#define AMD_POLARIS_DEV                                 0x67DF
#define AMD_POLARIS11                                   0x67FF
#define AMD_POLARIS20XL_DEV                             0x6FDF
#define AMD_VEGA10_DEV                                  0x687F
#define AMD_NAVI10_DEV                                  0x731F
#define AMD_NAVI14_DEV                                  0x7340
#define AMD_NAVI21_DEV1                                 0x73BF
#define AMD_NAVI21_DEV2                                 0x73AF
#define AMD_NAVI21_DEV3                                 0x73A5
#define AMD_NAVI22_DEV                                  0x73DF
#define AMD_NAVI23_DEV                                  0x73FF

/*-----------------------------------------------------*\
| Intel Device IDs                                      |
\*-----------------------------------------------------*/
#define INTEL_ICH10_SMBUS_DEV                           0x3A30
#define INTEL_SUNRISE_POINT_H_SMBUS_DEV                 0xA123
#define INTEL_KABY_LAKE_H_SMBUS_DEV                     0xA2A3
#define INTEL_CANNON_LAKE_H_SMBUS_DEV                   0xA323
#define INTEL_COMET_LAKE_H_SMBUS_DEV                    0x06A3
#define INTEL_COMET_LAKE_V_SMBUS_DEV                    0xA3A3
#define INTEL_TIGER_LAKE_SMBUS_DEV                      0x43A3
#define INTEL_ALDER_LAKE_SMBUS_DEV                      0x7AA3

/*-----------------------------------------------------*\
| nVidia Device IDs                                     |
\*-----------------------------------------------------*/
#define NVIDIA_GTX1050_DEV                              0x1C81
#define NVIDIA_GTX1050TI_DEV                            0x1C82
#define NVIDIA_GTX1060_DEV                              0x1C03
#define NVIDIA_GTX1070_DEV                              0x1B81
#define NVIDIA_GTX1070TI_DEV                            0x1B82
#define NVIDIA_GTX1080_DEV                              0x1B80
#define NVIDIA_GTX1080TI_DEV                            0x1B06
#define NVIDIA_GTX1650_DEV                              0x1F82
#define NVIDIA_GTX1650S_DEV                             0x2187
#define NVIDIA_GTX1660_DEV                              0x2184
#define NVIDIA_GTX1660TI_DEV                            0x2182
#define NVIDIA_GTX1660S_DEV                             0x21C4
#define NVIDIA_RTX2060_TU104_DEV                        0x1E89
#define NVIDIA_RTX2060_TU106_DEV                        0x1F08
#define NVIDIA_RTX2060S_DEV                             0x1F47
#define NVIDIA_RTX2060S_OC_DEV                          0x1F06
#define NVIDIA_RTX2070_DEV                              0x1F02
#define NVIDIA_RTX2070_OC_DEV                           0x1F07
#define NVIDIA_RTX2070S_DEV                             0x1EC7
#define NVIDIA_RTX2070S_OC_DEV                          0x1E84
#define NVIDIA_RTX2080_DEV                              0x1E82
#define NVIDIA_RTX2080_A_DEV                            0x1E87
#define NVIDIA_RTX2080S_DEV                             0x1E81
#define NVIDIA_RTX2080TI_DEV                            0x1E04
#define NVIDIA_RTX2080TI_A_DEV                          0x1E07
#define NVIDIA_RTX3050_DEV                              0x2507
#define NVIDIA_RTX3060_DEV                              0x2503
#define NVIDIA_RTX3060_GA104_DEV                        0x2487
#define NVIDIA_RTX3060_LHR_DEV                          0x2504
#define NVIDIA_RTX3060TI_DEV                            0x2486
#define NVIDIA_RTX3060TI_LHR_DEV                        0x2489
#define NVIDIA_RTX3060TI_V1_LHR_DEV                     0x2414
#define NVIDIA_RTX3070_DEV                              0x2484
#define NVIDIA_RTX3070_LHR_DEV                          0x2488
#define NVIDIA_RTX3070TI_DEV                            0x2482
#define NVIDIA_RTX3080_DEV                              0x2206
#define NVIDIA_RTX3080_LHR_DEV                          0x2216
#define NVIDIA_RTX3080_12G_LHR_DEV                      0x220A
#define NVIDIA_RTX3080TI_DEV                            0x2208
#define NVIDIA_RTX3090_DEV                              0x2204
#define NVIDIA_RTX3090TI_DEV                            0x2203
#define NVIDIA_RTX4090_DEV                              0x2684

/*-----------------------------------------------------*\
| nVidia Sub-Device IDs                                 |
\*-----------------------------------------------------*/
#define NVIDIA_RTX2070_FE_SUPER_SUB_DEV                 0x13AA
#define NVIDIA_RTX3080_FE_SUB_DEV                       0x1467
#define NVIDIA_RTX3080TI_FE_SUB_DEV                     0x1535
#define NVIDIA_RTX3090_FE_SUB_DEV                       0x147D
#define NVIDIA_RTX3090TI_FE_SUB_DEV                     0x1618

/*---------------------------------------------------------*\
| PCI Sub-Vendor IDs                                        |
\*---------------------------------------------------------*/
#define ASROCK_SUB_VEN                                  0x1849
#define ASUS_SUB_VEN                                    0x1043
#define COLORFUL_SUB_VEN                                0x7377
#define EVGA_SUB_VEN                                    0x3842
#define GALAX_SUB_VEN                                   0x1B4C
#define GAINWARD_SUB_VEN                                0x10B0
#define GIGABYTE_SUB_VEN                                0x1458
#define MSI_SUB_VEN                                     0x1462
#define NVIDIA_SUB_VEN                                  0x10DE
#define PNY_SUB_VEN                                     0x196E
#define PALIT_SUB_VEN                                   0x1569
#define SAPPHIRE_SUB_VEN                                0x1DA2
#define SAPPHIRE_LEGACY_SUB_VEN                         0x174B
#define ZOTAC_SUB_VEN                                   0x19DA

/*-----------------------------------------------------*\
| ASUS Sub-Device IDs                                   |
\*-----------------------------------------------------*/
#define ASUS_AREZ_STRIX_VEGA56_08G_GAMING               0x0555
#define ASUS_VEGA64_STRIX                               0x04C4
#define ASUS_RX5600XT_STRIX_O6G_GAMING                  0x04EC
#define ASUS_RX5700XT_STRIX_GAMING_OC                   0x04E2
#define ASUS_RX6800_TUF_GAMING_OC                       0x04F6
#define ASUS_RX470_STRIX_O4G_GAMING                     0x04B0
#define ASUS_RX480_STRIX_GAMING_OC                      0x04FB
#define ASUS_RX560_STRIX_4G_GAMING                      0x04BC
#define ASUS_RX570_STRIX_O4G_GAMING_OC                  0x04C2
#define ASUS_RX580_STRIX_GAMING_OC                      0x0517
#define ASUS_RX580_STRIX_GAMING_TOP                     0x0519
#define ASUS_GTX1050_STRIX_O2G_GAMING                   0x85D8
#define ASUS_ROG_STRIX_GTX1050TI_4G_GAMING              0x8611
#define ASUS_ROG_STRIX_GTX1050TI_O4G_GAMING             0x85CD
#define ASUS_ROG_STRIX_GTX1050TI_O4G_GAMING_2           0x85D1
#define ASUS_GTX1060_STRIX_6G_GAMING                    0x85A4
#define ASUS_GTX1060_STRIX                              0x85AC
#define ASUS_GTX1070_STRIX_GAMING                       0x8598
#define ASUS_GTX1070_STRIX_OC                           0x8599
#define ASUS_ROG_STRIX_GTX1070TI_8G_GAMING              0x861D
#define ASUS_ROG_STRIX_GTX1070TI_A8G_GAMING             0x861E
#define ASUS_GTX1080_STRIX                              0x8592
#define ASUS_ROG_STRIX_GTX1080_A8G_GAMING               0x85AA
#define ASUS_ROG_STRIX_GTX1080_O8G_GAMING               0x85F9
#define ASUS_ROG_STRIX_GTX1080_O8G_11GBPS               0x85E8
#define ASUS_ROG_STRIX_GTX1080TI_O11G_GAMING            0x85EA
#define ASUS_ROG_STRIX_GTX1080TI_O11G_GAMING_A02        0x85E4
#define ASUS_ROG_STRIX_GTX1080TI_GAMING                 0x85EB
#define ASUS_ROG_STRIX_GTX1080TI_11G_GAMING             0x85F1
#define ASUS_ROG_STRIX_GTX1650S_OC                      0x874F
#define ASUS_ROG_STRIX_GTX1660S_O6G_GAMING              0x8752
#define ASUS_ROG_GTX1660TI_OC                           0x86A5
#define ASUS_ROG_STRIX_RTX2060_EVO_GAMING               0x86D3
#define ASUS_ROG_STRIX_RTX2060_O6G_GAMING               0x868E
#define ASUS_ROG_STRIX_RTX2060_O6G_GAMING_86D2          0x86D2
#define ASUS_ROG_STRIX_RTX2060_O6G_EVO_GAMING           0x8775
#define ASUS_ROG_STRIX_RTX2060S_A8G_EVO_GAMING          0x8703
#define ASUS_ROG_STRIX_RTX2060S_8G_GAMING               0x8730
#define ASUS_ROG_STRIX_RTX2060S_O8G_GAMING              0x86FB
#define ASUS_ROG_STRIX_RTX2060S_A8G_GAMING              0x86FC
#define ASUS_ROG_STRIX_RTX2070_A8G_GAMING               0x8671
#define ASUS_ROG_STRIX_RTX2070_O8G_GAMING               0x8670
#define ASUS_ROG_STRIX_RTX2070S_A8G_GAMING              0x8728
#define ASUS_ROG_STRIX_RTX2070S_O8G_GAMING_8729         0x8729
#define ASUS_ROG_STRIX_RTX2070S_A8G_GAMING_8706         0x8706
#define ASUS_ROG_STRIX_RTX2070S_8G_GAMING_8707          0x8707
#define ASUS_ROG_STRIX_RTX2070S_A8G_GAMING_86FF         0x86FF
#define ASUS_ROG_STRIX_RTX2070S_O8G_GAMING              0x8727
#define ASUS_ROG_STRIX_RTX2080_O8G_GAMING               0x865F
#define ASUS_ROG_STRIX_RTX2080_O8G_V2_GAMING            0x8661
#define ASUS_ROG_STRIX_RTX2080_8G_GAMING                0x867F
#define ASUS_ROG_STRIX_RTX2080S_A8G_GAMING              0x8712
#define ASUS_ROG_STRIX_RTX2080S_O8G_GAMING              0x8711
#define ASUS_ROG_STRIX_RTX2080S_O8G_WHITE               0x876B
#define ASUS_ROG_STRIX_RTX2080TI_11G_GAMING             0x8687
#define ASUS_ROG_STRIX_RTX2080TI_O11G_GAMING            0x866A
#define ASUS_ROG_STRIX_RTX2080TI_A11G_GAMING            0x866B
#define ASUS_KO_RTX_3060_OC_O12G_GAMING                 0x87FB
#define ASUS_ROG_STRIX_RTX_3060_O12G_GAMING             0x87F3
#define ASUS_TUF_RTX_3060_O12G_GAMING                   0x87F5
#define ASUS_TUF_RTX_3060_O12G_V2_GAMING                0x8865
#define ASUS_TUF_RTX_3060_O12G_LHR_GAMING               0x8816
#define ASUS_ROG_STRIX_RTX_3060_O12G_LHR_GAMING         0x8818
#define ASUS_KO_RTX_3060_O12G_V2_GAMING                 0x8821
#define ASUS_KO_RTX3060TI_O8G_V2_GAMING                 0x883E
#define ASUS_TUF_RTX_3060_TI_O8G_OC                     0x87C6
#define ASUS_ROG_STRIX_3060_TI_O8G_OC                   0x87BA
#define ASUS_ROG_STRIX_RTX_3060TI_O8G_V2_GAMING         0x8834
#define ASUS_TUF_RTX_3060_TI_O8G_OC_V2                  0x8827
#define ASUS_ROG_STRIX_RTX_3070_OC                      0x87B8
#define ASUS_ROG_STRIX_RTX_3070_O8G_GAMING              0x87B9
#define ASUS_ROG_STRIX_RTX_3070_O8G_WHITE               0x87E0
#define ASUS_ROG_STRIX_RTX_3070_O8G_V2_GAMING           0x882C
#define ASUS_ROG_STRIX_RTX_3070_O8G_V2_WHITE            0x8832
#define ASUS_KO_RTX_3070_O8G_GAMING                     0x8842
#define ASUS_TUF_RTX_3070_O8G_GAMING                    0x87C1
#define ASUS_TUF_RTX_3070_O8G_V2_GAMING                 0x8825
#define ASUS_ROG_STRIX_RTX_3070TI_O8G_GAMING            0x880E
#define ASUS_TUF_RTX_3070TI_O8G_V2_GAMING               0x8812
#define ASUS_TUF_RTX_3070TI_O8G_GAMING                  0x8813
#define ASUS_ROG_STRIX_RTX_3080_10G_GAMING              0x87AA
#define ASUS_ROG_STRIX_RTX_3080_O10G_GAMING             0x87AC
#define ASUS_ROG_STRIX_RTX_3080_O10G_WHITE              0x87D1
#define ASUS_ROG_STRIX_RTX_3080_O10G_V2_WHITE           0x8830
#define ASUS_ROG_STRIX_RTX_3080_O10G_V2_GAMING          0x882E
#define ASUS_TUF_RTX_3080_10G_GAMING_PD                 0x87C4
#define ASUS_TUF_RTX_3080_10G_GAMING                    0x87B2
#define ASUS_TUF_RTX_3080_O10G_OC                       0x87B0
#define ASUS_TUF_RTX_3080_O10G_V2_GAMING_8822           0x8822
#define ASUS_TUF_RTX_3080_O10G_V2_GAMING                0x8823
#define ASUS_TUF_RTX_3080_O12G_GAMING                   0x886E
#define ASUS_ROG_STRIX_RTX_3080_10G_V2_GAMING           0x882F
#define ASUS_ROG_STRIX_RTX_3080_12G                     0x886C
#define ASUS_ROG_STRIX_RTX_3080_O12G_OC                 0x886B
#define ASUS_TUF_RTX_3080TI_12G_GAMING                  0x8803
#define ASUS_TUF_RTX_3080TI_O12G_GAMING                 0x8802
#define ASUS_ROG_STRIX_RTX_3080TI_O12G_GAMING           0x8807
#define ASUS_ROG_STRIX_RTX_3080TI_O12G_GAMING_LC        0x8809
#define ASUS_ROG_STRIX_RTX_3090_24G_GAMING              0x87AD
#define ASUS_ROG_STRIX_RTX_3090_O24G_GAMING             0x87AF
#define ASUS_ROG_STRIX_RTX_3090_O24G_GAMING_WHITE       0x87D9
#define ASUS_TUF_RTX_3090_O24G                          0x87B5
#define ASUS_TUF_RTX_3090_O24G_OC                       0x87B3
#define ASUS_TUF_RX_6700XT_O12G_GAMING                  0x05C9
#define ASUS_TUF_RX_6800XT_O16G_GAMING                  0x04F2
#define ASUS_TUF_RX_6900XT_O16G_GAMING                  0x04FA
#define ASUS_TUF_RTX_4090_O24G_OC_GAMING                0x889A
#define ASUS_TUF_RTX_4090_O24G_GAMING                   0x889B

/*-----------------------------------------------------*\
| Colorful Sub-Device IDs                               |
\*-----------------------------------------------------*/
#define COLORFUL_IGAME_RTX_3060_ULTRAW_OC_12G           0x150A
#define COLORFUL_IGAME_RTX_3070_ADVANCED_OCV            0x140A
#define COLORFUL_IGAME_RTX_3070_ADVANCED_OCV2           0x1401

/*-----------------------------------------------------*\
| EVGA Sub-Device IDs                                   |
\*-----------------------------------------------------*/
#define EVGA_GTX1070_FTW_DT_GAMING_SUB_DEV              0x6274
#define EVGA_GTX1070_FTW_SUB_DEV                        0x6276
#define EVGA_GTX1070_FTW_HYBRID_SUB_DEV                 0x6278
#define EVGA_GTX1070_FTW2_SUB_DEV                       0x6676
#define EVGA_GTX1070TI_FTW2_SUB_DEV                     0x6775
#define EVGA_GTX1080_FTW_SUB_DEV                        0x6286
#define EVGA_GTX1080_FTW2_SUB_DEV                       0x6686
#define EVGA_GTX1080_FTW2_11G_SUB_DEV                   0x6687
#define EVGA_GTX1080TI_SC2_GAMING_SUB_DEV               0x6593
#define EVGA_GTX1080TI_FTW3_SUB_DEV                     0x6696
#define EVGA_GTX1080TI_FTW3_HYBRID_SUB_DEV              0x6698
#define EVGA_GTX1080TI_KINGPIN_SUB_DEV                  0x6798
#define EVGA_RTX2070_XC_GAMING_SUB_DEV                  0x2172
#define EVGA_RTX2070_XC_OC_SUB_DEV                      0x2173
#define EVGA_RTX2070S_BLACK_SUB_DEV                     0x3071
#define EVGA_RTX2070S_XC_ULTRA_SUB_DEV                  0x3173
#define EVGA_RTX2070S_XC_ULTRA_PLUS_SUB_DEV             0x3175
#define EVGA_RTX2070S_FTW3_ULTRA_OC_SUB_DEV             0x3277
#define EVGA_RTX2070S_FTW3_ULTRA_PLUS_OC_SUB_DEV        0x3377
#define EVGA_RTX2080_BLACK_SUB_DEV                      0x2081
#define EVGA_RTX2080_XC_BLACK_SUB_DEV                   0x2082
#define EVGA_RTX2080_XC_GAMING_SUB_DEV                  0x2182
#define EVGA_RTX2080_XC_ULTRA_GAMING_SUB_DEV            0x2183
#define EVGA_RTX2080S_XC_GAMING_SUB_DEV                 0x3182
#define EVGA_RTX2080S_XC_ULTRA_SUB_DEV                  0x3183
#define EVGA_RTX2080S_FTW3_ULTRA_SUB_DEV                0x3287
#define EVGA_RTX2080S_FTW3_HYBRID_OC_SUB_DEV            0x3288
#define EVGA_RTX2080S_FTW3_ULTRA_HC_SUB_DEV             0x3289
#define EVGA_RTX2080TI_BLACK_SUB_DEV                    0x2281
#define EVGA_RTX2080TI_XC_ULTRA_GAMING_SUB_DEV          0x2383
#define EVGA_RTX2080TI_XC_HYBRID_GAMING_SUB_DEV         0x2384
#define EVGA_RTX2080TI_XC_HYDRO_COPPER_SUB_DEV          0x2389
#define EVGA_RTX2080TI_FTW3_ULTRA_SUB_DEV               0x2487
#define EVGA_RTX3060TI_FTW3_GAMING_SUB_DEV              0x3665
#define EVGA_RTX3060TI_FTW3_ULTRA_SUB_DEV               0x3667
#define EVGA_RTX3060TI_FTW3_ULTRA_KL_SUB_DEV            0x4667
#define EVGA_RTX3070_XC3_BLACK_SUB_DEV                  0x3751
#define EVGA_RTX3070_XC3_GAMING_SUB_DEV                 0x3753
#define EVGA_RTX3070_XC3_ULTRA_SUB_DEV                  0x3755
#define EVGA_RTX3070_XC3_ULTRA_LHR_SUB_DEV              0x4755
#define EVGA_RTX3070_FTW3_ULTRA_SUB_DEV                 0x3767
#define EVGA_RTX3070_FTW3_ULTRA_LHR_SUB_DEV             0x4767
#define EVGA_RTX3070TI_XC3_GAMING_SUB_DEV               0x3783
#define EVGA_RTX3070TI_XC3_ULTRA_SUB_DEV                0x3785
#define EVGA_RTX3070TI_XC3_ULTRA_V2_SUB_DEV             0x3485
#define EVGA_RTX3070TI_FTW3_ULTRA_SUB_DEV               0x3797
#define EVGA_RTX3070TI_FTW3_ULTRA_V2_SUB_DEV            0x3497
#define EVGA_RTX3080_XC3_BLACK_SUB_DEV                  0x3881
#define EVGA_RTX3080_XC3_BLACK_LHR_SUB_DEV              0x4881
#define EVGA_RTX3080_XC3_GAMING_SUB_DEV                 0x3883
#define EVGA_RTX3080_XC3_GAMING_LHR_SUB_DEV             0x4883
#define EVGA_RTX3080_XC3_ULTRA_SUB_DEV                  0x3885
#define EVGA_RTX3080_XC3_ULTRA_LHR_SUB_DEV              0x4885
#define EVGA_RTX3080_XC3_ULTRA_HYBRID_SUB_DEV           0x3888
#define EVGA_RTX3080_XC3_ULTRA_HYBRID_LHR_SUB_DEV       0x4888
#define EVGA_RTX3080_XC3_ULTRA_HC_SUB_DEV               0x3889
#define EVGA_RTX3080_FTW3_GAMING_SUB_DEV                0x3895
#define EVGA_RTX3080_FTW3_ULTRA_SUB_DEV                 0x3897
#define EVGA_RTX3080_FTW3_ULTRA_12G_SUB_DEV             0x4877
#define EVGA_RTX3080_FTW3_ULTRA_LHR_SUB_DEV             0x4897
#define EVGA_RTX3080_FTW3_ULTRA_LHR_V2_SUB_DEV          0x4297
#define EVGA_RTX3080_FTW3_ULTRA_HYBRID_SUB_DEV          0x3898
#define EVGA_RTX3080_FTW3_ULTRA_HYBRID_LHR_SUB_DEV      0x4898
#define EVGA_RTX3080_FTW3_ULTRA_HYBRID_GAMING_SUB_DEV   0x4878
#define EVGA_RTX3080_FTW3_ULTRA_HC_SUB_DEV              0x3899
#define EVGA_RTX3080_FTW3_ULTRA_HC_12G_SUB_DEV          0x4879
#define EVGA_RTX3080TI_XC3_GAMING_SUB_DEV               0x3953
#define EVGA_RTX3080TI_XC3_ULTRA_GAMING_SUB_DEV         0x3955
#define EVGA_RTX3080TI_XC3_GAMING_HYBRID_SUB_DEV        0x3958
#define EVGA_RTX3080TI_XC3_GAMING_HC_SUB_DEV            0x3959
#define EVGA_RTX3080TI_FTW3_ULTRA_SUB_DEV               0x3967
#define EVGA_RTX3080TI_FTW3_ULTRA_HYBRID_SUB_DEV        0x3968
#define EVGA_RTX3080TI_FTW3_ULTRA_HC_SUB_DEV            0x3969
#define EVGA_RTX3090_XC3_BLACK_SUB_DEV                  0x3971
#define EVGA_RTX3090_XC3_GAMING_SUB_DEV                 0x3973
#define EVGA_RTX3090_XC3_ULTRA_SUB_DEV                  0x3975
#define EVGA_RTX3090_XC3_ULTRA_HYBRID_SUB_DEV           0x3978
#define EVGA_RTX3090_XC3_ULTRA_HC_SUB_DEV               0x3979
#define EVGA_RTX3090_FTW3_GAMING_SUB_DEV                0x3985
#define EVGA_RTX3090_FTW3_ULTRA_SUB_DEV                 0x3987
#define EVGA_RTX3090_FTW3_ULTRA_V2_SUB_DEV              0x3982
#define EVGA_RTX3090_FTW3_ULTRA_V3_SUB_DEV              0x3387
#define EVGA_RTX3090_FTW3_ULTRA_HYBRID_SUB_DEV          0x3988
#define EVGA_RTX3090_FTW3_ULTRA_HC_SUB_DEV              0x3989
#define EVGA_RTX3090_KINGPIN_HYBRID_SUB_DEV             0x3998
#define EVGA_RTX3090_KINGPIN_HC_SUB_DEV                 0x3999
#define EVGA_RTX3090TI_FTW3_GAMING_SUB_DEV              0x4983
#define EVGA_RTX3090TI_FTW3_ULTRA_GAMING_SUB_DEV        0x4985

/*-----------------------------------------------------*\
| Gainward Sub-Device IDs                               |
\*-----------------------------------------------------*/
#define GAINWARD_GTX_1080_PHOENIX                       0x1B80
#define GAINWARD_GTX_1080_TI_PHOENIX                    0x1B06

/*-----------------------------------------------------*\
| GALAX / KFA2 Sub-Device IDs                           |
\*-----------------------------------------------------*/
#define KFA2_RTX_2070_EX_SUB_DEV                        0x12FE
#define GALAX_RTX_2070S_EX_GAMER_BLACK_SUB_DEV          0x139F
#define KFA2_RTX_2080_EX_OC_SUB_DEV                     0x12B0
#define KFA2_RTX_2080_SUPER_EX_OC_SUB_DEV               0x13A1
#define KFA2_RTX_2080_TI_EX_OC_SUB_DEV                  0x1323

/*-----------------------------------------------------*\
| Gigabyte (Aorus) Sub-Device IDs                       |
\*-----------------------------------------------------*/
#define GIGABYTE_GTX1050TI_G1_GAMING_SUB_DEV            0x372A
#define GIGABYTE_GTX1060_G1_GAMING_SUB_DEV              0x3716
#define GIGABYTE_GTX1060_G1_GAMING_OC_SUB_DEV           0x3739
#define GIGABYTE_GTX1060_XTREME_V1_SUB_DEV              0x3757
#define GIGABYTE_GTX1060_XTREME_V2_SUB_DEV              0x3776
#define GIGABYTE_GTX1070_XTREME_SUB_DEV                 0x3778
#define GIGABYTE_GTX1070_G1_GAMING_8G_SUB_DEV           0x3772
#define GIGABYTE_GTX1070TI_GAMING_SUB_DEV               0x3794
#define GIGABYTE_GTX1080_G1_GAMING_SUB_DEV              0x3702
#define GIGABYTE_GTX1080TI_SUB_DEV                      0x3752
#define GIGABYTE_GTX1080TI_GAMING_OC_SUB_DEV            0x374C
#define GIGABYTE_GTX1080TI_GAMING_OC_BLACK_SUB_DEV      0x377A
#define GIGABYTE_GTX1080TI_XTREME_SUB_DEV               0x3751
#define GIGABYTE_GTX1080TI_XTREME_WATERFORCE_SUB_DEV    0x3762
#define GIGABYTE_GTX1650_GAMING_OC_SUB_DEV              0x3FE4
#define GIGABYTE_GTX1660_GAMING_OC_6G_SUB_DEV           0x3FC7
#define GIGABYTE_GTX1660S_GAMING_OC_SUB_DEV             0x4014
#define GIGABYTE_RTX2060_GAMING_OC_SUB_DEV              0x37CE
#define GIGABYTE_RTX2060_GAMING_OC_PRO_SUB_DEV          0x3FC2
#define GIGABYTE_RTX2060_GAMING_OC_PRO_SUB_DEV2         0x3FC9
#define GIGABYTE_RTX2060_GAMING_OC_PRO_WHITE_SUB_DEV    0x3FD0
#define GIGABYTE_RTX2060S_GAMING_SUB_DEV                0x404A
#define GIGABYTE_RTX2060S_GAMING_OC_SUB_DEV             0x3FED
#define GIGABYTE_RTX2060S_GAMING_OC_WHITE_SUB_DEV       0x3FFE
#define GIGABYTE_AORUS_RTX2060S_V1_SUB_DEV              0x3FF7
#define GIGABYTE_RTX2060S_GAMING_OC_3X_V2_SUB_DEV       0x4009
#define GIGABYTE_RTX2070_GAMING_OC_SUB_DEV              0x37AD
#define GIGABYTE_RTX2070_WINDFORCE_SUB_DEV              0x37C2
#define GIGABYTE_AORUS_RTX2070_XTREME_SUB_DEV           0x37B4
#define GIGABYTE_RTX2070S_GAMING_OC_SUB_DEV             0x3FEB
#define GIGABYTE_AORUS_RTX2070S_8G_SUB_DEV              0x3FF5
#define GIGABYTE_RTX2070S_GAMING_OC_SUB_DEV2            0x3FF6
#define GIGABYTE_RTX2070S_GAMING_OC_3X_SUB_DEV          0x4008
#define GIGABYTE_RTX2070S_GAMING_OC_3X_WHITE_SUB_DEV    0x400D
#define GIGABYTE_RTX2080_A_GAMING_OC_SUB_DEV            0x37A7
#define GIGABYTE_RTX2080_TI_GAMING_OC_SUB_DEV           0x37A9
#define GIGABYTE_RTX2080_GAMING_OC_SUB_DEV              0x37D6
#define GIGABYTE_AORUS_RTX2080_SUB_DEV                  0x37B2
#define GIGABYTE_AORUS_RTX2080_XTREME_SUB_DEV           0x37B1
#define GIGABYTE_RTX2080S_GAMING_OC_SUB_DEV             0x3FE9
#define GIGABYTE_AORUS_RTX2080S_SUB_DEV                 0x3FF3
#define GIGABYTE_AORUS_RTX2080S_SUB_DEV2                0x3FF4
#define GIGABYTE_AORUS_RTX2080S_WATERFORCE_WB_SUB_DEV   0x4003
#define GIGABYTE_AORUS_RTX2080TI_EXTREME_SUB_DEV        0x37BC
#define GIGABYTE_RTX3050_GAMING_OC_8GB_SUB_DEV          0x40AA
#define GIGABYTE_RTX3060_EAGLE_OC_12GB_SUB_DEV          0x4072
#define GIGABYTE_RTX3060_VISION_OC_12GB_SUB_DEV         0x4073
#define GIGABYTE_RTX3060_GAMING_OC_12GB_SUB_DEV         0x4074
#define GIGABYTE_RTX3060_ELITE_12GB_SUB_DEV	            0x407B
#define GIGABYTE_RTX3060_EAGLE_12GB_V2_SUB_DEV          0x4071
#define GIGABYTE_RTX3060TI_EAGLE_OC_SUB_DEV             0x405B
#define GIGABYTE_RTX3060TI_EAGLE_OC_LHR_SUB_DEV         0x4060
#define GIGABYTE_RTX3060TI_ELITE_8GB_SUB_DEV            0x4076
#define GIGABYTE_RTX3060TI_GAMING_OC_SUB_DEV            0x405A
#define GIGABYTE_RTX3060TI_GAMING_OC_PRO_SUB_DEV        0x405E
#define GIGABYTE_RTX3060TI_VISION_OC_8G_SUB_DEV         0x4077
#define GIGABYTE_RTX3070_GAMING_OC_SUB_DEV              0x404C
#define GIGABYTE_RTX3070_VISION_OC_SUB_DEV              0x404D
#define GIGABYTE_RTX3070_EAGLE_OC_SUB_DEV               0x404E
#define GIGABYTE_RTX3070_MASTER_OC_SUB_DEV              0x4069
#define GIGABYTE_AORUS_RTX3070TI_MASTER_8G_SUB_DEV      0x408E
#define GIGABYTE_RTX3070TI_GAMING_OC_SUB_DEV            0x408F
#define GIGABYTE_RTX3070TI_EAGLE_SUB_DEV                0x408C
#define GIGABYTE_RTX3070TI_VISION_OC_SUB_DEV            0x4090
#define GIGABYTE_RTX3080_GAMING_OC_SUB_DEV              0x403F
#define GIGABYTE_RTX3080_GAMING_OC_12G_SUB_DEV          0x40A2
#define GIGABYTE_RTX3080_VISION_OC_SUB_DEV              0x404B
#define GIGABYTE_RTX3080_XTREME_WATERFORCE_V2_SUB_DEV   0x4037
#define GIGABYTE_RTX3080_XTREME_WATERFORCE_SUB_DEV      0x4038
#define GIGABYTE_RTX3080TI_GAMING_OC_SUB_DEV            0x4088
#define GIGABYTE_RTX3080TI_EAGLE_SUB_DEV                0x4085
#define GIGABYTE_RTX3080TI_VISION_OC_SUB_DEV            0x4087
#define GIGABYTE_RTX3080TI_XTREME_WATERFORCE_SUB_DEV    0x4083
#define GIGABYTE_RTX3090_GAMING_OC_24GB_SUB_DEV         0x4043
#define GIGABYTE_RTX3090_XTREME_WATERFORCE_SUB_DEV      0x4039
#define GIGABYTE_RTX3090_XTREME_WATERFORCE_WB_SUB_DEV   0x403A

/*-----------------------------------------------------*\
| MSI Sub-Device IDs                                    |
\*-----------------------------------------------------*/
#define MSI_GTX1070_GAMING_X_SUB_DEV                    0x3306
#define MSI_GTX1660_GAMING_X_6G_SUB_DEV                 0x3790
#define MSI_GTX1660TI_GAMING_6G_SUB_DEV                 0x375C
#define MSI_GTX1660TI_GAMING_X_6G_SUB_DEV               0x375A
#define MSI_GTX1660S_GAMING_6G_SUB_DEV                  0xC759
#define MSI_GTX1660S_GAMING_X_6G_SUB_DEV                0xC758
#define MSI_RTX2060_GAMING_Z_6G_SUB_DEV                 0x3752
#define MSI_RTX2060_GAMING_Z_6G_SUB_DEV_2               0x3754
#define MSI_RTX2060S_GAMING_X_SUB_DEV                   0xC752
#define MSI_RTX2060S_ARMOR_OC_SUB_DEV                   0xC754
#define MSI_RTX2070_GAMING_Z_SUB_DEV                    0x3732
#define MSI_RTX2070_GAMING_SUB_DEV                      0x3733
#define MSI_RTX2070_ARMOR_SUB_DEV                       0x3734
#define MSI_RTX2070S_GAMING_SUB_DEV                     0x373F
#define MSI_RTX2070S_ARMOR_OC_SUB_DEV                   0xC730
#define MSI_RTX2070S_GAMING_TRIO_SUB_DEV                0xC727
#define MSI_RTX2070S_GAMING_Z_TRIO_SUB_DEV              0x37B6
#define MSI_RTX2070S_GAMING_X_SUB_DEV                   0x373e
#define MSI_RTX2070S_GAMING_X_TRIO_SUB_DEV              0xC726
#define MSI_RTX2080_GAMING_TRIO_SUB_DEV                 0x372E
#define MSI_RTX2080_GAMING_X_TRIO_SUB_DEV               0x3726
#define MSI_RTX2080_SEA_HAWK_EK_X_SUB_DEV               0x3728
#define MSI_RTX2080_DUKE_OC_SUB_DEV                     0x3721
#define MSI_RTX2080S_GAMING_X_TRIO_SUB_DEV              0xC724
#define MSI_RTX2080TI_GAMING_X_TRIO_SUB_DEV             0x3715
#define MSI_RTX2080TI_GAMING_Z_TRIO_SUB_DEV             0x371E
#define MSI_RTX2080TI_11G_GAMING_X_TRIO_SUB_DEV         0x3716
#define MSI_RTX2080TI_SEA_HAWK_EK_X_SUB_DEV             0x3717
#define MSI_RTX3060_GAMING_X_12G_SUB_DEV                0x3976
#define MSI_RTX3060TI_GAMING_X_SUB_DEV                  0x3973
#define MSI_RTX3070_GAMING_TRIO_SUB_DEV                 0x3904
#define MSI_RTX3070_GAMING_X_TRIO_SUB_DEV               0x3903
#define MSI_RTX3080_GAMING_Z_TRIO_SUB_DEV               0x389B
#define MSI_RTX3080_12G_GAMING_Z_TRIO_SUB_DEV           0x389B
#define MSI_RTX3070TI_SUPRIM_X_SUB_DEV                  0x5051
#define MSI_RTX3070TI_GAMING_X_TRIO_SUB_DEV             0x5052
#define MSI_RTX3070_SUPRIM_X_SUB_DEV                    0x3901
#define MSI_RTX3080_GAMING_X_TRIO_SUB_DEV               0x3892
#define MSI_RTX3080_SUPRIM_X_SUB_DEV                    0x3897
#define MSI_RTX3080TI_GAMING_X_TRIO_SUB_DEV             0x389B
#define MSI_RTX3080TI_SUPRIM_X_SUB_DEV                  0x3897
#define MSI_RTX3090_GAMING_X_TRIO_SUB_DEV               0x3884
#define MSI_RTX3090_SUPRIM_X_SUB_DEV                    0x3882
#define MSI_RTX3090TI_SUPRIM_X_SUB_DEV                  0x5090
#define MSI_RTX3090TI_GAMING_X_TRIO_SUB_DEV             0x5091
#define MSI_RX6600XT_GAMING_X_SUB_DEV                   0x5020
#define MSI_RX6700XT_GAMING_X_SUB_DEV                   0x3981
#define MSI_RX6800_GAMING_X_TRIO_SUB_DEV                0x3961
#define MSI_RX6800XT_GAMING_X_TRIO_SUB_DEV              0x3951
#define MSI_RX6800XT_GAMING_Z_TRIO_SUB_DEV              0x3953
#define MSI_RX6900XT_GAMING_X_TRIO_SUB_DEV              0x3952
#define MSI_RX6950XT_GAMING_X_TRIO_SUB_DEV              0x3955

/*-----------------------------------------------------*\
| PNY Sub-Device IDs                                    |
\*-----------------------------------------------------*/
#define PNY_RTX_3060_XLR8_REVEL_EPIC_X_SUB_DEV          0x138E
#define PNY_RTX_3080_XLR8_REVEL_EPIC_X_SUB_DEV          0x136B
#define PNY_RTX_3090_XLR8_REVEL_EPIC_X_SUB_DEV          0x136A
#define PNY_RTX_3060TI_XLR8_REVEL_EPIC_X_SUB_DEV        0x1389
#define PNY_RTX_2060_XLR8_OC_SUB_DEV                    0x1363

/*-----------------------------------------------------*\
| Palit Sub-Device IDs                                    |
\*-----------------------------------------------------*/
#define PALIT_RTX3060_SUB_DEV                           0x2503
#define PALIT_RTX3060_LHR_SUB_DEV                       0x2504

#define PALIT_RTX3060TI_SUB_DEV                         0x2486

#define PALIT_RTX3070_SUB_DEV                           0x2484
#define PALIT_RTX3070_LHR_SUB_DEV                       0x2488
#define PALIT_RTX3070TI_GAMING_PRO_SUB_DEV              0x2482
#define PALIT_RTX3070TI_SUB_DEV                         0xF278

#define PALIT_RTX3080_SUB_DEV                           0x2206
#define PALIT_RTX3080_LHR_SUB_DEV                       0x2216
#define PALIT_RTX3080TI_SUB_DEV                         0x2208
#define PALIT_RTX3080TI_GAMEROCK_SUB_DEV                0xF278

#define PALIT_RTX3090_SUB_DEV                           0x2204

/*-----------------------------------------------------*\
| Sapphire Sub-Device IDs                               |
\*-----------------------------------------------------*/
#define SAPPHIRE_POLARIS_NITRO_PLUS_SUB_DEV1            0xE366
#define SAPPHIRE_POLARIS_NITRO_PLUS_SUB_DEV2            0xE399
#define SAPPHIRE_LEGACY_POLARIS_NITRO_PLUS_SUB_DEV      0xE347
#define SAPPHIRE_VEGA10_NITRO_PLUS_SUB_DEV              0xE37F
#define SAPPHIRE_NAVI10_NITRO_PLUS_SUB_DEV1             0xE409
#define SAPPHIRE_NAVI10_NITRO_PLUS_SUB_DEV2             0xE410
#define SAPPHIRE_NAVI10_NITRO_PLUS_SUB_DEV3             0x426E
#define SAPPHIRE_NAVI14_NITRO_PLUS_SUB_DEV              0xE423
#define SAPPHIRE_NAVI21_NITRO_PLUS_SUB_DEV1             0x438E
#define SAPPHIRE_NAVI21_NITRO_PLUS_SUB_DEV2             0xE438
#define SAPPHIRE_NAVI21_NITRO_PLUS_SUB_DEV3             0xE439
#define SAPPHIRE_NAVI22_NITRO_PLUS_SUB_DEV              0xE445
#define SAPPHIRE_NAVI23_NITRO_PLUS_SUB_DEV              0xE448
#define SAPPHIRE_NAVI21_6900XT_NITRO_PLUS_SUB_DEV       0x440E
#define SAPPHIRE_NAVI21_6900XT_TOXIC_AC_SUB_DEV         0x440F
#define SAPPHIRE_NAVI21_6950XT_NITRO_PLUS_SUB_DEV       0x441D
#define SAPPHIRE_NAVI21_TOXIC_SUB_DEV                   0xF440
#define SAPPHIRE_NAVI21_TOXIC_SUB_DEV1                  0xF441

/*---------------------------------------------------------*\
| PCI ID Macros                                             |
\*---------------------------------------------------------*/
#define IF_DRAM_SMBUS(ven, dev)                             \
    if(((ven == AMD_VEN) && (dev == AMD_FCH_SMBUS_DEV)) ||  \
    ((ven == INTEL_VEN) && (dev == INTEL_ICH10_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_SUNRISE_POINT_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_KABY_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_CANNON_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_COMET_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_COMET_LAKE_V_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_TIGER_LAKE_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_ALDER_LAKE_SMBUS_DEV)))

#define IF_MOBO_SMBUS(ven, dev)                             \
    if((ven == 0) ||                                        \
    ((ven == AMD_VEN) && (dev == AMD_FCH_SMBUS_DEV)) ||     \
    ((ven == INTEL_VEN) && (dev == INTEL_ICH10_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_SUNRISE_POINT_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_KABY_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_CANNON_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_COMET_LAKE_H_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_COMET_LAKE_V_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_TIGER_LAKE_SMBUS_DEV)) || \
    ((ven == INTEL_VEN) && (dev == INTEL_ALDER_LAKE_SMBUS_DEV)))
