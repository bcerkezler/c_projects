        PAGE 60,80
        TITLE ornek____
    
EXTRN GCD_PROC:FAR

STACKSG SEGMENT PARA STACK 'STACK'
        DW 32 DUP(?)
STACKSG ENDS

DATASG  SEGMENT PARA 'DATA'
ASAYISI    DW 13
BSAYISI    DW 15
GCD        DW ?
DATASG ENDS

CODESG  SEGMENT PARA 'CODE'
        ASSUME CS:CODESG, DS:DATASG, SS:STACKSG

BASLA   PROC FAR
        PUSH DS
        XOR AX,AX
        PUSH AX

        MOV AX, DATASG
        MOV DS, AX
        
        MOV AX, ASAYISI
        MOV DX, BSAYISI

        CALL GCD_PROC
        MOV GCD, AX

        RETF
BASLA   ENDP


CODESG  ENDS
        END BASLA