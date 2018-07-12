.MODEL SMALL
.STACK 100H
.DATA 
f_return dw ?
a2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
g_return dw ?
a3 dw ?
b3 dw ?
x3 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
main_return dw ?
a4 dw ?
b4 dw ?
t6 dw ?
t7 dw ?
t8 dw ?
t9 dw ?
.CODE
f PROC
	PUSH AX
	PUSH BX 
	PUSH CX 
	PUSH DX
	MOV t0,2
	MOV AX,t0
	MOV BX,a2
	MUL BX
	MOV t1, AX
	MOV AX,t1
	MOV f_return,AX
	JMP LReturnf
	MOV t2,9
	MOV AX,t2
	MOV a2,AX
LReturnf:
	POP DX
	POP CX
	POP BX
	POP AX
	ret
f ENDP
g PROC
	PUSH AX
	PUSH BX 
	PUSH CX 
	PUSH DX
	PUSH a2
	MOV AX,a3
	MOV a2,AX
	CALL f
	POP a2
	MOV AX,f_return
	MOV t3,AX
	ADD AX,a3
	MOV t4,AX
	ADD AX,b3
	MOV t5,AX
	MOV x3,AX
	MOV g_return,AX
	JMP LReturng
LReturng:
	POP DX
	POP CX
	POP BX
	POP AX
	ret
g ENDP
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t6,1
	MOV AX,t6
	MOV a4,AX
	MOV t7,2
	MOV AX,t7
	MOV b4,AX
	PUSH a3
	PUSH b3
	MOV AX,a4
	MOV a3,AX
	MOV AX,b4
	MOV b3,AX
	CALL g
	POP b3
	POP a3
	MOV AX,g_return
	MOV t8,AX
	MOV a4,AX
	CALL OUTDEC
	MOV t9,0
	MOV AX,t9
	MOV main_return,AX
	JMP LReturnmain
LReturnmain:
	MOV AH,4CH
	INT 21H
main ENDP
OUTDEC PROC  
    PUSH AX 
    PUSH BX 
    PUSH CX 
    PUSH DX  
    CMP AX,0 
    JGE BEGIN 
    PUSH AX 
    MOV DL,'-' 
    MOV AH,2 
    INT 21H 
    POP AX 
    NEG AX 
    
    BEGIN: 
    XOR CX,CX 
    MOV BX,10 
    
    REPEAT: 
    XOR DX,DX 
    DIV BX 
    PUSH DX 
    INC CX 
    OR AX,AX 
    JNE REPEAT 
    MOV AH,2 
    
    PRINT_LOOP: 
    POP DX 
    ADD DL,30H 
    INT 21H 
    LOOP PRINT_LOOP 
    
    MOV AH,2
    MOV DL,10
    INT 21H
    
    MOV DL,13
    INT 21H
	
    POP DX 
    POP CX 
    POP BX 
    POP AX 
    ret 
OUTDEC ENDP 
END MAIN
