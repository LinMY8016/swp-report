/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: sjc_iomux_config.c

/* ------------------------------------------------------------------------------
 * <auto-generated>
 *     This code was generated by a tool.
 *     Runtime Version:3.4.0.3
 *
 *     Changes to this file may cause incorrect behavior and will be lost if
 *     the code is regenerated.
 * </auto-generated>
 * ------------------------------------------------------------------------------
*/

#include "iomux_config.h"
#include "registers/regsiomuxc.h"

// Function to configure IOMUXC for sjc module.
void sjc_iomux_config(void)
{
    // Config sjc.JTAG_DE_B to pad GPIO16(R2)
    // HW_IOMUXC_SW_MUX_CTL_PAD_GPIO16_WR(0x00000007);
    // HW_IOMUXC_SW_PAD_CTL_PAD_GPIO16_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_GPIO16(0x020E0214)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: esai signal: ESAI_TX3_RX2
    //     ALT1 (1) - Select instance: enet signal: ENET_1588_EVENT2_IN
    //     ALT2 (2) - Select instance: enet signal: ENET_REF_CLK
    //     ALT3 (3) - Select instance: usdhc1 signal: SD1_LCTL
    //     ALT4 (4) - Select instance: spdif signal: SPDIF_IN
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO11
    //     ALT6 (6) - Select instance: i2c3 signal: I2C3_SDA
    //     ALT7 (7) - Select instance: sjc signal: JTAG_DE_B
    HW_IOMUXC_SW_MUX_CTL_PAD_GPIO16_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO16_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_GPIO16_MUX_MODE_V(ALT7));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_GPIO16(0x020E05E4)
    //   HYS [16] - Hysteresis Enable Field Reset: ENABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_GPIO16_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_GPIO16_SRE_V(SLOW));

    // Config sjc.JTAG_MOD to pad JTAG_MOD(H6)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_WR(0x0000B060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD(0x020E0614)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 50MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 60_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_MOD_PKE_V(ENABLED));

    // Config sjc.JTAG_TCK to pad JTAG_TCK(H5)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK(0x020E0618)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 47K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 50MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 60_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_PUS_V(47K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TCK_PKE_V(ENABLED));

    // Config sjc.JTAG_TDI to pad JTAG_TDI(G5)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI(0x020E061C)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 47K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 50MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 60_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_PUS_V(47K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDI_PKE_V(ENABLED));

    // Config sjc.JTAG_TDO to pad JTAG_TDO(G6)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_WR(0x000090B1);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO(0x020E0620)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 100K_OHM_PU
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: KEEP
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 100MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 40_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: FAST
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TDO_PKE_V(ENABLED));

    // Config sjc.JTAG_TMS to pad JTAG_TMS(C3)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS(0x020E0624)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 47K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 50MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 60_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_PUS_V(47K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TMS_PKE_V(ENABLED));

    // Config sjc.JTAG_TRSTB to pad JTAG_TRSTB(C2)
    // HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_WR(0x00007060);
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB(0x020E0628)
    //   HYS [16] - Hysteresis Enable Field Reset: DISABLED
    //     DISABLED (0) - CMOS input
    //     ENABLED (1) - Schmitt trigger input
    //   PUS [15:14] - Pull Up / Down Config. Field Reset: 47K_OHM_PU
    //     100K_OHM_PD (0) - 100K Ohm Pull Down
    //     47K_OHM_PU (1) - 47K Ohm Pull Up
    //     100K_OHM_PU (2) - 100K Ohm Pull Up
    //     22K_OHM_PU (3) - 22K Ohm Pull Up
    //   PUE [13] - Pull / Keep Select Field Reset: PULL
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     KEEP (0) - Keeper Enabled
    //     PULL (1) - Pull Enabled
    //   PKE [12] - Pull / Keep Enable Field Reset: ENABLED
    //     DISABLED (0) - Pull/Keeper Disabled
    //     ENABLED (1) - Pull/Keeper Enabled
    //   ODE [11] - Open Drain Enable Field Reset: DISABLED
    //              Enables open drain of the pin.
    //              NOTE: Read Only Field
    //              The value of this field is fixed and cannot be changed.
    //     DISABLED (0) - Output is CMOS.
    //     ENABLED (1) - Output is Open Drain.
    //   SPEED [7:6] - Speed Field Reset: 50MHZ
    //                 NOTE: Read Only Field
    //                 The value of this field is fixed and cannot be changed.
    //     RESERVED0 (0) - Reserved
    //     50MHZ (1) - Low (50 MHz)
    //     100MHZ (2) - Medium (100 MHz)
    //     200MHZ (3) - Maximum (200 MHz)
    //   DSE [5:3] - Drive Strength Field Reset: 60_OHM
    //               NOTE: Read Only Field
    //               The value of this field is fixed and cannot be changed.
    //     HIZ (0) - HI-Z
    //     240_OHM (1) - 240 Ohm
    //     120_OHM (2) - 120 Ohm
    //     80_OHM (3) - 80 Ohm
    //     60_OHM (4) - 60 Ohm
    //     48_OHM (5) - 48 Ohm
    //     40_OHM (6) - 40 Ohm
    //     34_OHM (7) - 34 Ohm
    //   SRE [0] - Slew Rate Field Reset: SLOW
    //             Slew rate control.
    //             NOTE: Read Only Field
    //             The value of this field is fixed and cannot be changed.
    //     SLOW (0) - Slow Slew Rate
    //     FAST (1) - Fast Slew Rate
    HW_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_HYS_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_PUS_V(47K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_JTAG_TRSTB_PKE_V(ENABLED));
}
