.MODEL SMALL
.STACK 100H
.DATA 
func PROC
func ENDP
f PROC
f ENDP
g PROC
g ENDP
main PROC
    MOV AX,@DATA
	MOV DS,AX 
    MOV AH,4CH
	INT 21H
main ENDP
h PROC
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
    
    POP DX 
    POP CX 
    POP BX 
    POP AX 
    RET 
OUTDEC ENDP 
END MAIN
