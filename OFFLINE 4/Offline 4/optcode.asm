.MODEL SMALL
.STACK 100H
.DATA 
main_return dw ?
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
a2 dw 3 dup(?)
.CODE
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t0,0
	MOV BX,t0
	ADD BX,BX
	MOV t1,5
	MOV AX,t1
	MOV a2[BX],AX
	MOV t3,AX
	MOV AX,a2[BX]
	INC AX
	MOV a2[BX],AX
	MOV AX,t3
	MOV b2,AX
	CALL OUTDEC
	MOV t4,0
	MOV BX,t4
	ADD BX,BX
	MOV AX,a2[BX]
	MOV t5,AX
	MOV b2,AX
	CALL OUTDEC
	MOV t6,1
	MOV BX,t6
	ADD BX,BX
	MOV t7,2
	MOV AX,t7
	MOV a2[BX],AX
	MOV t8,1
	MOV BX,t8
	ADD BX,BX
	MOV AX,a2[BX]
	MOV t9,AX
	MOV b2,AX
	CALL OUTDEC
	MOV t10,2
	MOV BX,t10
	ADD BX,BX
	MOV t11,3
	MOV AX,t11
	MOV a2[BX],AX
	MOV t12,2
	MOV BX,t12
	ADD BX,BX
	MOV AX,a2[BX]
	MOV t13,AX
	MOV b2,AX
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
