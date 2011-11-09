/*
 * MSP430x2xx Family (slau144h)
 * This header assumes that device specific values have already been defined.
 * Each set of definitions will be minimally documented with a citation for the
 * section of the TI document of the same name as this header. Versions cited as
 * DS are device specific, and are defined in another header.
 * 
 * At this time CPUX(4) chips are not supported.
 */

/*
 * Address Space (1.4)
 * The MSP430 architecture has one address space shared with special function
 * registers, peripherals, RAM, and Flash/ROM memory. Code access are always
 * performed on even addresses. Data can be accessed as bytes or words.
 *
 * MMEM (DS): Main Memory start address
 * IMEM (7.2): Information Memory start address
 * SRAM (1.4.2): RAM start address
 * ERAM (DS): RAM end address
 */
#define IMEM 0x1000
#define SRAM 0x0200

/*
 * CPU Registers (3.2)
 * The CPU incorporates sixteen 16-bit registers. R0, R1, R2, and R3 have
 * dedicated functions. R4 to R15 are working registers for general use.
 *
 * PC (3.2.1): Program Counter
 * SP (3.2.2): Stack Pointer
 * SR (3.2.3): Status Register
 * CGX (3.2.4): Constant Generator
 */
#define PC r0
#define SP r1
#define SR r2
#define CG1 r2
#define CG2 r3

/*
 * Status Register Bits (3.2.3)
 * V: Overflow.
 * SGC1: System clock generator 1.
 * SGC0: System clock generator 0.
 * OSCOFF: Oscilator off.
 * CPUOFF: CPU off.
 * GIE: General Interrupt Enable
 * N: Negative bit.
 * Z: Zero bit.
 * C: Carry bit.
 */
#define V 0x0100
#define SCG1 0x0080
#define SCG0 0x0040
#define OSCOFF 0x0020
#define CPUOFF 0x0010
#define GIE 0x0008
#define N 0x0004
#define Z 0x0002
#define C 0x0001

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
