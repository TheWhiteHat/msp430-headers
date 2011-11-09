// Start of RAM
#define SRAM 0x0200
// End of RAM
#define ERAM 0x0280
RAM             equ 0x0200
STACK           equ 0x0280
;interrupt vectors
VECTORS         equ 0xFFE0
RSTIFG          equ 0xFFFE
NMIIFG          equ 0xFFFC
T1_CCIFG        equ 0xFFFA
T1_TAIFG        equ 0xFFF8
CAIFG           equ 0xFFF6
WDTIFG          equ 0xFFF4
T0_CCIFG        equ 0xFFF2
T0_TAIFG        equ 0xFFF0
UC0RXIFG        equ 0xFFEE
UC0TXIFG        equ 0xFFEC
ADC10IFG        equ 0xFFEA
P2INT           equ 0xFFE6
P1INT           equ 0xFFE4
#define P1
#define P2
#define ADC10BIT
#define USI
#define TA0
#define TEMP
.include "MSP430x2xx.inc"
