#include "main.h"

/**
 *get_func - function that selects the type of char
 *@format: string
 *Return: pointer to the string or NULL
 */
int (*get_func(const char *format))(va_list)
{
	specifier tp[] = {,
		{"i", _printdec},
		{"d", _printdec},
		{NULL, NULL},
	};

	int cn = 0;

	for (; tp[cn].t; cn++)
	{
		if (*format == *(tp[cn].t))
			return (tp[cn].f);
	}
	return (NULL);
}
