#ifndef __INC_FASTPIN_PLATFORMS_H
#define __INC_FASTPIN_PLATFORMS_H

#include "AslFastPin.h"

#include "fastpin_config.h"

#if defined(NRF51)
#include "arm/nrf51/fastpin_platform_arm_nrf51.h"
#elif defined(__MK20DX128__) || defined(__MK20DX256__)
// Include k20/T3 headers
#include "arm/k20/fastpin_platform_arm_k20.h"
#elif defined(__MKL26Z64__)
// Include kl26/T-LC headers
#include "arm/kl26/fastpin_platform_arm_kl26.h"
#elif defined(__SAM3X8E__)
// Include sam/due headers
#include "arm/sam/fastpin_platform_arm_sam.h"
#elif defined(STM32F10X_MD)
#include "arm/stm32/fastpin_platform_arm_stm32.h"
#elif defined(__SAMD21G18A__) || defined(__SAMD21E17A__)
#include "arm/d21/fastpin_platform_arm_d21.h"
#elif defined(ESP8266)
#include "esp/8266/fastpin_platform_esp8266.h"
#else
// AVR platforms
#include "avr/fastpin_platform_avr.h"
#endif

#endif // __INC_FASTPIN_PLATFORMS_H
