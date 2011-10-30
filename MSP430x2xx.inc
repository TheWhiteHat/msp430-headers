;registers
PC equ r0
SP equ r1
SR equ r2

;sr values
V           equ #0x0100
SCG1        equ #0x0080
SCG0        equ #0x0040
OSCOFF      equ #0x0020
CPUOFF      equ #0x0010
GIE         equ #0x0008
N           equ #0x0004
Z           equ #0x0002
C           equ #0x0001

;wdt
WDTCTL      equ #0x0120 ;address of control register
WDTPW       equ #0x5A00 ;timer password
WDTHOLD     equ #0x0080 ;stop timer
WDTNMIES    equ #0x0040 ;NMI edge select
WDTNMI      equ #0x0020 ;NMI select
WDTTMSEL    equ #0x0010 ;Timer mode select
WDTCNTCL    equ #0x0008 ;counter clear
WDTSSEL     equ #0x0004 ;source select
WDTIS3      equ #0x0003 ;interval 3 (div 32768)
WDTIS2      equ #0x0002 ;interval 2 (div 8192)
WDTIS1      equ #0x0001 ;interval 1 (div 512)
WDTIS0      equ #0x0000 ;interval 0 (div 64) - doesn't do anything.

;clock module
DCOCTL      equ #0x0056 ;DCO control register
BCSCTL1     equ #0x0057
BCSCTL2     equ #0x0058
BCSCTL3     equ #0x0053
IE1         equ #0x0000
IFG1        equ #0x0002

;timer A
TACTL       equ #0x0160
TAR         equ #0x0170
TACCTL0     equ #0x0162
TACCR0      equ #0x0172
TACCTL1     equ #0x0164
TACCR1      equ #0x0174
TACCTL2     equ #0x0166
TACCR2      equ #0x0176
TAIV        equ #0x012E


