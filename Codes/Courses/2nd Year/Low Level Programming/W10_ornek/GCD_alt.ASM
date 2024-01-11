        PAGE 60,80
        TITLE ornek____

PUBLIC GCD_PROC  

CDESG  SEGMENT PARA 'CODE'
        ASSUME CS:CDESG

;GCD_PROC input AX, DX
;GCD_PROC output AX
GCD_PROC PROC FAR

        CMP AX, DX
        JAE DEVAM
        XCHG AX,DX
	


DEVAM:  CMP DX, 0
        JA RECUR
        JMP EXIT
RECUR:  MOV BX, DX
        XOR DX, DX
        DIV BX
        MOV AX, BX
        CALL GCD_PROC  
EXIT:   RETF
GCD_PROC ENDP

CDESG  ENDS
        END