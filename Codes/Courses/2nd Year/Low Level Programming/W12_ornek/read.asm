        PAGE 60,80
        TITLE ornek____
        
CODESG  SEGMENT PARA 'CODE'
        ORG 100H
        ASSUME CS:CODESG, SS:CODESG, DS:CODESG, ES:CODESG

BASLA   PROC NEAR
	CALL READ
	RET
BASLA   ENDP
READ   PROC NEAR

        MOV AH, 01H

        INT 21H


        RET
READ   ENDP



MSG     DB 'DENEME', '$'

CODESG  ENDS
        END BASLA
