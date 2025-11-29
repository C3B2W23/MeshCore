/*
 * variant.h
 * Copyright (C) 2023 Seeed K.K.
 * MIT License
 */

#pragma once

#include "WVariant.h"

////////////////////////////////////////////////////////////////////////////////
// Low frequency clock source

#define USE_LFXO    // 32.768 kHz crystal oscillator
#define VARIANT_MCK (64000000ul)

#define WIRE_INTERFACES_COUNT   (1)
////////////////////////////////////////////////////////////////////////////////
// Power

#define PIN_PWR_EN              (27)

#define BATTERY_PIN             (28)
#define ADC_MULTIPLIER          (1.75F)

#define ADC_RESOLUTION          (12)
#define BATTERY_SENSE_RES       (12)

#define AREF_VOLTAGE            (3.0)

////////////////////////////////////////////////////////////////////////////////
// Number of pins

#define PINS_COUNT              (48)
#define NUM_DIGITAL_PINS        (48)
#define NUM_ANALOG_INPUTS       (1)
#define NUM_ANALOG_OUTPUTS      (0)

////////////////////////////////////////////////////////////////////////////////
// UART pin definition

#define PIN_SERIAL1_RX          PIN_GPS_TX
#define PIN_SERIAL1_TX          PIN_GPS_RX

#define PIN_SERIAL2_RX          (22)
#define PIN_SERIAL2_TX          (24)

////////////////////////////////////////////////////////////////////////////////
// I2C pin definition

#define PIN_WIRE_SDA            (41)             // P1.9
#define PIN_WIRE_SCL            (8)             // P0.8

////////////////////////////////////////////////////////////////////////////////
// SPI pin definition

#define SPI_INTERFACES_COUNT    (1)

#define PIN_SPI_MISO            (47)
#define PIN_SPI_MOSI            (46)
#define PIN_SPI_SCK             (45)
//#define PIN_SPI_NSS             (24)

////////////////////////////////////////////////////////////////////////////////
// Builtin LEDs

#define LED_RED                 (12)
#define LED_GREEN               (7)
#define LED_BLUE                (-1)

#define LED_BUILTIN             LED_GREEN
#define PIN_LED                 LED_BUILTIN
#define LED_PIN                 LED_BUILTIN
#define LED_STATE_ON            LOW

////////////////////////////////////////////////////////////////////////////////
// Builtin buttons

#define PIN_BUTTON1             (42)
#define BUTTON_PIN              PIN_BUTTON1
#define PIN_USER_BTN            BUTTON_PIN

#define PIN_BUTTON2             (11)
#define BUTTON_PIN2             PIN_BUTTON2

#define EXTERNAL_FLASH_DEVICES MX25R1635F
#define EXTERNAL_FLASH_USE_QSPI

////////////////////////////////////////////////////////////////////////////////
// Lora

#define USE_SX1262
#define LORA_CS                 (24)
#define SX126X_DIO1             (20)
#define SX126X_BUSY             (17)
#define SX126X_RESET            (25)
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

////////////////////////////////////////////////////////////////////////////////
// SPI1

//#define PIN_SPI1_MISO           (38)
//#define PIN_SPI1_MOSI           (29)
//#define PIN_SPI1_SCK            (31)

////////////////////////////////////////////////////////////////////////////////
// QSPI
#define PIN_QSPI_SCK (35)
#define PIN_QSPI_CS  (23)
#define PIN_QSPI_IO0 (33)  // MOSI if using two bit interface
#define PIN_QSPI_IO1 (34)  // MISO if using two bit interface
#define PIN_QSPI_IO2 (36)  // WP if using two bit interface (i.e. not used)
#define PIN_QSPI_IO3 (37)  // HOLD if using two bit interface (i.e. not used)

////////////////////////////////////////////////////////////////////////////////
// GPS

#define PIN_GPS_RX              (2)
#define PIN_GPS_TX              (3)
#define GPS_EN                  (6)
#define PIN_GPS_RESET           (29)
#define PIN_GPS_PPS             (31)
#define PIN_GPS_STANDBY         (30)
//#define PIN_GPS_SWITCH          (33)
