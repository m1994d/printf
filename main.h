#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdarg.h>

/**
 * struct print - Estruct
 * @tp: format
 * @f: function
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int _printdec(va_list arg);

#endif /*_MAIN_H*/
