#ifndef __INC_FASTPIN_SYSDEFS_ARM_K20_H
#define __INC_FASTPIN_SYSDEFS_ARM_K20_H

#define FASTPIN_TEENSY3
#define FASTPIN_ARM

#if (F_CPU == 96000000)
#define CLK_DBL 1
#endif

// Get some system include files
#include <avr/io.h>
#include <avr/interrupt.h> // for cli/se definitions


#endif // __INC_FASTPIN_SYSDEFS_ARM_K20_H
