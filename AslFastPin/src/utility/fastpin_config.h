#ifndef __INC_FASTPIN_CONFIG_H
#define __INC_FASTPIN_CONFIG_H

#include "AslFastPin.h"

///@file fastpin_config.h
/// Contains definitions that can be used to configure FastPin at compile time.

// Use this option only for debugging pin access and forcing software pin access.  Note that
// software pin access only works in Arduino based environments.  Forces use of digitalWrite
// methods for pin access vs. direct hardware port access
// #define FASTPIN_FORCE_SOFTWARE_PINS

#endif // __INC_FASTPIN_CONFIG_H
