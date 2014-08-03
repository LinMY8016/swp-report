/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: usdhc3_iomux_config.c

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

// Function to configure IOMUXC for usdhc3 module.
void usdhc3_iomux_config(void)
{
    // Config usdhc3.SD3_CLK to pad SD3_CLK(D14)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_CLK_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_WR(0x0001B0B0);
    // HW_IOMUXC_USDHC3_CARD_CLK_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_CLK(0x020E030C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_CLK
    //     ALT1 (1) - Select instance: uart2 signal: UART2_RTS_B
    //     ALT2 (2) - Select instance: flexcan1 signal: FLEXCAN1_RX
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO03
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_CLK_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_CLK_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_CLK_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_CLK(0x020E06F4)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CLK_SRE_V(SLOW));
    // Pad SD3_CLK is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_USDHC3_CARD_CLK_IN_SELECT_INPUT(0x020E0934)
    //   DAISY [0] - Input Select (DAISY) Field Reset: NAND_ALE_ALT8
    //               Selecting Pads Involved in Daisy Chain.
    //     NAND_ALE_ALT8 (0) - Select signal usdhc3 SD3_CLKI as input from pad NAND_ALE(ALT8).
    //     SD3_CLK_ALT0 (1) - Select signal usdhc3 SD3_CLK as input from pad SD3_CLK(ALT0).
    HW_IOMUXC_USDHC3_CARD_CLK_IN_SELECT_INPUT_WR(
            BF_IOMUXC_USDHC3_CARD_CLK_IN_SELECT_INPUT_DAISY_V(SD3_CLK_ALT0));

    // Config usdhc3.SD3_CMD to pad SD3_CMD(B13)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_CMD_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_CMD(0x020E0310)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_CMD
    //     ALT1 (1) - Select instance: uart2 signal: UART2_CTS_B
    //     ALT2 (2) - Select instance: flexcan1 signal: FLEXCAN1_TX
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO02
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_CMD_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_CMD_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_CMD_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_CMD(0x020E06F8)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_CMD_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA0 to pad SD3_DATA0(E14)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA0_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA0(0x020E0314)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA0
    //     ALT1 (1) - Select instance: uart1 signal: UART1_CTS_B
    //     ALT2 (2) - Select instance: flexcan2 signal: FLEXCAN2_TX
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO04
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA0_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA0_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA0_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0(0x020E06FC)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA0_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA1 to pad SD3_DATA1(F14)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA1_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA1(0x020E0318)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA1
    //     ALT1 (1) - Select instance: uart1 signal: UART1_RTS_B
    //     ALT2 (2) - Select instance: flexcan2 signal: FLEXCAN2_RX
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO05
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA1_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA1_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA1_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1(0x020E0700)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA1_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA2 to pad SD3_DATA2(A15)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA2_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA2(0x020E031C)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA2
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO06
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA2_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA2_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA2_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2(0x020E0704)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA2_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA3 to pad SD3_DATA3(B15)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA3_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA3(0x020E0320)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA3
    //     ALT1 (1) - Select instance: uart3 signal: UART3_CTS_B
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO07
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA3_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3(0x020E0708)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA3_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA4 to pad SD3_DATA4(D13)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA4_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA4(0x020E0324)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA4
    //     ALT1 (1) - Select instance: uart2 signal: UART2_RX_DATA
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO01
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA4_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA4_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA4_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4(0x020E070C)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA4_SRE_V(SLOW));

    // Config usdhc3.SD3_DATA5 to pad SD3_DATA5(C13)
    // HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA5_WR(0x00000000);
    // HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_WR(0x0001B0B0);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_SD3_DATA5(0x020E0328)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: usdhc3 signal: SD3_DATA5
    //     ALT1 (1) - Select instance: uart2 signal: UART2_TX_DATA
    //     ALT5 (5) - Select instance: gpio7 signal: GPIO7_IO00
    HW_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA5_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA5_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_SD3_DATA5_MUX_MODE_V(ALT0));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5(0x020E0710)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_SD3_DATA5_SRE_V(SLOW));
}
