        PAGE 60,80
        TITLE ornek____
        
STEK SEGMENT PARA STACK 'STK'
        DW 30 DUP(?)
STEK ENDS

DSG  SEGMENT PARA 'DTS'
SAYI1    DW 0ABCDH
SAYI2	 DW 0CDEFH
SONUC	 DD 0
DSG ENDS

CSG  SEGMENT PARA 'CODE'
        ASSUME CS:CSG, DS:DSG, SS:STEK

BASLA   PROC FAR

        PUSH DS
        XOR AX,AX
        PUSH AX

        MOV AX, DSG
        MOV DS, AX
	
	LEA BX, SONUC
	MOV AX, SAYI1
	ADD AX, SAYI2
	MOV [BX], AX
	ADC WORD PTR [BX+2],0
        RETF
BASLA   ENDP
CSG  ENDS
        END BASLA
