option noyywrap

%{
#include<stdio.h>
#include<stdlib.h>
#include "1505069_SymbolTable.h"


int line_count=1;
int error_count=0;


FILE * logout= fopen("1505069_log.txt","w");
FILE *tokenout= fopen("1505069_token.txt","w");

SymbolTable s(30,logout);
pair<string,int> ModifyString(string s,int line);

%}

WHITESPACE [ \t\f\r\v]+ 

LETTER [a-zA-Z]

DIGIT [0-9]

CHAR [ -~]{-}['\\]

NEWLINE [\n]

%%
{WHITESPACE}    {}

{NEWLINE}       {
			line_count++;
		}

"if"		{
			fprintf(tokenout,"<IF>");
			fprintf(logout,"Line no %d: TOKEN <IF> Lexeme %s found\n",line_count,yytext);
		}
"else"		{
			fprintf(tokenout,"<ELSE>");
			fprintf(logout,"Line no %d: TOKEN <ELSE> Lexeme %s found\n",line_count,yytext);
		}
"for"		{
			fprintf(tokenout,"<FOR>");
			fprintf(logout,"Line no %d: TOKEN <FOR> Lexeme %s found\n",line_count,yytext);
		}
"while"		{
			fprintf(tokenout,"<WHILE>");
			fprintf(logout,"Line no %d: TOKEN <WHILE> Lexeme %s found\n",line_count,yytext);
		}
"do"		{
			fprintf(tokenout,"<DO>");
			fprintf(logout,"Line no %d: TOKEN <DO> Lexeme %s found\n",line_count,yytext);
		}
"break"		{
			fprintf(tokenout,"<FOR>");
			fprintf(logout,"Line no %d: TOKEN <FOR> Lexeme %s found\n",line_count,yytext);
		}
"int"		{
			fprintf(tokenout,"<INT>");
			fprintf(logout,"Line no %d: TOKEN <INT> Lexeme %s found\n",line_count,yytext);
		}
"char"		{
			fprintf(tokenout,"<CHAR>");
			fprintf(logout,"Line no %d: TOKEN <CHAR> Lexeme %s found\n",line_count,yytext);
		}
"float"		{
			fprintf(tokenout,"<FLOAT>");
			fprintf(logout,"Line no %d: TOKEN <FLOAT> Lexeme %s found\n",line_count,yytext);
		}
"double"		{
			fprintf(tokenout,"<DOUBLE>");
			fprintf(logout,"Line no %d: TOKEN <DOUBLE> Lexeme %s found\n",line_count,yytext);
		}
"void"		{
			fprintf(tokenout,"<VOID>");
			fprintf(logout,"Line no %d: TOKEN <VOID> Lexeme %s found\n",line_count,yytext);
		}
"return"		{
			fprintf(tokenout,"<RETURN>");
			fprintf(logout,"Line no %d: TOKEN <RETURN> Lexeme %s found\n",line_count,yytext);
		}
"switch"		{
			fprintf(tokenout,"<SWITCH>");
			fprintf(logout,"Line no %d: TOKEN <SWITCH> Lexeme %s found\n",line_count,yytext);
		}
"case"		{
			fprintf(tokenout,"<CASE>");
			fprintf(logout,"Line no %d: TOKEN <CASE> Lexeme %s found\n",line_count,yytext);
		}
"default"		{
			fprintf(tokenout,"<DEFAULT>");
			fprintf(logout,"Line no %d: TOKEN <DEFAULT> Lexeme %s found\n",line_count,yytext);
		}
"continue"	{
			fprintf(tokenout,"<CONTINUE>");
			fprintf(logout,"Line no %d: TOKEN <CONTINUE> Lexeme %s found\n",line_count,yytext);
		}


{DIGIT}+ 	{
				fprintf(tokenout,"<CONST_INT, %s>",yytext);
				fprintf(logout,"Line no %d: TOKEN <CONST_INT> Lexeme %s found\n",line_count,yytext);
				s.Insert(yytext,"CONST_INT");

		}

{DIGIT}*\.{DIGIT}+([E][-+]?{DIGIT}+)? |
{DIGIT}+([E][-+]?{DIGIT}+)? 		{
						fprintf(tokenout,"<CONST_FLOAT, %s>",yytext);
						fprintf(logout,"Line no %d: TOKEN <CONST_FLOAT> Lexeme %s found\n",line_count,yytext);
						s.Insert(yytext,"CONST_FLOAT");

					}

{DIGIT}*([\.]+{DIGIT}*)+(E[\.]*[+-]?[\.]*{DIGIT}*)?[\.]*{DIGIT}*	{
										fprintf(logout,"Error at Line No.%d:  Too many decimal point %s \n",line_count,yytext);
										error_count++;

									}
({DIGIT}+|{DIGIT}*\.{DIGIT}+([E][-+]?{DIGIT}+)?|{DIGIT}+([E][-+]?{DIGIT}+)?)[E]*({DIGIT}+|{DIGIT}*\.{DIGIT}+([E][-+]?{DIGIT}+)?|{DIGIT}+([E][-+]?{DIGIT}+)?)*							{						
								fprintf(logout,"Error at Line No.%d:  Ill formed number %s \n",line_count,yytext);
								error_count++;

							}

\'({CHAR}|\\['"?\\abfnrtv])\'			{
							fprintf(tokenout,"<CONST_CHAR, %s>",yytext);
							fprintf(logout,"Line no %d: TOKEN <CONST_CHAR> Lexeme %s found\n",line_count,yytext);
							s.Insert(yytext,"CONST_CHAR");
						
						}
\'({CHAR}|[\\])*[^'\n]?				{
						
							fprintf(logout,"Error at Line No.%d: Unfinished Character Sequence found %s \n",line_count,yytext);
							error_count++;
						}

\'({CHAR}|[\\])*\'			{
						
						fprintf(logout,"Error at Line No.%d: Invalid Character Sequence found %s \n",line_count,yytext);
						error_count++;
						

					}	





"+"|"-"		{
			fprintf(tokenout,"<ADDOP, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <ADDOP> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"ADDOP");

			
		}
"*"|"/"|"%"	{
			fprintf(tokenout,"<MULOP, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <MULOP> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"MULOP");
		}

"++"|"--"	{
			fprintf(tokenout,"<INCOP, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <INCOP> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"INCOP");
		}
"<"|"<="|">"|">="|"=="|"!="	{
					fprintf(tokenout,"<RELOP, %s>",yytext);
					fprintf(logout,"Line no %d: TOKEN <RELOP> Lexeme %s found\n",line_count,yytext);
					//s.Insert(yytext,"RELOP");
				}
"="		{
			fprintf(tokenout,"<ASSIGNOP, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <ASSIGNOP> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"ASSIGNOP");
		}
"&&"|"||"	{
			fprintf(tokenout,"<LOGICOP, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <LOGICOP> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"LOGICOP");
		}
"&"|"|"|"^"|"<<"|">>"		{
					fprintf(tokenout,"<BITOP, %s>",yytext);
					fprintf(logout,"Line no %d: TOKEN <BITOP> Lexeme %s found\n",line_count,yytext);
					//s.Insert(yytext,"BITOP");
				}
"!"		{
			fprintf(tokenout,"<NOT, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <NOT> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"NOT");
		}
"("		{
			fprintf(tokenout,"<LPAREN, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <LPAREN> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"LPAREN");
		}
")"		{
			fprintf(tokenout,"<RPAREN, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <RPAREN> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"RPAREN");
		}
"{"		{
			fprintf(tokenout,"<LCURL, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <LCURL> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"LCURL");
		}
"}"		{
			fprintf(tokenout,"<RCURL, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <RCURL> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"RCURL");
		}
"["		{
			fprintf(tokenout,"<LTHIRD, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <LTHIRD> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"LTHIRD");
		}
"]"		{
			fprintf(tokenout,"<RTHIRD, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <RTHIRD> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"RTHIRD");
		}
","		{
			fprintf(tokenout,"<COMMA, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <COMMA> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"COMMA");
		}
";"		{
			fprintf(tokenout,"<SEMICOLON, %s>",yytext);
			fprintf(logout,"Line no %d: TOKEN <SEMICOLON> Lexeme %s found\n",line_count,yytext);
			//s.Insert(yytext,"SEMICOLON");
		}

\"([^\"\n]|(\\[\n])|(\"))*\" 			{	
							
							pair<string,int> modify=ModifyString(yytext,line_count);
							fprintf(tokenout,"<STRING, %s>",modify.first.c_str());
							fprintf(logout,"Line no %d: TOKEN <STRING> Lexeme %s found\n",line_count,yytext);
							line_count=modify.second;
						
			}
\"([^\"\n]|(\\[\n]))* 				{
							pair<string,int> modify=ModifyString(yytext,line_count);
							fprintf(logout,"Error at Line No.%d:  Unfinished String found %s \n",line_count,yytext);
							error_count++;
							line_count=modify.second;

						}



({LETTER}|_)({LETTER}|{DIGIT}|_)*		        {
								fprintf(tokenout,"<ID, %s>",yytext);
								fprintf(logout,"Line no %d: TOKEN <ID> Lexeme %s found\n",line_count,yytext);
								s.Insert(yytext,"ID");
							}

{DIGIT}({LETTER}|{DIGIT}|_)*				{
								fprintf(logout,"Error at Line No.%d:  Invalid Identifier %s \n",line_count,yytext);
								error_count++;

							}

"//"((.*\\\n.*)|(.*))* 			{	 pair<string,int> modify=ModifyString(yytext,line_count);
					
						 fprintf(logout,"Line no %d: TOKEN <COMMENT> Lexeme %s found\n",line_count,yytext);
						 line_count=modify.second;
						

					}
"/*"([^*]|("*"[^/]))*"*/"		{
						pair<string,int> modify=ModifyString(yytext,line_count);
						fprintf(logout,"Line no %d: TOKEN <COMMENT> Lexeme %s found\n",line_count,yytext);
						line_count=modify.second;
						
						
					}
"/*"([^*]|("*"[^/]))*[^"*/"]		{
								pair<string,int> modify=ModifyString(yytext,line_count);
								fprintf(logout,"Error at Line No.%d:  Unfinished Comment %s \n",line_count,yytext);
								line_count=modify.second;
								error_count++;

					}
.					{
								fprintf(logout,"Error at Line No.%d:  Unrecognized character %s \n",line_count,yytext);
								error_count++;

					}

%%

int main(int argc,char *argv[]){

	
	if(argc!=2){
		printf("Please provide input file name and try again\n");
		return 0;
	}
	
	FILE *fin=fopen(argv[1],"r");
	if(fin==NULL){
		printf("Cannot open specified file\n");
		return 0;
	}
	
	
	yyin= fin;
	yylex();
	fprintf(logout,"\nTotal Lines : %d\nTotal Errors : %d\n",line_count,error_count);
	fclose(yyin);
	fclose(tokenout);
	fclose(logout);
	return 0;
}

pair<string,int> ModifyString(string s,int line){
	string x;
	//cout<<line<<endl;
	for(int i=0;i<s.size();i++){
		if(s[i]=='\n')line++;
		if(s[i]=='\\' and s[i+1]=='\n') 
		continue;
		int ok=0;
		if(s[i]=='\\' and s[i+1]=='n') 
			x.push_back('\n');
		else if(s[i]=='\\' and s[i+1]=='t') 
			x.push_back('\t');
		else if(s[i]=='\\' and s[i+1]=='\\') 
			x.push_back('\\');
		else if(s[i]=='\\' and s[i+1]=='\'') 
			x.push_back('\'');
		else if(s[i]=='\\' and s[i+1]=='\"') 
			x.push_back('\"');
		else if(s[i]=='\\' and s[i+1]=='a') 
			x.push_back('\a');
		else if(s[i]=='\\' and s[i+1]=='f') 
			x.push_back('\f');
		else if(s[i]=='\\' and s[i+1]=='r') 
			x.push_back('\r');
		else if(s[i]=='\\' and s[i+1]=='v') 
			x.push_back('\v');
		else if(s[i]=='\\' and s[i+1]=='b') 
			x.push_back('\b');
		else if(s[i]=='\\' and s[i+1]=='\0') 
			x.push_back('\0');
		else if(s[i]=='\n' ) 
			continue;
		else{
			ok=1;
			x.push_back(s[i]);
		}
		if(ok==0) i++;
	}
	//cout<<x<<endl;

	//cout<<line<<endl;


	return make_pair(x,line);
}

