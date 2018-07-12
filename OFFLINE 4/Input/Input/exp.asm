.MODEL SMALL
.STACK 100H
.DATA 
main_return dw ?
a2 dw ?
b2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
t6 dw ?
t7 dw ?
t8 dw ?
t9 dw ?
t10 dw ?
t11 dw ?
t12 dw ?
t13 dw ?
t14 dw ?
t15 dw ?
t16 dw ?
c2 dw 3 dup(?)
.CODE
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t0,1
	MOV t1,2
	MOV t2,3
	MOV AX,t1
	ADD AX,t2
	MOV t3,AX
	MOV AX,t0
	MOV BX,t3
	MUL BX
	MOV t4, AX
	MOV t5,3
	MOV AX,t4
	MOV BX,t5
	MOV DX,0
	DIV BX
	MOV t6, DX
	MOV AX,t6
	MOV a2,AX
	MOV t7,1
	MOV t8,5
	MOV AX,t7
	CMP AX,t8
	JL L0
	MOV t9,0
	JMP L1
L0:
	MOV t9,1
L1:
	MOV AX,t9
	MOV b2,AX
	MOV t10,0
	MOV BX,t10
	ADD BX,BX
	MOV t11,2
	MOV AX,t11
	MOV c2[BX],AX
	MOV AX,a2
	CMP AX,0
	JE L3
	MOV AX,b2
	CMP AX,0
	JE L3
L2:
	MOV t12,1
	JMP L4
L3:
	MOV t12,0
L4:
	MOV AX,t12
	CMP AX,0
	JE L5
	INC c2
	JMP L6
L5:
	MOV t14,1
	MOV BX,t14
	ADD BX,BX
	MOV t15,0
	MOV BX,t15
	ADD BX,BX
	MOV AX,c2[BX]
	MOV t16,AX
	MOV AX,t16
	MOV c2[BX],AX
L6:
	MOV AX,a2
	CALL OUTDEC
	MOV AX,b2
	CALL OUTDEC
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
