#include "main.h"

/**
 * print_oct - prints the number octal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */

int _printf_octal(va_list arg)
{
	unsigned int num;
	char *str;
	int j = 0;

	num = va_arg(arg, unsigned int);
	str = convercion(num, 8, false);
	if (str == NULL)
		return (0);
	while (str[j])
	{
		_printchar(str[j]);
		j++;
	}
	return (j);
}
