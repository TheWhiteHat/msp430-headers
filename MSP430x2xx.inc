;registers
PC equ r0
SP equ r1
SR equ r2

;sr values
V           equ 0x0100 ;overflow
SCG1        equ 0x0080 ;clock generator 1
SCG0        equ 0x0040 ;clock generator 0
OSCOFF      equ 0x0020 ;oscillator off
CPUOFF      equ 0x0010 ;turn off cpu
GIE         equ 0x0008 ;general interrupt enable
N           equ 0x0004 ;negative
Z           equ 0x0002 ;zero
C           equ 0x0001 ;carry

;wdt
WDTCTL      equ 0x0120 ;address of control register
WDTPW       equ 0x5A00 ;timer password
WDTHOLD     equ 0x0080 ;stop timer
WDTNMIES    equ 0x0040 ;NMI edge select
WDTNMI      equ 0x0020 ;NMI select
WDTTMSEL    equ 0x0010 ;Timer mode select
WDTCNTCL    equ 0x0008 ;counter clear
WDTSSEL     equ 0x0004 ;source select
WDTIS3      equ 0x0003 ;interval 3 (div 32768)
WDTIS2      equ 0x0002 ;interval 2 (div 8192)
WDTIS1      equ 0x0001 ;interval 1 (div 512)
WDTIS0      equ 0x0000 ;interval 0 (div 64) - doesn't do anything.

;clock module
DCOCTL      equ 0x0056 ;DCO control register
BCSCTL1     equ 0x0057
BCSCTL2     equ 0x0058
BCSCTL3     equ 0x0053
IE1         equ 0x0000
IFG1        equ 0x0002

;timer A
TACTL       equ 0x0160
TAR         equ 0x0170
TACCTL0     equ 0x0162
TACCR0      equ 0x0172
TACCTL1     equ 0x0164
TACCR1      equ 0x0174
TACCTL2     equ 0x0166
TACCR2      equ 0x0176
TAIV        equ 0x012E

;timer config
TASSEL3     equ 0x0300
TASSEL2     equ 0x0200
TASSEL1     equ 0x0100
TASSEL0     equ 0x0000
ID3         equ 0x00A0
ID2         equ 0x0080
ID1         equ 0x0040
ID0         equ 0x0000
MC3         equ 0x0030
MC2         equ 0x0020
MC1         equ 0x0010
MC0         equ 0x0000
TACLR       equ 0x0004
TAIE        equ 0x0002
TAIFG       equ 0x0001

;capture compare modes
CM3         equ 0xC000
CM2         equ 0x8000
CM1         equ 0x4000
CM0         equ 0x0000
CCIS3       equ 0x3000
CCIS2       equ 0x2000
CCIS1       equ 0x1000
CCIS0       equ 0x0000
SCS         equ 0x0800
SCCI        equ 0x0400
CAP         equ 0x0100
OUTMOD7     equ 0x00E0
OUTMOD6     equ 0x00C0
OUTMOD5     equ 0x00A0
OUTMOD4     equ 0x0080
OUTMOD3     equ 0x0060
OUTMOD2     equ 0x0040
OUTMOD1     equ 0x0020
OUTMOD0     equ 0x0000
CCIE        equ 0x0010
CCI         equ 0x0008
OUT         equ 0x0004
COV         equ 0x0002
CCIFG       equ 0x0001

;port stuff
P1OUT       equ 0x0021
P1DIR       equ 0x0022
PIN8        equ 0x80
PIN7        equ 0x40
PIN6        equ 0x20
PIN5        equ 0x10
PIN4        equ 0x08
PIN3        equ 0x04
PIN2        equ 0x02
PIN1        equ 0x01
