        PAGE 60,80
        TITLE ornek____

PUBLIC _GCD_PROC  

CDESG  SEGMENT PARA 'CODE'
        ASSUME CS:CDESG

_GCD_PROC PROC FAR

        PUSH BP
        MOV BP, SP
	PUSH AX
	PUSH BX
	PUSH DX
; AX<-[SS:(BP+6)]
        MOV BX, [BP+6]
        MOV AX, [BP+8]
        CMP AX, BX
        JAE TEKRAR
        XCHG AX, BX
TEKRAR:	CMP BX, 0
        JA L1
        JMP EXIT 
L1:     XOR DX, DX
        DIV BX
        MOV AX, BX
        MOV BX, DX
        JMP TEKRAR 

EXIT:   
	MOV [BP+8], AX
	POP DX
	POP BX
	POP AX
	POP BP
        RETF 2

_GCD_PROC ENDP

CDESG  ENDS
        END