Line at 1 : type_specifier	: INT

int 

Line at 1 : declaration_list->ID

x

Line at 1 : declaration_list->declaration_list COMMA ID

x,y

Line at 1 : declaration_list->declaration_list COMMA ID

x,y,z

Line at 1 : var_declaration->type_specifier declaration_list SEMICOLON

int  x,y,z;

Line at 1 : unit->var_declaration

int  x,y,z;

Line at 1 : program->unit

int  x,y,z;


Line at 1 : type_specifier	: FLOAT

float 

Line at 1 : declaration_list->ID

a

Line at 1 : var_declaration->type_specifier declaration_list SEMICOLON

float  a;

Line at 1 : unit->var_declaration

float  a;

Line at 1 : program->program unit

int  x,y,z;
 float  a;


Line at 3 : type_specifier	: VOID

void 

Line at 3 : func_declaration->type_specifier ID LPAREN RPAREN SEMICOLON

void  foo();

Line at 3 : unit->func_declaration

void  foo();

Line at 3 : program->program unit

int  x,y,z;
float  a;
 void  foo();


Line at 5 : type_specifier	: INT

int 

Line at 5 : type_specifier	: INT

int 

Line at 5 : parameter_list->type_specifier ID

int  a

Line at 5 : type_specifier	: INT

int 

Line at 5 : parameter_list->parameter_list COMMA type_specifier ID

int  a,int  b

 New ScopeTable with id 2 created

Line at 6 : variable->ID

a

Line at 6 : factor->variable

a

Line at 6 : unary_expression->factor

a

Line at 6 : term->unary_expression

a

Line at 6 : simple_expression->term

a

Line at 6 : variable->ID

b

Line at 6 : factor->variable

b

Line at 6 : unary_expression->factor

b

Line at 6 : term->unary_expression

b

Line at 6 : simple_expression->simple_expression ADDOP term

a+b

Line at 6 : rel_expression->simple_expression

a+b

Line at 6 : logic_expression->rel_expression

a+b

Line at 6 : expression->logic_expression

a+b

Line at 6 : statement->RETURN expression SEMICOLON

return a+b;

Line at 6 : statements->statement

return a+b;

Line at 7 : compound_statement->LCURL statements RCURL

{return a+b;}

 ScopeTable# 2 
 51  --> < ID : a > 
 52  --> < ID : b > 

 ScopeTable# 1 
 21  --> < ID : foo > 
 44  --> < ID : var > 
 51  --> < ID : a > 
 74  --> < ID : x > 
 75  --> < ID : y > 
 76  --> < ID : z > 

 ScopeTable with id 2 removed

Line at 7 : func_definition->type_specifier ID LPAREN parameter_list RPAREN compound_statement 

int  var(int  a,int  b) {
return a+b;
} 

Line at 7 : unit->func_definition

int  var(int  a,int  b){
return a+b;
}

Line at 7 : program->program unit

int  x,y,z;
float  a;
void  foo();
 int  var(int  a,int  b){
return a+b;
}


Line at 8 : type_specifier	: INT

int 

Line at 8 : type_specifier	: INT

int 

Line at 8 : parameter_list->type_specifier ID

int  a

Line at 8 : type_specifier	: INT

int 

Line at 8 : parameter_list->parameter_list COMMA type_specifier ID

int  a,int  b

 New ScopeTable with id 3 created

Line at 9 : variable->ID

a

Line at 9 : factor->variable

a

Line at 9 : unary_expression->factor

a

Line at 9 : term->unary_expression

a

Line at 9 : simple_expression->term

a

Line at 9 : variable->ID

b

Line at 9 : factor->variable

b

Line at 9 : unary_expression->factor

b

Line at 9 : term->unary_expression

b

Line at 9 : simple_expression->simple_expression ADDOP term

a+b

Line at 9 : rel_expression->simple_expression

a+b

Line at 9 : logic_expression->rel_expression

a+b

Line at 9 : expression->logic_expression

a+b

Line at 9 : statement->RETURN expression SEMICOLON

return a+b;

Line at 9 : statements->statement

return a+b;

Line at 10 : compound_statement->LCURL statements RCURL

{return a+b;}

 ScopeTable# 3 
 51  --> < ID : a > 
 52  --> < ID : b > 

 ScopeTable# 1 
 21  --> < ID : foo > 
 44  --> < ID : var > 
 51  --> < ID : a > 
 74  --> < ID : x > 
 