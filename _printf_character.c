#include "main.h"

/**
 ** 
 ** 
 ** 
 ** 
 **/

int _printf_character(va_list va_printf)
{
	_printchar(va_arg(va_printf, int));

	return (1);
}
