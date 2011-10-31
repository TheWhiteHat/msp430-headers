; a sample program to demonstrate my headers
; I borrowed the code from https://gist.github.com/1297504
.include "MSP430g2231.inc"

.org FLASH
RESET:
        mov.w   #STACK,SP
        mov.w   #WDTPW|WDTHOLD,&WDTCTL
        bis.b   #PIN1, &P1DIR
        mov.w   #CCIE, &TACCTL0
        mov.w   #0xC000, &TACCR0
        mov.w   #TASSEL2|MC2,&TACTL
        bis.w   #CPUOFF|GIE,SR
        nop

TA0_ISR:
        xor.b #0x01, &P1OUT
        add.w #0xC000, &TACCR0
        reti
        
NON_ISR:
        bis.w #CPUOFF,SR
        reti
        
.org VECTORS
        dw NON_ISR    ;0xffe0 slot 0
        dw NON_ISR    ;0xffe2 slot 1
        dw NON_ISR    ;0xffe4 slot 2
        dw NON_ISR    ;0xffe6 slot 3
        dw NON_ISR    ;0xffe8 slot 4
        dw NON_ISR    ;0xffea slot 5
        dw NON_ISR    ;0xffec slot 6
        dw NON_ISR    ;0xffee slot 7
        dw NON_ISR    ;0xfff0 slot 8
        dw TA0_ISR    ;0xfff2 slot 9
        dw NON_ISR    ;0xfff4 slot 10
        dw NON_ISR    ;0xfff6 slot 11
        dw NON_ISR    ;0xfff8 slot 12
        dw NON_ISR    ;0xfffa slot 13
        dw NON_ISR    ;0xfffc slot 14
        dw RESET      ;0xfffe slot 15
