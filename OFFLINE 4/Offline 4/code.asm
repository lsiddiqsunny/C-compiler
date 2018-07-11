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
a6 dw ?
t7 dw ?
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
	MOV t3,0
	MOV BX,t3
	ADD BX,BX
	MOV AX,a5[BX]
	MOV t4,AX
	MOV AX,t4
	MOV i5,AX
	MOV AX,i5
	CALL OUTDEC
	INC i5
	MOV AX,i5
	CALL OUTDEC
	MOV AX,c5
	NOT AX
	MOV t5,AX
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
