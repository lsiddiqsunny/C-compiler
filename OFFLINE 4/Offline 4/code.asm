.MODEL SMALL
.STACK 100H
.DATA 
f_return dw ?
c2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
a2 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
t6 dw ?
t7 dw ?
b2 dw ?
t8 dw ?
t9 dw ?
g_return dw ?
a3 dw ?
b3 dw ?
main_return dw ?
x4 dw ?
t10 dw ?
t11 dw ?
d4 dw 5 dup(?)
.CODE
f PROC
	PUSH AX
	PUSH BX 
	PUSH CX 
	PUSH DX
	PUSH c2
	PUSH a2
	PUSH b2
	MOV t0,1
	MOV AX,c2
	CMP AX,t0
	JE L0
	MOV t1,0
	JMP L1
L0:
	MOV t1,1
L1:
	MOV AX,t1
	CMP AX,0
	JE L2
	MOV t2,1
	MOV AX,t2
	MOV f_return,AX
	JMP LReturnf
L2:
	MOV t3,5
	MOV AX,t3
	MOV a2,AX
	MOV t4,1
	MOV AX,c2
	SUB AX,t4
	MOV t5,AX
	MOV AX,t5
	MOV c2,AX
	CALL f
	MOV AX,f_return
	MOV t6,AX
	MOV AX,a2
	ADD AX,t6
	MOV t7,AX
	MOV AX,t7
	MOV a2,AX
	MOV t8,3
	MOV AX,t8
	MOV b2,AX
	MOV AX,b2
	MOV BX,a2
	MUL BX
	MOV t9, AX
	MOV AX,t9
	MOV f_return,AX
	JMP LReturnf
LReturnf:
	POP b2
	POP a2
	POP c2
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
	PUSH a3
	PUSH b3
LReturng:
	POP b3
	POP a3
	POP DX
	POP CX
	POP BX
	POP AX
	ret
g ENDP
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t10,3
	MOV AX,t10
	MOV c2,AX
	CALL f
	MOV AX,f_return
	MOV t11,AX
	MOV AX,t11
	MOV x4,AX
	MOV AX,x4
	CALL OUTDEC
LReturnmain:
	MOV AH,4CH
	INT 21H
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
