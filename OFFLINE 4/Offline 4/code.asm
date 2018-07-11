.MODEL SMALL
.STACK 100H
.DATA 
a2 dw ?
t0 dw ?
c5 dw ?
i5 dw ?
j5 dw ?
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
a6 dw ?
t16 dw ?
a5 dw 2 dup(?)
.CODE
func PROC
	PUSH ax
	PUSH bx 
	PUSH cx 
	PUSH dx
	POP dx
	POP cx
	POP bx
	POP ax
	ret
func ENDP
f PROC
	PUSH ax
	PUSH bx 
	PUSH cx 
	PUSH dx
	POP dx
	POP cx
	POP bx
	POP ax
	ret
f ENDP
g PROC
	PUSH ax
	PUSH bx 
	PUSH cx 
	PUSH dx
	POP dx
	POP cx
	POP bx
	POP ax
	ret
g ENDP
main PROC
    MOV AX,@DATA
	MOV DS,AX 
	MOV t1,0
	MOV BX,t1
	ADD BX,BX
	MOV t2,1
	MOV AX,t2
	MOV a5[BX],AX
	MOV t3,1
	MOV BX,t3
	ADD BX,BX
	MOV t4,1
	MOV AX,t4
	MOV a5[BX],AX
	MOV t5,0
	MOV BX,t5
	ADD BX,BX
	MOV AX,a5[BX]
	MOV t6,AX
	MOV AX,t6
	MOV i5,AX
	MOV t7,1
	MOV BX,t7
	ADD BX,BX
	MOV AX,a5[BX]
	MOV t8,AX
	MOV t9,5
	MOV AX,t8
	MOV BX,t9
	MOV DX,0
	DIV BX
	MOV t10, DX
	MOV AX,t10
	MOV j5,AX
	INC i5
	MOV AX,i5
	MOV BX,j5
	MUL BX
	MOV t11, AX
	MOV AX,t11
	MOV j5,AX
	MOV AX,j5
	CALL OUTDEC
	MOV t12,1
	MOV t13,2
	MOV AX,t12
	CMP AX,t13
	JL L0
	MOV t14,0
	JMP L1
L0:
	MOV t14,1
L1:
    MOV AH,4CH
	INT 21H
main ENDP
h PROC
	PUSH ax
	PUSH bx 
	PUSH cx 
	PUSH dx
	POP dx
	POP cx
	POP bx
	POP ax
	ret
h ENDP
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
