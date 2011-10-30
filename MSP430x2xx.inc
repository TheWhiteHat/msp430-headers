;registers
PC equ r0
SP equ r1
SR equ r2

;sr values
CPUOFF equ #0x0010
GIE equ #0x0008

;wdt
WDTCTL equ #0x0120 ;address of control register
WDTPW equ #0x5A00 ;timer password
WDTHOLD equ #0x0080 ;stop timer
WDTNMIES equ #0x0040 ;NMI edge select

