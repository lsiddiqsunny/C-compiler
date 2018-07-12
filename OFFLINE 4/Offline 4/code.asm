.MODEL SMALL
.STACK 100H
.DATA 
c2 dw ?
i2 dw ?
j2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
t6 dw ?
.CODE
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t0,5
	MOV AX,t0
	MOV j2,AX
	MOV t1,0
	MOV AX,t1
	MOV c2,AX
	MOV t2,0
	MOV AX,t2
	MOV i2,AX
	MOV AX,i2
	CMP AX,j2
	JL L0
	MOV t3,0
	JMP L1
L0:
	MOV t3,1
L1:
	MOV AX,t3
	CMP AX,0
JE L2
	MOV t4,5
	MOV AX,t4
	MOV c2,AX
	JMP L3
L2:
	MOV t5,10
	MOV AX,t5
	MOV c2,AX
L3:
	MOV AX,c2
	CALL OUTDEC
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
