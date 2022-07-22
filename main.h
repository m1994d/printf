#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>

typedef struct operator
{
	char *string;
	int (*f)(va_list);
} oper;

int _printchar(char f);
int _printf(const char *format, ...);
int _printfCH(va_list va_printf);
int _printfDEC(va_list va_printf);
int _printfSTR(va_list va_printf);
int (*get_function(const char *format))(va_list);

#endif /*MAIN_H*/
