#ifndef __INC_FASTPIN_SYSDEFS_H
#define __INC_FASTPIN_SYSDEFS_H

#include "AslFastPin.h"

#include "fastpin_config.h"

#if defined(NRF51) || defined(__RFduino__) || defined (__Simblee__)
#include "arm/nrf51/fastpin_sysdefs_arm_nrf51.h"
#elif defined(__MK20DX128__) || defined(__MK20DX256__)
// Include k20/T3 headers
#include "arm/k20/fastpin_sysdefs_arm_k20.h"
#elif defined(__MKL26Z64__)
// Include kl26/T-LC headers
#include "arm/kl26/fastpin_sysdefs_arm_kl26.h"
#elif defined(__SAM3X8E__)
// Include sam/due headers
#include "arm/sam/fastpin_sysdefs_arm_sam.h"
#elif defined(STM32F10X_MD)
#include "arm/stm32/fastpin_sysdefs_arm_stm32.h"
#elif defined(__SAMD21G18A__) || defined(__SAMD21E17A__)
#include "arm/d21/fastpin_sysdefs_arm_d21.h"
#elif defined(ESP8266)
#include "esp/8266/fastpin_sysdefs_esp8266.h"
#else
// AVR platforms
#include "avr/fastpin_sysdefs_avr.h"
#endif

#ifndef FASTPIN_NAMESPACE_BEGIN
#define FASTPIN_NAMESPACE_BEGIN namespace asl {
#define FASTPIN_NAMESPACE_END }
#define FASTPIN_USING_NAMESPACE using namespace asl;
#endif

// Arduino.h needed for convenience functions digitalPinToPort/BitMask/portOutputRegister and the pinMode methods.
#ifdef ARDUINO
#include <Arduino.h>
#endif

#define CLKS_PER_US (F_CPU/1000000)

#endif // __INC_FASTPIN_SYSDEFS_H
