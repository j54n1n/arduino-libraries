=New platform porting guide=

== Setting up the basic files/folders ==

* Create platform directory (e.g. utility/arm/kl26)
* Create configuration header fastpin_sysdefs_arm_kl26.h:
  * Define platform flags (like FASTPIN_ARM/FASTPIN_TEENSY)
  * Define configuration parameters re: interrupts, or clock doubling
  * Include extra system header files if needed
* Create main platform include, fastpin_platform_arm_kl26.h
  * Include the various other header files as needed
* Modify fastpin_sysdefs.h to conditionally include platform sysdefs header file
* Modify fastpin_platforms.h to conditionally include platform fastled header

== Porting fastpin.h ==

The heart of the FastPin library is the fast pin accesss.  This is a templated class that provides 1-2 cycle pin access, bypassing digital write and other such things.  As such, this will usually be the first bit of the library that you will want to port when moving to a new platform.  Once you have FastPin up and running then you can do some basic work like testing toggles or running bit-bang'd SPI output.

There's two low level FastPin classes.  There's the base FastPin template class, and then there is FastPinBB which is for bit-banded access on those MCUs that support bitbanding.  Note that the bitband class is optional and primarily useful in the implementation of other functionality internal to the platform.  This file is also where you would do the pin to port/bit mapping defines.

Explaining how the macros work and should be used is currently beyond the scope of this document.
