        PAGE 60,80
        TITLE ornek____
READCM 	MACRO
	MOV AH, 01H ; INT 21H, 01H fonksiyonuyle AL'ye deger okur
        INT 21H
	ENDM

WRITECM	MACRO
	MOV AH, 02H ; INT 21H, 02H fonksiyonunda DL'deki degeri yazdirir
        INT 21H
	ENDM

CODESG  SEGMENT PARA 'CODE'
        ORG 100H
        ASSUME CS:CODESG, SS:CODESG, DS:CODESG, ES:CODESG

BASLA   PROC NEAR

	READCM 
	MOV DL, AL
	WRITECM	


        RET
BASLA   ENDP

CODESG  ENDS
        END BASLA
