#pragma once

// Adafruit Freensy RP2350
// Pin definitions from Eagle schematic

#define PICO_RP2350A 1

// LEDs
#define PIN_LED        (13u)

// NeoPixel
#define PIN_NEOPIXEL   (17u)
#define NEOPIXEL_POWER (16u)
#define NUM_NEOPIXEL   (1)

// Serial
#define PIN_SERIAL1_TX (0u)
#define PIN_SERIAL1_RX (1u)
#define PIN_SERIAL2_TX (31u) // not pinned out
#define PIN_SERIAL2_RX (31u)

// SPI - directly accessible pins (directly on GPIO11/12/14 which are on SPI1 peripheral)
#define __SPI0_DEVICE  spi1
#define PIN_SPI0_MISO  (12u)
#define PIN_SPI0_MOSI  (11u)
#define PIN_SPI0_SCK   (14u)
#define PIN_SPI0_SS    (10u)

#define PIN_SPI1_MISO  (31u) // not pinned out
#define PIN_SPI1_MOSI  (31u)
#define PIN_SPI1_SCK   (31u)
#define PIN_SPI1_SS    (31u)

// Wire - uses I2C1 peripheral (GPIO18=SDA, GPIO19=SCL)
#define __WIRE0_DEVICE i2c1
#define PIN_WIRE0_SDA  (18u)
#define PIN_WIRE0_SCL  (19u)

#define __WIRE1_DEVICE i2c0
#define PIN_WIRE1_SDA  (31u) // not pinned out
#define PIN_WIRE1_SCL  (31u)

#define SERIAL_HOWMANY (1u)
#define SPI_HOWMANY    (1u)
#define WIRE_HOWMANY   (1u)

#include "../generic/common.h"
