#pragma once

#ifdef OLED_ENABLE
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

#   define OLED_DISPLAY_128X64
#   define OLED_TIMEOUT 60000
#   define OLED_BRIGHTNESS 128
#endif
