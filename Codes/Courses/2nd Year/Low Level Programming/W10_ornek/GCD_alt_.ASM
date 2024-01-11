        PAGE 60,80
        TITLE ornek____

PUBLIC GCD_PROC  

CDESG  SEGMENT PARA 'CODE'
        ASSUME CS:CDESG

;GCD_PROC input AX, DX
;GCD_PROC output AX
GCD_PROC PROC FAR

        CMP AX, DX
        JAE L2
        XCHG AX,DX
	
L2:
	CMP DX,0
	JE L3
	MOV BX, DX ; BX<-y
	XOR DX, DX
	DIV BX; 0:AX/DX; DX<-AX%DX; 
	MOV AX, BX
	JMP L2

L3:	
	RETF


;DEVAM:  CMP DX, 0
;        JA RECUR
;        JMP EXIT
;RECUR:  MOV BX, DX
;        XOR DX, DX
;        DIV BX
;        MOV AX, BX
;        CALL GCD_PROC  
;EXIT:   RETF
GCD_PROC ENDP

CDESG  ENDS
        END