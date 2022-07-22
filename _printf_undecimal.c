#include "main.h"

/**
 * print_undec - prints unsigned decimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */

int _printf_undecimal(va_list arg)
{
	unsigned int num;
	char *str;
	int j = 0;

	num = va_arg(arg, unsigned int);
	str = convercion(num, 10, false);
	if (str == NULL)
		return (0);
	while (str[j])
	{
		_printchar(str[j]);
		j++;
	}
	return (j);
}
