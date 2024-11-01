#pragma once

// LEDs
#define PIN_LED        (28u)

// NeoPixel
#define PIN_NEOPIXEL   (15u)

// SD Card
#define PIN_CARD_CS 23
#define PIN_CARD_DETECT 24

#define TFT_CS 29
#define TFT_DC 25
#define TFT_RESET -1
#define TFT_BACKLIGHT 28

#define DENSITY_PIN 0 // IDC 2
#define INDEX_PIN 9   // IDC 8
#define SELECT_PIN 1  // IDC 12
#define MOTOR_PIN 2   // IDC 16
#define DIR_PIN 3     // IDC 18
#define STEP_PIN 4    // IDC 20
#define WRDATA_PIN 5  // IDC 22 (not used during read)
#define WRGATE_PIN 6  // IDC 24 (not used during read)
#define TRK0_PIN 10   // IDC 26
#define PROT_PIN 11   // IDC 28
#define READ_PIN 12   // IDC 30
#define SIDE_PIN 7    // IDC 32
#define READY_PIN 13  // IDC 34

#define FLOPPY_DIRECTION_PIN 8

// Serial
#define PIN_SERIAL1_TX (24u)
#define PIN_SERIAL1_RX (21u)
#define __SERIAL1_DEVICE uart1

// Not pinned out
#define PIN_SERIAL2_TX (31u)
#define PIN_SERIAL2_RX (31u)

// SPI
#define PIN_SPI0_SCK   (18u)
#define PIN_SPI0_MOSI  (19u)
#define PIN_SPI0_MISO  (20u)
#define PIN_SPI0_SS    (23u)
#define __SPI0_DEVICE  spi0

// Not pinned out
#define PIN_SPI1_MISO  (31u)
#define PIN_SPI1_MOSI  (27u)
#define PIN_SPI1_SCK   (26u)
#define PIN_SPI1_SS    (29u)
#define __SPI1_DEVICE  spi1

// Wire
#define PIN_WIRE0_SDA  (16u)
#define PIN_WIRE0_SCL  (17u)
#define __WIRE0_DEVICE i2c0

#define PIN_WIRE1_SDA  (31u)
#define PIN_WIRE1_SCL  (31u)
#define __WIRE1_DEVICE i2c1

#define SERIAL_HOWMANY (2u)
#define SPI_HOWMANY    (2u)
#define WIRE_HOWMANY   (1u)

#include "../generic/common.h"
