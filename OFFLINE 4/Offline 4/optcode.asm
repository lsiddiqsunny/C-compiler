.MODEL SMALL
.STACK 100H
.DATA 
main_return dw ?
a2 dw ?
b2 dw ?
i2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
t6 dw ?
t7 dw ?
.CODE
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t0,0
	MOV AX,t0
	MOV b2,AX
	MOV t1,0
	MOV AX,t1
	MOV i2,AX
L4:
	MOV t2,4
	MOV AX,i2
	CMP AX,t2
	JL L0
	MOV t3,0
	JMP L1
L0:
	MOV t3,1
L1:
	MOV AX,t3
	CMP AX,0
	JE L5
	MOV t5,3
	MOV AX,t5
	MOV a2,AX
L2:
	MOV AX,a2
	MOV t6,AX
	DEC a2
	MOV AX,t6
	CMP AX,0
	JE L3
	MOV AX,b2
	MOV t7,AX
	INC b2
	JMP L2
L3:
	MOV AX,i2
	MOV t4,AX
	INC i2
	JMP L4
L5:
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
