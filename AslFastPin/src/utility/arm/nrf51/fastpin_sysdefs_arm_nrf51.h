#ifndef __INC_FASTPIN_SYSDEFS_ARM_NRF51
#define __INC_FASTPIN_SYSDEFS_ARM_NRF51

#ifndef NRF51
#define NRF51
#endif

#define FASTPIN_ARM
#define FASTPIN_ARM_M0

#ifndef F_CPU
#define F_CPU 16000000
#endif

#include <stdint.h>
#include "nrf51.h"
#include "core_cm0.h"

#endif // __INC_FASTPIN_SYSDEFS_ARM_NRF51
