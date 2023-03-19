///===========================================================
/// ¶¨ÒålexerÄ£¿é
/// 
///===========================================================
#pragma once

#include<stdio.h>
#include<stdlib.h>

enum Tokens
{
	TRUE,FALSE,IF,ELSE,
	FN,WHILE,BREAK,CONTIUNE,FOR,
	RETURN,USE,MATCH,

	AND,OR,XOR,
	
	L_AND,L_OR,
	
	ADD,SUB,MUL,DIV,

	USIZE,ISIZE,FSIZE,CHAR,STRING,

	STRUCT,ENUM,UNION,

	STATIC,CONST,NAMESPACE,
	FREE,DROP,
};

static const char* const Keyword[] = {
	"true","false","if","else",
	"fn","while","break","contiune","for",
	"return","use","match",

	"&","|","^",

	"&&","||",

	"+","-","*","/",

	"usize","isize","fsize","char","string",

	"struct","enum","union",

	"static","const","namespace",
	"free","drop",
}