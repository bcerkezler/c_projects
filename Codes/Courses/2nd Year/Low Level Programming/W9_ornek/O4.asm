
CODESG  SEGMENT PARA 'CODE'
        ORG 100H
        ASSUME CS:CODESG, SS:CODESG, DS:CODESG, ES:CODESG
BILGI:  JMP BASLA
X_DIZI DW 28, 0FFFFH, 1, 100, 511
Y_DIZI DW 12, 0FFFH, 28, 25, 3
ELEMAN DW 5
GCD_DIZI DW 5 DUP(0)

BASLA   PROC NEAR
	
	XOR SI, SI
	MOV CX, ELEMAN
L1:	
	MOV AX, X_DIZI [SI]
	MOV DX, Y_DIZI [SI]
	CMP AX, DX
	JAE L2
	XCHG AX, DX	
L2:
	CMP DX,0
	JE L3
	MOV BX, DX ; BX<-y
	XOR DX, DX
	DIV BX; 0:AX/DX; DX<-AX%DX; 
	MOV AX, BX
	JMP L2

L3:
	MOV GCD_DIZI[SI], AX
	ADD SI, 2
	LOOP L1

	
        RET
BASLA   ENDP

CODESG  ENDS
        END BILGI