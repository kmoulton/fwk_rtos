// Copyright (c) 2019, XMOS Ltd, All rights reserved

#ifndef BITSTREAM_DEVICES_H_
#define BITSTREAM_DEVICES_H_

enum {
    BITSTREAM_MICARRAY_DEVICE_A,
    BITSTREAM_MICARRAY_DEVICE_COUNT
};
extern soc_peripheral_t bitstream_micarray_devices[BITSTREAM_MICARRAY_DEVICE_COUNT];

enum {
    BITSTREAM_ETHERNET_DEVICE_A,
    BITSTREAM_ETHERNET_DEVICE_COUNT// Copyright (c) 2019, XMOS Ltd, All rights reserved

};
extern soc_peripheral_t bitstream_ethernet_devices[BITSTREAM_ETHERNET_DEVICE_COUNT];

enum {
    BITSTREAM_SDRAM_DEVICE_A,
    BITSTREAM_SDRAM_DEVICE_COUNT
};
extern soc_peripheral_t bitstream_sdram_devices[BITSTREAM_SDRAM_DEVICE_COUNT];

#endif /* BITSTREAM_DEVICES_H_ */
