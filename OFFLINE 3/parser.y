%{
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include "1505069_SymbolTable.h"
//#define YYSTYPE SymbolInfo*


using namespace std;

int yyparse(void);
int yylex(void);
extern FILE *yyin;
FILE *fp;
FILE *logout= fopen("logout.txt","w");
FILE *error= fopen("error.txt","w");
FILE *parsertext= fopen("parsertext.txt","w");
	
	

SymbolTable *table;


void yyerror(char *s)
{

	
}



%}


%token IF ELSE FOR WHILE DO BREAK 
%token INT FLOAT CHAR DOUBLE VOID 
%token RETURN SWITCH CASE DEFAULT CONTINUE 
%token CONST_INT CONST_FLOAT CONST_CHAR 
%token ADDOP MULOP INCOP RELOP ASSIGNOP LOGICOP BITOP NOT 
%token LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD COMMA SEMICOLON 
%token STRING ID MAIN PRINTLN DECOP

%union 
{
        SymbolInfo* symbolinfo;
}



%%

start : program;

program : program unit {fprintf(parsertext,"program->program unit\n");}

	| unit {fprintf(parsertext,"program->unit\n");}
	;
	
unit : var_declaration {fprintf(parsertext,"unit->var_declaration\n");}
     | func_declaration {fprintf(parsertext,"unit->func_declaration\n");}
     | func_definition {fprintf(parsertext,"unit->func_definition\n");}
     ;
     
func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON {fprintf(parsertext,"func_declaration->type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n");}
		| type_specifier ID LPAREN RPAREN SEMICOLON {fprintf(parsertext,"func_declaration->type_specifier ID LPAREN RPAREN SEMICOLON\n");}
		;
		 
func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement func_definition {fprintf(parsertext,"func_definition->type_specifier ID LPAREN parameter_list RPAREN compound_statement func_definition\n");}
		| type_specifier ID LPAREN RPAREN compound_statement {fprintf(parsertext,"func_definition->type_specifier ID LPAREN RPAREN compound_statement\n");}
 		;				


parameter_list  : parameter_list COMMA type_specifier ID {fprintf(parsertext,"parameter_list->parameter_list COMMA type_specifier ID\n");}
		| parameter_list COMMA type_specifier {fprintf(parsertext,"parameter_list->parameter_list COMMA type_specifier\n");}
 		| type_specifier ID {fprintf(parsertext,"parameter_list->type_specifier ID\n");}
		| type_specifier {fprintf(parsertext,"parameter_list->type_specifier\n");}
 		;

 		
compound_statement : LCURL statements RCURL {fprintf(parsertext,"compound_statement->LCURL statements RCURL\n");}
 		    | LCURL RCURL {fprintf(parsertext,"compound_statement->LCURL RCURL\n");}
 		    ;
 		    
var_declaration : type_specifier declaration_list SEMICOLON {fprintf(parsertext,"var_declaration->type_specifier declaration_list SEMICOLON\n");}
 		 ;
 		 
type_specifier	: INT  {fprintf(parsertext,"type_specifier	: INT\n");}
 		| FLOAT  {fprintf(parsertext,"type_specifier	: FLOAT\n");}
 		| VOID  {fprintf(parsertext,"type_specifier	: VOID\n");}
 		;
 		
declaration_list : declaration_list COMMA ID {fprintf(parsertext,"declaration_list->declaration_list COMMA ID\n");}
 		  | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD {fprintf(parsertext,"declaration_list->declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n");}
 		  | ID {fprintf(parsertext,"declaration_list->ID\n");}
 		  | ID LTHIRD CONST_INT RTHIRD {fprintf(parsertext,"declaration_list->ID LTHIRD CONST_INT RTHIRD\n");}
 		  ;
 		  
statements : statement {fprintf(parsertext,"statements->statement\n");}
	   | statements statement {fprintf(parsertext,"statements->statements statement\n");}
	   ;
	   
statement : var_declaration {fprintf(parsertext,"statement -> var_declaration\n");}
	  | expression_statement {fprintf(parsertext,"statement -> expression_statement\n");}
	  | compound_statement {fprintf(parsertext,"statement->compound_statement\n");}
	  | FOR LPAREN expression_statement expression_statement expression RPAREN statement {fprintf(parsertext,"statement ->FOR LPAREN expression_statement expression_statement expression RPAREN statement\n");}
	  | IF LPAREN expression RPAREN statement {fprintf(parsertext,"statement->IF LPAREN expression RPAREN statement\n");}
	  | IF LPAREN expression RPAREN statement ELSE statement {fprintf(parsertext,"statement->IF LPAREN expression RPAREN statement ELSE statement\n");}
	  | WHILE LPAREN expression RPAREN statement {fprintf(parsertext,"statement->WHILE LPAREN expression RPAREN statement\n");}
	  | PRINTLN LPAREN ID RPAREN SEMICOLON {fprintf(parsertext,"statement->PRINTLN LPAREN ID RPAREN SEMICOLON\n");}
	  | RETURN expression SEMICOLON {fprintf(parsertext,"statement->RETURN expression SEMICOLON\n");}
	  ;
	  
expression_statement 	: SEMICOLON	{fprintf(parsertext,"expression_statement->SEMICOLON\n");}		
			| expression SEMICOLON {fprintf(parsertext,"expression_statement->expression SEMICOLON\n");}
			;
	  
variable : ID 		{fprintf(parsertext,"variable->ID\n");}
	 | ID LTHIRD expression RTHIRD  {fprintf(parsertext,"variable->ID LTHIRD expression RTHIRD\n");}
	 ;
	 
 expression : logic_expression	{fprintf(parsertext,"expression->logic_expression\n");}
	   | variable ASSIGNOP logic_expression {fprintf(parsertext,"expression->variable ASSIGNOP logic_expression\n");}	
	   ;
			
logic_expression : rel_expression 	{fprintf(parsertext,"logic_expression->rel_expression\n");}
		 | rel_expression LOGICOP rel_expression 		{fprintf(parsertext,"logic_expression->rel_expression LOGICOP rel_expression\n");}
		 ;
			
rel_expression	: simple_expression {fprintf(parsertext,"rel_expression->simple_expression\n");}
		| simple_expression RELOP simple_expression	 {fprintf(parsertext,"rel_expression->simple_expression RELOP simple_expression\n");}
		;
				
simple_expression : term {fprintf(parsertext,"simple_expression->term\n");}
		  | simple_expression ADDOP term {fprintf(parsertext,"simple_expression->simple_expression ADDOP term\n");}
		  ;
					
term :	unary_expression  {fprintf(parsertext,"term->unary_expression\n");}
     |  term MULOP unary_expression {fprintf(parsertext,"term->term MULOP unary_expression\n");}
     ;

unary_expression : ADDOP unary_expression  {fprintf(parsertext,"unary_expression->ADDOP unary_expression\n");}
		 | NOT unary_expression {fprintf(parsertext,"unary_expression->NOT unary_expression\n");}
		 | factor {fprintf(parsertext,"unary_expression->factor\n");}
		 ;
	
factor	: variable {fprintf(parsertext,"factor->variable\n");}
	| ID LPAREN argument_list RPAREN {fprintf(parsertext,"factor->ID LPAREN argument_list RPAREN\n");}
	| LPAREN expression RPAREN {fprintf(parsertext,"factor->LPAREN expression RPAREN\n");}
	| CONST_INT {fprintf(parsertext,"factor->CONST_INT\n");}
	| CONST_FLOAT {fprintf(parsertext,"factor->CONST_FLOAT\n");}
	| variable INCOP {fprintf(parsertext,"factor->variable INCOP\n");}
	| variable DECOP {fprintf(parsertext,"factor->variable DECOP\n");}
	;
	
argument_list : arguments  {fprintf(parsertext,"argument_list->arguments\n");}
			  ;
	
arguments : arguments COMMA logic_expression {fprintf(parsertext,"arguments->arguments COMMA logic_expression \n");}
	      | logic_expression {fprintf(parsertext,"arguments->logic_expression\n");}
	      ;
 %%
int main(int argc,char *argv[])
{

	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		return 0;
	}


	yyin=fp;
	yyparse();
	
	fclose(fp);
	fclose(logout);
	fclose(error);
	
	return 0;
}


