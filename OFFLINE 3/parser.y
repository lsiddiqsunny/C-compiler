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
FILE *logout;
FILE *error;
FILE *parsertext;
int line_count=1;
int error_count=0;


SymbolTable *table=new SymbolTable(30,logout);


void yyerror(char *s)
{
	fprintf(stderr,"Line no %d : %s\n",line_count,s);

}



%}


%token IF ELSE FOR WHILE DO BREAK
%token INT FLOAT CHAR DOUBLE VOID
%token RETURN SWITCH CASE DEFAULT CONTINUE
%token CONST_INT CONST_FLOAT CONST_CHAR
%token ADDOP MULOP INCOP RELOP ASSIGNOP LOGICOP BITOP NOT
%token LPAREN RPAREN LCURL RCURL LTHIRD RTHIRD COMMA SEMICOLON
%token STRING ID PRINTLN DECOP

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%union
{
        SymbolInfo* symbolinfo;
}



%%

start : program {fprintf(parsertext,"Line at %d : start>program unit\n\n",line_count);}
	  ;

program : program unit {fprintf(parsertext,"Line at %d : program->program unit\n\n",line_count);}

	| unit {fprintf(parsertext,"Line at %d : program->unit\n\n",line_count);}
	;

unit : var_declaration {fprintf(parsertext,"Line at %d : unit->var_declaration\n\n",line_count);}
     | func_declaration {fprintf(parsertext,"Line at %d : unit->func_declaration\n\n",line_count);}
     | func_definition {fprintf(parsertext,"Line at %d : unit->func_definition\n\n",line_count);}
     ;

func_declaration : type_specifier ID LPAREN parameter_list RPAREN SEMICOLON {fprintf(parsertext,"Line at %d : func_declaration->type_specifier ID LPAREN parameter_list RPAREN SEMICOLON\n\n",line_count);}
		| type_specifier ID LPAREN RPAREN SEMICOLON {fprintf(parsertext,"Line at %d : func_declaration->type_specifier ID LPAREN RPAREN SEMICOLON\n\n",line_count);}
		;

func_definition : type_specifier ID LPAREN parameter_list RPAREN compound_statement func_definition {fprintf(parsertext,"Line at %d : func_definition->type_specifier ID LPAREN parameter_list RPAREN compound_statement func_definition\n\n",line_count);}
		| type_specifier ID LPAREN RPAREN compound_statement {fprintf(parsertext,"Line at %d : func_definition->type_specifier ID LPAREN RPAREN compound_statement\n\n",line_count);}
 		;


parameter_list  : parameter_list COMMA type_specifier ID {fprintf(parsertext,"Line at %d : parameter_list->parameter_list COMMA type_specifier ID\n\n",line_count);}
		| parameter_list COMMA type_specifier {fprintf(parsertext,"Line at %d : parameter_list->parameter_list COMMA type_specifier\n\n",line_count);}
 		| type_specifier ID {fprintf(parsertext,"Line at %d : parameter_list->type_specifier ID\n\n",line_count);}
		| type_specifier {fprintf(parsertext,"Line at %d : parameter_list->type_specifier\n\n",line_count);}
 		;


compound_statement : LCURL statements RCURL {fprintf(parsertext,"Line at %d : compound_statement->LCURL statements RCURL\n\n",line_count);}
 		    | LCURL RCURL {fprintf(parsertext,"Line at %d : compound_statement->LCURL RCURL\n\n",line_count);}
 		    ;

var_declaration : type_specifier declaration_list SEMICOLON {fprintf(parsertext,"Line at %d : var_declaration->type_specifier declaration_list SEMICOLON\n\n",line_count);}
 		 ;

type_specifier	: INT  {fprintf(parsertext,"Line at %d : type_specifier	: INT\n\n",line_count);}
 		| FLOAT  {fprintf(parsertext,"Line at %d : type_specifier	: FLOAT\n\n",line_count);}
 		| VOID  {fprintf(parsertext,"Line at %d : type_specifier	: VOID\n\n",line_count);}
 		;

declaration_list : declaration_list COMMA ID {fprintf(parsertext,"Line at %d : declaration_list->declaration_list COMMA ID\n\n",line_count);}
 		  | declaration_list COMMA ID LTHIRD CONST_INT RTHIRD {fprintf(parsertext,"Line at %d : declaration_list->declaration_list COMMA ID LTHIRD CONST_INT RTHIRD\n\n",line_count);}
 		  | ID {fprintf(parsertext,"Line at %d : declaration_list->ID\n\n",line_count);}
 		  | ID LTHIRD CONST_INT RTHIRD {fprintf(parsertext,"Line at %d : declaration_list->ID LTHIRD CONST_INT RTHIRD\n\n",line_count);}
 		  ;

statements : statement {fprintf(parsertext,"Line at %d : statements->statement\n\n",line_count);}
	   | statements statement {fprintf(parsertext,"Line at %d : statements->statements statement\n\n",line_count);}
	   ;

statement : var_declaration {fprintf(parsertext,"Line at %d : statement -> var_declaration\n\n",line_count);}
	  | expression_statement {fprintf(parsertext,"Line at %d : statement -> expression_statement\n\n",line_count);}
	  | compound_statement {fprintf(parsertext,"Line at %d : statement->compound_statement\n\n",line_count);}
	  | FOR LPAREN expression_statement expression_statement expression RPAREN statement {fprintf(parsertext,"Line at %d : statement ->FOR LPAREN expression_statement expression_statement expression RPAREN statement\n\n",line_count);}
	  | IF LPAREN expression RPAREN statement %prec LOWER_THAN_ELSE {fprintf(parsertext,"Line at %d : statement->IF LPAREN expression RPAREN statement\n\n",line_count);}
	  | IF LPAREN expression RPAREN statement ELSE statement {fprintf(parsertext,"Line at %d : statement->IF LPAREN expression RPAREN statement ELSE statement\n\n",line_count);}
	  | WHILE LPAREN expression RPAREN statement {fprintf(parsertext,"Line at %d : statement->WHILE LPAREN expression RPAREN statement\n\n",line_count);}
	  | PRINTLN LPAREN ID RPAREN SEMICOLON {fprintf(parsertext,"Line at %d : statement->PRINTLN LPAREN ID RPAREN SEMICOLON\n\n",line_count);}
	  | RETURN expression SEMICOLON {fprintf(parsertext,"Line at %d : statement->RETURN expression SEMICOLON\n\n",line_count);}
	  ;

expression_statement 	: SEMICOLON	{fprintf(parsertext,"Line at %d : expression_statement->SEMICOLON\n\n",line_count);}
			| expression SEMICOLON {fprintf(parsertext,"Line at %d : expression_statement->expression SEMICOLON\n\n",line_count);}
			;

variable : ID 		{fprintf(parsertext,"Line at %d : variable->ID\n\n",line_count);}
	 | ID LTHIRD expression RTHIRD  {fprintf(parsertext,"Line at %d : variable->ID LTHIRD expression RTHIRD\n\n",line_count);}
	 ;

 expression : logic_expression	{fprintf(parsertext,"Line at %d : expression->logic_expression\n\n",line_count);}
	   | variable ASSIGNOP logic_expression {fprintf(parsertext,"Line at %d : expression->variable ASSIGNOP logic_expression\n\n",line_count);}
	   ;

logic_expression : rel_expression 	{fprintf(parsertext,"Line at %d : logic_expression->rel_expression\n\n",line_count);}
		 | rel_expression LOGICOP rel_expression 		{fprintf(parsertext,"Line at %d : logic_expression->rel_expression LOGICOP rel_expression\n\n",line_count);}
		 ;

rel_expression	: simple_expression {fprintf(parsertext,"Line at %d : rel_expression->simple_expression\n\n",line_count);}
		| simple_expression RELOP simple_expression	 {fprintf(parsertext,"Line at %d : rel_expression->simple_expression RELOP simple_expression\n\n",line_count);}
		;

simple_expression : term {fprintf(parsertext,"Line at %d : simple_expression->term\n\n",line_count);}
		  | simple_expression ADDOP term {fprintf(parsertext,"Line at %d : simple_expression->simple_expression ADDOP term\n\n",line_count);}
		  ;

term :	unary_expression  {fprintf(parsertext,"Line at %d : term->unary_expression\n\n",line_count);}
     |  term MULOP unary_expression {fprintf(parsertext,"Line at %d : term->term MULOP unary_expression\n\n",line_count);}
     ;

unary_expression : ADDOP unary_expression  {fprintf(parsertext,"Line at %d : unary_expression->ADDOP unary_expression\n\n",line_count);}
		 | NOT unary_expression {fprintf(parsertext,"Line at %d : unary_expression->NOT unary_expression\n\n",line_count);}
		 | factor {fprintf(parsertext,"Line at %d : unary_expression->factor\n\n",line_count);}
		 ;

factor	: variable {fprintf(parsertext,"Line at %d : factor->variable\n\n",line_count);}
	| ID LPAREN argument_list RPAREN {fprintf(parsertext,"Line at %d : factor->ID LPAREN argument_list RPAREN\n\n",line_count);}
	| LPAREN expression RPAREN {fprintf(parsertext,"Line at %d : factor->LPAREN expression RPAREN\n\n",line_count);}
	| CONST_INT {fprintf(parsertext,"Line at %d : factor->CONST_INT\n\n",line_count);}
	| CONST_FLOAT {fprintf(parsertext,"Line at %d : factor->CONST_FLOAT\n\n",line_count);}
	| variable INCOP {fprintf(parsertext,"Line at %d : factor->variable INCOP\n\n",line_count);}
	| variable DECOP {fprintf(parsertext,"Line at %d : factor->variable DECOP\n\n",line_count);}
	;

argument_list : arguments  {fprintf(parsertext,"Line at %d : argument_list->arguments\n\n",line_count);}
				|
			  ;

arguments : arguments COMMA logic_expression {fprintf(parsertext,"Line at %d : arguments->arguments COMMA logic_expression \n\n",line_count);}
	      | logic_expression {fprintf(parsertext,"Line at %d : arguments->logic_expression\n\n",line_count);}
	      ;
 %%
int main(int argc,char *argv[])
{

/*	if((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Cannot Open Input File.\n");
		return 0;
	}*/
	fp=fopen("input.txt","r");
	yyin=fp;
	error=fopen("error.txt","w");
	logout= fopen("logout.txt","w");
	parsertext= fopen("parsertext.txt","w");

	yyparse();
	fclose(fp);
	fclose(logout);
	fclose(error);
	fclose(parsertext);

	return 0;
}


