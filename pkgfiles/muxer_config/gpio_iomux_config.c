/*
 * Copyright (C) 2012, [Your Company Here] All Rights Reserved.
 * IT IS EXPECTED THAT THIS TEXT BE REPLACED WITH THE BOARD SOFTWARE
 * PROVIDER'S COPYRIGHT INFORMATION. THIS TEXT WILL BE DISPLAYED AT 
 * THE TOP OF ALL SOURCE FILES GENERATED FOR THIS BOARD DESIGN.
*/

// File: gpio_iomux_config.c

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
#include "registers/regsgpio.h"
#include "io.h"
#include <assert.h>

void gpio_iomux_config(int instance)
{
    switch (instance)
    {
        case HW_GPIO1:
            return gpio1_iomux_config();

        case HW_GPIO2:
            return gpio2_iomux_config();

        case HW_GPIO3:
            return gpio3_iomux_config();

        case HW_GPIO4:
            return gpio4_iomux_config();

        case HW_GPIO5:
            return gpio5_iomux_config();

        case HW_GPIO6:
            return gpio6_iomux_config();

        case HW_GPIO7:
            return gpio7_iomux_config();

        default:
            assert(false);
    }
}

