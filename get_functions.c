#include "main.h"

/**
 ** get_function - print some data.
 ** @c: char to identify format for printing
 ** Return: function pointer defined by 'c'
 **/

int (*get_function(const char *format))(va_list)
{
	oper op[] = {
		{"c", _printf_character},
		{"s", _printf_string},
		{"d", _printf_decimal},
		{"i", _printf_decimal},
		{"b", _printf_binary},
		{"u", _printf_undecimal},
		{"o", _printf_octal},
		{"x", _print_hexadecimal},
		{"X", _print_Hexa_Alfa},
		{NULL, NULL},
	};
	int a = 0;

	for (; op[a].string; a++)
	{
		if (*format == *(op[a].string))
			return (op[a].f);
	}
	return (0);
}
