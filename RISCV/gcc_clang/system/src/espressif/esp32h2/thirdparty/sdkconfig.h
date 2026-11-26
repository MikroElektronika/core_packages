/* Minimal sdkconfig for the MikroE NECTO bare-metal build of esp32h2 (no ESP-IDF build system). */
#pragma once
#define CONFIG_IDF_TARGET_ESP32H2 1
#define CONFIG_IDF_TARGET "esp32h2"
#define CONFIG_XTAL_FREQ 32
#define CONFIG_XTAL_FREQ_32 1
#define CONFIG_LOG_DEFAULT_LEVEL 0
#define CONFIG_LOG_MAXIMUM_LEVEL 0
#define CONFIG_BOOTLOADER_LOG_LEVEL 0
#define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ 96
#define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ_96 1
#define CONFIG_HAL_DEFAULT_ASSERTION_LEVEL 0
#define CONFIG_ESP_REV_MIN_FULL 0
#define CONFIG_BOOTLOADER_CPU_CLK_FREQ_MHZ 96
/* Bare-metal like the ESP-IDF 2nd stage bootloader: no RTOS, sleep or clock tree reference counting. */
#ifndef BOOTLOADER_BUILD
#define BOOTLOADER_BUILD 1
#endif
#define CONFIG_ESP_REV_MAX_FULL 9999
#define CONFIG_ESP_EFUSE_BLOCK_REV_MIN_FULL 0
#define CONFIG_ESP_EFUSE_BLOCK_REV_MAX_FULL 9999
#define NON_OS_BUILD 1
