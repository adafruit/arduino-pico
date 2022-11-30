#pragma once

// Pin definitions taken from:
//    https://learn.adafruit.com/assets/100337

// LEDs not pinned out
#define PIN_LED        (31u)

// NeoPixel
#define PIN_NEOPIXEL   (29u)

// Serial1
#define PIN_SERIAL1_TX (0u) // not actually available
#define PIN_SERIAL1_RX (1u) // not actually available

// Serial2
#define PIN_SERIAL2_TX (4u) // not actually available
#define PIN_SERIAL2_RX (5u) // not actually available

// SPI
#define PIN_SPI0_MISO  (16u) // not actually available
#define PIN_SPI0_MOSI  (19u)
#define PIN_SPI0_SCK   (18u)
#define PIN_SPI0_SS    (17u) 

// Not pinned out
#define PIN_SPI1_MISO  (31u)
#define PIN_SPI1_MOSI  (31u)
#define PIN_SPI1_SCK   (31u)
#define PIN_SPI1_SS    (31u)

// Wire is connected to StemmaQT connector
#define PIN_WIRE0_SDA  (24u)
#define PIN_WIRE0_SCL  (25u)

// Not pinned out
#define PIN_WIRE1_SDA  (31u)
#define PIN_WIRE1_SCL  (31u)

#define SERIAL_HOWMANY (1u)
#define SPI_HOWMANY    (1u)
#define WIRE_HOWMANY   (1u)

// Pin overrides specific to the QT Py RP2040
#define __PIN_A0 (29u)
#define __PIN_A1 (28u)
#define __PIN_A2 (27u)
#define __PIN_A3 (26u)

#include "../generic/common.h"
