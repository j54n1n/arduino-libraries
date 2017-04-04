#ifndef __INC_FASTPIN_SYSDEFS_ARM_KL26_H
#define __INC_FASTPIN_SYSDEFS_ARM_KL26_H

#define FASTPIN_TEENSYLC
#define FASTPIN_ARM
#define FASTPIN_ARM_M0_PLUS

#if (F_CPU == 96000000)
#define CLK_DBL 1
#endif

// Get some system include files
#include <avr/io.h>
#include <avr/interrupt.h> // for cli/se definitions

// Define the register types
#if defined(ARDUINO) // && ARDUINO < 150
typedef volatile       uint8_t RoReg; /**< Read only 8-bit register (volatile const unsigned int) */
typedef volatile       uint8_t RwReg; /**< Read-Write 8-bit register (volatile unsigned int) */
#endif

#endif // __INC_FASTPIN_SYSDEFS_ARM_KL26_H
