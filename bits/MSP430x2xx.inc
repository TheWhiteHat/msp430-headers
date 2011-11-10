; MSP430x2xx Family (slau144h)
; Note: CPUX(4) extensions are not supported.

; Address Space (1.4)
; MMEM DS: Main Memory start
; ERAM DS: byte after last RAM address
IMEM equ 0x1000 ; Information Memory start (7.2)
RAM equ 0x0200 ; RAM start address (1.4.2)

; CPU Registers (3.2)
PC  equ r0 ; Program Counter (3.2.1)
SP  equ r1 ; Stack Pointer (3.2.2)
SR  equ r2 ; Status Register (3.2.3)
CG1 equ r2 ; Constant Generator 1 (3.2.4)
CG2 equ r3 ; Constant Generator 2

; Status Register Bits (3.2.3)
V      equ 0x0100 ; Overflow
SCG1   equ 0x0080 ; System clock generator 1
SCG0   equ 0x0040 ; System clock generator 0
OSCOFF equ 0x0020 ; Oscilator off
CPUOFF equ 0x0010 ; CPU off
GIE    equ 0x0008 ; General Interrupt Enable
N      equ 0x0004 ; Negative bit
Z      equ 0x0002 ; Zero bit
C      equ 0x0001 ; Carry bit

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
WDTIS0      equ 0x0000 ;interval 0 (div 64)

;clock module
DCOCTL      equ 0x0056 ;DCO control register
BCSCTL1     equ 0x0057
BCSCTL2     equ 0x0058
BCSCTL3     equ 0x0053
IE1         equ 0x0000
IFG1        equ 0x0002

;timer A0
#ifdef TA0
TA0R         equ 0x0170
TA0CCR0      equ 0x0172
TA0CCR1      equ 0x0174
TA0CCR2      equ 0x0176
TA0IV        equ 0x012E
#endif

;timer A1
#ifdef TA1
TA1R         equ 0x0190
TA1CCR0      equ 0x0192
TA1CCR1      equ 0x0194
TA1CCR2      equ 0x0196
TA1IV        equ 0x011E
#endif

;timer config
    ;register
#ifdef TA0
TA0CTL       equ 0x0160
#endif
#ifdef TA1
TA1CTL       equ 0x0180
#endif

    ;flags
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

;capture compare
    ;registers
#ifdef TA0
TA0CCTL0     equ 0x0162
TA0CCTL1     equ 0x0164
TA0CCTL2     equ 0x0166
#endif
#ifdef TA1
TA1CCTL0     equ 0x0182
TA1CCTL1     equ 0x0184
TA1CCTL2     equ 0x0186
#endif
    ;flags
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
;P1
#ifdef P1
P1IN        equ 0x0020
P1OUT       equ 0x0021
P1DIR       equ 0x0022
P1IFG       equ 0x0023
P1IES       equ 0x0024
P1IE        equ 0x0025
P1SEL       equ 0x0026
P1SEL2      equ 0x0041
P1REN       equ 0x0027
#endif
#ifdef P2
P2IN        equ 0x0028
P2OUT       equ 0x0029
P2DIR       equ 0x002A
P2IFG       equ 0x002B
P2IES       equ 0x002C
P2IE        equ 0x002D
P2SEL       equ 0x002E
P2SEL2      equ 0x0042
P2REN       equ 0x002F
#endif

;pins
PIN7        equ 0x80
PIN6        equ 0x40
PIN5        equ 0x20
PIN4        equ 0x10
PIN3        equ 0x08
PIN2        equ 0x04
PIN1        equ 0x02
PIN0        equ 0x01
