// Copyright (c) 2019, XMOS Ltd, All rights reserved

#ifndef BITSTREAM_H_
#define BITSTREAM_H_

#include "soc.h"

#ifdef __XC__
#include "micarray_dev.h"
#include "eth_dev.h"
#include "sdram_dev.h"
#endif //__XC__


/*
 * This will be a device specific function
 * provided by the device driver.
 */
void device_input(const int dev_id, chanend dev_c);

/*
 * Bitstream specific
 *
 * Internal to the bitstream.
 */
void tile0_device_instantiate(
        chanend eth_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT],
        chanend sdram_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT]);

/*
 * Bitstream specific
 *
 * Internal to the bitstream.
 */
void tile1_device_instantiate(
        chanend eth_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT],
        chanend sdram_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT]);

/*
 * Bitstream specific
 *
 * Called by the hardware side, to be
 * implemented on the software side.
 */
void device_register(
        chanend mic_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT],
        chanend eth_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT],
        chanend sdram_dev_ch[SOC_PERIPHERAL_CHANNEL_COUNT]);

#endif /* BITSTREAM_H_ */
