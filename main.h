#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdarg.h>

/**
 *  *struct print - Estruct
 *   *@tp: format
 *    *@f: function
 *     */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int _printch(va_list arg);
int _printstr(va_list arg);
int _printpercent(va_list arg);
int _print_int(va_list arg);
int _printdec(va_list arg);
int (*get_func(const char *format))(va_list);
int print_bin(va_list arg);
char *converter(unsigned long int num, int base, bool upp);
int print_undec(va_list arg);
int print_oct(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);

#endif /*_MAIN_H*/
