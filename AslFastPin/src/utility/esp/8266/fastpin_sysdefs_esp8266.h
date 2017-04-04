#pragma once

#ifndef ESP8266
#define ESP8266
#endif

#define FASTPIN_ESP8266

typedef volatile uint32_t RoReg;
typedef volatile uint32_t RwReg;
typedef uint32_t prog_uint32_t;
typedef uint8_t boolean;

// These can be overridden
#if !defined(FASTPIN_ESP8266_RAW_PIN_ORDER) && !defined(FASTPIN_ESP8266_NODEMCU_PIN_ORDER) && !defined(FASTPIN_ESP8266_D1_PIN_ORDER)
# ifdef ARDUINO_ESP8266_NODEMCU
#   define FASTPIN_ESP8266_NODEMCU_PIN_ORDER
# else
#   define FASTPIN_ESP8266_RAW_PIN_ORDER
# endif
#endif
