/* Minimal sdkconfig for the MikroE NECTO bare-metal build of esp32p4 (no ESP-IDF build system). */
#pragma once
#define CONFIG_IDF_TARGET_ESP32P4 1
#define CONFIG_IDF_TARGET "esp32p4"
#define CONFIG_XTAL_FREQ 40
#define CONFIG_XTAL_FREQ_40 1
#define CONFIG_LOG_DEFAULT_LEVEL 0
#define CONFIG_LOG_MAXIMUM_LEVEL 0
#define CONFIG_BOOTLOADER_LOG_LEVEL 0
#define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ 400
#define CONFIG_ESP_DEFAULT_CPU_FREQ_MHZ_400 1
#define CONFIG_HAL_DEFAULT_ASSERTION_LEVEL 0
#define CONFIG_ESP_REV_MIN_FULL 300
#define CONFIG_BOOTLOADER_CPU_CLK_FREQ_MHZ 400
/* Bare-metal like the ESP-IDF 2nd stage bootloader: no RTOS, sleep or clock tree reference counting. */
#ifndef BOOTLOADER_BUILD
#define BOOTLOADER_BUILD 1
#endif
#define CONFIG_ESP_REV_MAX_FULL 9999
#define CONFIG_ESP_EFUSE_BLOCK_REV_MIN_FULL 0
#define CONFIG_ESP_EFUSE_BLOCK_REV_MAX_FULL 9999
#define NON_OS_BUILD 1
