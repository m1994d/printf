#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdarg.h>

typedef struct operator
{
	char *string;
	int (*f)(va_list);
} oper;

int _printchar(char f);
int _printf(const char *format, ...);
int _printf_character(va_list va_printf);
int _printf_decimal(va_list va_printf);
int _printf_string(va_list va_printf);
char *convercion(unsigned long int num, int base, bool upp);
int _printf_binary(va_list arg);
int _printf_undecimal(va_list arg);
int _printf_octal(va_list arg);
int _print_hexadecimal(va_list arg);
int _print_Hexa_Alfa(va_list arg);
int (*get_function(const char *format))(va_list);

#endif /*MAIN_H*/
