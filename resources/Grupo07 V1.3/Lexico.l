%{
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "y.tab.h"
#include "Defines.h"

FILE  *yyin;
char aux[COTA_STR],aux2[COTA_STR];
double f;
%}

%option noyywrap  
%option yylineno 

DIGITO			[0-9]
LETRA			[a-zA-Z]
ALFANUMERICO	[a-zA-Z0-9]
COMA            [","]
PUNTO_Y_COMA	[";"]
DOS_PUNTOS		[":"]
ESPACIO 		[" "]
ENTER 			["\n"]
TAB 			["\t"]

C_SIMPLE		"-/"({LETRA}|{DIGITO}|{ESPACIO}|{ENTER}|{TAB}|.)+"/-"
COMENTARIO		{C_SIMPLE}|"-/"({LETRA}|{DIGITO}|{ESPACIO}|{ENTER}|{TAB}|.|({C_SIMPLE}?))+"/-"

CONST_STR 		"\""({ALFANUMERICO}+|{ESPACIO})*""\"
CONST_FLOAT     {DIGITO}+"."{DIGITO}+
CONST_INT       {DIGITO}+
ID				{LETRA}({LETRA}|{DIGITO}|_)*
OP_COMPARACION  ["<"|"=="|">"|"<="|">="|"!="]
OP_SURES        ["+"|"-"]
OP_MULTDIV      ["*"|"/"]
OP_AS   		["="]
OP_LOG          ["AND"|"OR"|"NOT"]
P_A             ["("]
P_C             [")"]
CONCAT         	["++"]
GET				["READ"]
PUT				["WRITE"]


%%
"BEGINPROG"		{ return PR_BEGINPROG;}
"ENDPROG"		{ return PR_ENDPROG;}
"VAR"			{ return PR_VAR;}
"ENDVAR"		{ return PR_ENDVAR;}
"TAKE"			{ return PR_TAKE;}
"FLOAT"			{ return PR_FLOAT;}
"INT"			{ return PR_INT;}
"STRING"		{ return PR_STRING;}
"IF"			{ return PR_IF;}
"THEN"   		{ return PR_THEN;}
"ELSE"   		{ return PR_ELSE;}
"ENDIF"	      	{ return PR_ENDIF;}
"WHILE"	      	{ return PR_WHILE;}
"DO"	        { return PR_DO;}
"IN"	        { return PR_IN;}
"ENDWHILE"  	{ return PR_ENDWHILE;}
"+"				{ return OP_SUMA;}
"-"				{ return OP_RESTA;}
"*"				{ return OP_MULTIPLICACION;}
"/"				{ return OP_DIVISION;}
">"             { return OP_MAYOR;}
">="            { return OP_MAYOR_IGUAL;}
"<"             { return OP_MENOR;}
"<="            { return OP_MENOR_IGUAL;}
"!="            { return OP_DISTINTO;}
"=="            { return OP_IGUAL_IGUAL;}
"AND"           { return OP_LOG_AND;}
"OR"            { return OP_LOG_OR;}
"NOT"           { return OP_LOG_NOT;}
"="				{ return OP_ASIGNACION;}
"("				{ return PAR_ABRE;}
")"				{ return PAR_CIERRA;}
"["				{ return COR_ABRE;}
"]"				{ return COR_CIERRA;}
"READ"			{ return PR_GET;}
"WRITE"			{ return PR_PUT;}
","				{ return COMA;}
";"				{ return PUNTO_Y_COMA;}
":"				{ return DOS_PUNTOS;}
"++"			{ return CONCAT;}

{ID}			{

						yylval.str_val = yytext;
						if(strlen(yytext)>COTA_ID)
							{
								printf("VARIABLE SUPERA MAXIMO CARACTERES\n\t***ERROR - FINALIZANDO LEXICO***\n");
								exit(1);
							}
						else	
							{	strcpy(aux,"_");
								strcat(aux,yytext);
								printf( "Genero aux para TS: (%s)\n",aux);
								printf( "Identificador en lexico: %s (%s)\n", yytext,yylval.str_val);
								agregarATS(aux,"-",VRBL,0,0);//hay que mandar el id y los datos necesarios para agregar
								return TOKEN_ID;
							}
				}
				

{CONST_INT}		{ 		
						yylval.str_val = yytext;
						if(atoi(yytext)>COTA_ID)
							{
								printf("CONST ENTERA SUPERA COTA\n\t***ERROR - FINALIZANDO LEXICO***\n");
								exit(1);
							}
						else
							{
								strcpy(aux,"&");
								strcat(aux,yytext);
								printf( "Genero aux para TS: (%s)\n",aux);
								printf( "Identificador en lexico: %s (%s)\n", yytext,yylval.str_val);
								agregarATS(aux,"-",CTE_INT,0,atoi(yytext));
								return CONST_INT;
							}
				}
				
{CONST_STR}		{ 		yylval.str_val = yytext;
						strcpy(aux2,yytext);
						if(strlen(aux2)>COTA_STR)
							{	
								printf("STRING SUPERA COTA\n\t***ERROR - FINALIZANDO LEXICO***\n");
								exit(1);
						
							}
						else
							{
								setearString(aux2,yytext);
								strcpy(aux,"@");
								strcat(aux,aux2);
								printf( "Genero aux para TS: (%s)\n",aux);
								printf( "Identificador en lexico: %s (%s)\n", yytext,yylval.str_val);
								agregarATS(aux,yytext,CTE_STR,strlen(aux2),0);
								return CONST_STR;
							}
				}
				
{CONST_FLOAT}	{ 		
						yylval.str_val = yytext;
						f=atof(yytext);
						if(f>COTA_REAL)
							{
								printf("CONST REAL SUPERA COTA\n\t***ERROR - FINALIZANDO LEXICO***\n");
								exit(1);
							}
						else
							{
								strcpy(aux,"$");
								strcat(aux,yytext);
								printf( "Genero aux para TS: (%s)\n",aux);
								printf( "Identificador en lexico: %s (%s)\n", yytext,yylval.str_val);
								agregarATS(aux,"-",CTE_FLT,0,f);
								return CONST_FLOAT;
							}
				}
				
{COMENTARIO}	{ printf("COMENTARIO \n");}



"\n"      		
"\t"

%%
