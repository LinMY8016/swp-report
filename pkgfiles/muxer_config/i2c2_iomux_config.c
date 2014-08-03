/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: i2c2_iomux_config.c

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

// Function to configure IOMUXC for i2c2 module.
void i2c2_iomux_config(void)
{
    // Config i2c2.I2C2_SCL to pad KEY_COL3(U5)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL3_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_WR(0x0001B0B0);
    // HW_IOMUXC_I2C2_SCL_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_COL3(0x020E0250)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT0 (0) - Select instance: ecspi1 signal: ECSPI1_SS3
    //     ALT1 (1) - Select instance: enet signal: ENET_CRS
    //     ALT2 (2) - Select instance: hdmi signal: HDMI_TX_DDC_SCL
    //     ALT3 (3) - Select instance: kpp signal: KEY_COL3
    //     ALT4 (4) - Select instance: i2c2 signal: I2C2_SCL
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO12
    //     ALT6 (6) - Select instance: spdif signal: SPDIF_IN
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_COL3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_COL3_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_COL3(0x020E0638)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_COL3_SRE_V(SLOW));
    // Pad KEY_COL3 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C2_SCL_IN_SELECT_INPUT(0x020E0870)
    //   DAISY [0] - Input Select (DAISY) Field Reset: EIM_EB2_ALT6
    //               Selecting Pads Involved in Daisy Chain.
    //     EIM_EB2_ALT6 (0) - Select signal i2c2 I2C2_SCL as input from pad EIM_EB2(ALT6).
    //     KEY_COL3_ALT4 (1) - Select signal i2c2 I2C2_SCL as input from pad KEY_COL3(ALT4).
    HW_IOMUXC_I2C2_SCL_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C2_SCL_IN_SELECT_INPUT_DAISY_V(EIM_EB2_ALT6));

    // Config i2c2.I2C2_SDA to pad KEY_ROW3(T7)
    // HW_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3_WR(0x00000004);
    // HW_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_WR(0x0001B0B0);
    // HW_IOMUXC_I2C2_SDA_IN_SELECT_INPUT_WR(0x00000000);
    // Mux Register:
    // IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3(0x020E0264)
    //   SION [4] - Software Input On Field Reset: DISABLED
    //              Force the selected mux mode Input path no matter of MUX_MODE functionality.
    //     DISABLED (0) - Input Path is determined by functionality of the selected mux mode (regular).
    //     ENABLED (1) - Force input path of pad.
    //   MUX_MODE [2:0] - MUX Mode Select Field Reset: ALT5
    //                    Select iomux modes to be used for pad.
    //     ALT1 (1) - Select instance: asrc signal: ASRC_EXT_CLK
    //     ALT2 (2) - Select instance: hdmi signal: HDMI_TX_DDC_SDA
    //     ALT3 (3) - Select instance: kpp signal: KEY_ROW3
    //     ALT4 (4) - Select instance: i2c2 signal: I2C2_SDA
    //     ALT5 (5) - Select instance: gpio4 signal: GPIO4_IO13
    //     ALT6 (6) - Select instance: usdhc1 signal: SD1_VSELECT
    HW_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3_WR(
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3_SION_V(DISABLED) | 
            BF_IOMUXC_SW_MUX_CTL_PAD_KEY_ROW3_MUX_MODE_V(ALT4));
    // Pad Control Register:
    // IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3(0x020E064C)
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
    HW_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_WR(
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_HYS_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_PUS_V(100K_OHM_PU) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_PUE_V(PULL) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_PKE_V(ENABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_ODE_V(DISABLED) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_SPEED_V(100MHZ) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_DSE_V(40_OHM) | 
            BF_IOMUXC_SW_PAD_CTL_PAD_KEY_ROW3_SRE_V(SLOW));
    // Pad KEY_ROW3 is involved in Daisy Chain.
    // Input Select Register:
    // IOMUXC_I2C2_SDA_IN_SELECT_INPUT(0x020E0874)
    //   DAISY [0] - Input Select (DAISY) Field Reset: EIM_DATA16_ALT6
    //               Selecting Pads Involved in Daisy Chain.
    //     EIM_DATA16_ALT6 (0) - Select signal i2c2 I2C2_SDA as input from pad EIM_DATA16(ALT6).
    //     KEY_ROW3_ALT4 (1) - Select signal i2c2 I2C2_SDA as input from pad KEY_ROW3(ALT4).
    HW_IOMUXC_I2C2_SDA_IN_SELECT_INPUT_WR(
            BF_IOMUXC_I2C2_SDA_IN_SELECT_INPUT_DAISY_V(EIM_DATA16_ALT6));
}
