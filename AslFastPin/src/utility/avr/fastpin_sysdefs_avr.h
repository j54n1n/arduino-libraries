#ifndef __INC_FASTPIN_SYSDEFS_AVR_H
#define __INC_FASTPIN_SYSDEFS_AVR_H

#define FASTPIN_AVR

#include <avr/io.h>
#include <avr/interrupt.h> // for cli/se definitions

// Define the register types
#if defined(ARDUINO) // && ARDUINO < 150
typedef volatile       uint8_t RoReg; /**< Read only 8-bit register (volatile const unsigned int) */
typedef volatile       uint8_t RwReg; /**< Read-Write 8-bit register (volatile unsigned int) */
#endif

#endif // __INC_FASTPIN_SYSDEFS_AVR_H
