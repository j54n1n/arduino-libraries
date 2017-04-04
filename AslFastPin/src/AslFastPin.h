#ifndef __INC_ASL_FAST_PIN_H
#define __INC_ASL_FAST_PIN_H

///@file AslFastPin.h
/// Central include file for FastPin.

#include "utility/fastpin_cpp_compat.h"

#include "utility/fastpin_config.h"
#include "utility/fastpin_sysdefs.h"

#include "utility/fastpin_base.h"

#include "utility/fastpin_platforms.h"

// Warnings for undefined things
#ifndef HAS_HARDWARE_PIN_SUPPORT
#warning "No pin/port mappings found, pin access will be slightly slower. See utility/fastpin_base.h for info."
#define NO_HARDWARE_PIN_SUPPORT
#endif

#endif // __INC_ASL_FAST_PIN_H
