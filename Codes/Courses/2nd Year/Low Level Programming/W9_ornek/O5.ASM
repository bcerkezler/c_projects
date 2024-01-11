; işaretsiz sayılardan oluşan word tipindeki 500 elemanlı dizinin ortalamasını bulam COM tipi Assembly kodunu yazınız
CODESG  SEGMENT PARA 'CODE'
        ORG 100H
        ASSUME CS:CODESG, SS:CODESG, DS:CODESG, ES:CODESG
BILGI:  JMP BASLA
DIZI	DW 0FFFFH, 100, 28, 1, 0, 495 DUP (256)
ELEMAN	DW 500
ORT	DW 0

BASLA   PROC NEAR

	LEA SI, DIZI
	MOV CX, ELEMAN
	XOR AX, AX
	XOR DX, DX
L1:	
	ADD AX, [SI]
	ADC DX, 0

	ADD SI, 2
	LOOP L1
	; DX:AX toplam
	MOV BX, ELEMAN
	DIV BX; DX<- DX:AX%BX, AX <-DX:AX/BX
	MOV ORT, AX
	
        RET
BASLA   ENDP
CODESG  ENDS
        END BILGI
