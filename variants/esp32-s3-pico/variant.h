/*

*/
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

#define BUTTON_PIN 0 // 17

// #define LED_PIN PIN_LED
// Board has RGB LED 21


// The usbPower state is revered ?
// DEBUG | ??:??:?? 365 [Power] Battery: usbPower=0, isCharging=0, batMv=4116, batPct=90
// DEBUG | ??:??:?? 385 [Power] Battery: usbPower=1, isCharging=1, batMv=4243, batPct=0

// https://www.waveshare.com/img/devkit/ESP32-S3-Pico/ESP32-S3-Pico-details-inter-1.jpg
// digram is incorrect labeled as battery pin is getting readings on GPIO7_CH1?
// #define BATTERY_PIN 7
// #define ADC_CHANNEL ADC1_GPIO7_CHANNEL
// #define ADC_CHANNEL ADC1_GPIO6_CHANNEL
//   ratio of voltage divider = 3.0 (R17=200k, R18=100k)
// #define ADC_MULTIPLIER 3.1 // 3.0 + a bit for being optimistic

#define I2C_SDA1 43
#define I2C_SCL1 44


#define LED_PIN 41   // If defined we will blink this LED

#define BUTTON_PIN 0 // This is the BOOT button
#define BUTTON_NEED_PULLUP

// #define USE_RF95 // RFM95/SX127x
#define USE_SX1262
// #define USE_SX1280

#define LORA_SCK 5
#define LORA_MISO 3
#define LORA_MOSI 6
#define LORA_CS 7
#define LORA_RESET 8
#define LORA_DIO1 38

#ifdef USE_SX1262
#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_RESET LORA_RESET
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_BUSY -1
#endif
