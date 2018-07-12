.MODEL SMALL
.STACK 100H
.DATA 
h_return dw ?
a2 dw ?
b2 dw ?
t0 dw ?
t1 dw ?
t2 dw ?
c2 dw ?
t3 dw ?
t4 dw ?
t5 dw ?
main_return dw ?
c3 dw ?
i3 dw ?
j3 dw ?
t6 dw ?
t7 dw ?
t8 dw ?
t9 dw ?
.CODE
h PROC
	PUSH AX
	PUSH BX 
	PUSH CX 
	PUSH DX
	MOV t0,1
	MOV AX,b2
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
	NEG AX
	MOV t2,AX
	MOV h_return,AX
	JMP LReturnh
L2:
	MOV AX,a2
	ADD AX,b2
	MOV t3,AX
	MOV AX,a2
	SUB AX,b2
	MOV t4,AX
	PUSH a2
	PUSH b2
	MOV AX,t3
	MOV a2,AX
	MOV AX,t4
	MOV b2,AX
	CALL h
	POP b2
	POP a2
	MOV AX,h_return
	MOV t5,AX
	MOV c2,AX
	CALL OUTDEC
	MOV AX,a2
	CALL OUTDEC
	MOV AX,b2
	CALL OUTDEC
	MOV AX,c2
	MOV h_return,AX
	JMP LReturnh
LReturnh:
	POP DX
	POP CX
	POP BX
	POP AX
	ret
h ENDP
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t6,6
	MOV AX,t6
	MOV i3,AX
	MOV t7,5
	MOV AX,t7
	MOV j3,AX
	PUSH a2
	PUSH b2
	MOV AX,i3
	MOV a2,AX
	MOV AX,j3
	MOV b2,AX
	CALL h
	POP b2
	POP a2
	MOV AX,h_return
	MOV t8,AX
	MOV c3,AX
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
