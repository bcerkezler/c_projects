        PAGE 60,80
        TITLE ornek____
        
STEK SEGMENT PARA STACK 'STK'
        DW 30 DUP(?)
STEK ENDS

DSG  SEGMENT PARA 'DTS'
DIZI DW 10, 11, 'A', 01110101B, 0E3H, 2, 3, 101, 270, 11
ELEMAN DW 10
T_SAY DW 0
C_SAY DW 0
DSG ENDS

CSG  SEGMENT PARA 'CODE'
        ASSUME CS:CSG, DS:DSG, SS:STEK

BASLA   PROC FAR

        PUSH DS
        XOR AX,AX
        PUSH AX

        MOV AX, DSG
        MOV DS, AX
	
	XOR SI, SI
	MOV CX, ELEMAN
	L1:
	MOV AX, DIZI[SI]
	SHR AX, 1
	ADC T_SAY,0
	ADD SI, 2
	LOOP L1
	MOV AX, ELEMAN
	SUB AX, T_SAY
	MOV C_SAY, AX


        RETF
BASLA   ENDP
CSG  ENDS
        END BASLA
