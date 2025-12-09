// The Hammer Board by Broken Circuit Ranch
// ESP32 + EBYTE E22 (SX1262) LoRa 900MHz 1W Transceiver
// https://github.com/BrokenCircuitRanch

// For OLED LCD
#define I2C_SDA 21
#define I2C_SCL 22

// For GPS
#define GPS_TX_PIN 15
#define GPS_RX_PIN 12

// Button and Power
#define BUTTON_PIN 0    // Boot button on The Hammer
#define EXT_PWR_DETECT 4

// Battery ADC
#define BATTERY_PIN 35
#define ADC_CHANNEL ADC1_GPIO35_CHANNEL
#define ADC_MULTIPLIER 1.85

// Radio - EBYTE E22-900M30S (SX1262)
#define USE_SX1262
#define SX126X_MAX_POWER 22         // 22dBm from SX1262 → ~30dBm output with E22's PA
#define SX126X_DIO3_TCXO_VOLTAGE 1.8

// SPI pins for LoRa (VSPI)
#define SX126X_CS 18
#define SX126X_SCK 5
#define SX126X_MOSI 27
#define SX126X_MISO 19
#define SX126X_RESET 17   // The Hammer uses GPIO 17 for RESET
#define SX126X_BUSY 32
#define SX126X_DIO1 33

// TX/RX enable pins for E22's PA
#define SX126X_TXEN 13
#define SX126X_RXEN 14

// Compatibility aliases
#define LORA_CS SX126X_CS
#define LORA_SCK SX126X_SCK
#define LORA_MOSI SX126X_MOSI
#define LORA_MISO SX126X_MISO
#define LORA_DIO1 SX126X_DIO1
#define LORA_RESET SX126X_RESET
