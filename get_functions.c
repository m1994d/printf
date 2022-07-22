#include "main.h"

/**
 ** get_function - print some data.
 ** @c: char to identify format for printing
 ** Return: function pointer defined by 'c'
 **/

int (*get_function(const char *format))(va_list)
{
	oper op[] = {
		{"c", _printfCH},
		{"s", _printfSTR},
		{"d", _printfDEC},
		{"i", _printfDEC},
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
