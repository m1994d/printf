#include "main.h"

/**
 * print_hex - prints hexadecimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */

int _print_hexadecimal(va_list arg)
{
	unsigned int num;
	char *str;
	int i = 0;

	num = va_arg(arg, unsigned int);
	str = convercion(num, 16, false);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		_printchar(str[i]);
		i++;
	}
	return (i);
}
