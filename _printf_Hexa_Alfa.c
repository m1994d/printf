#include "main.h"

/**
 * print_HEX - prints HEXadecimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */

int _print_Hexa_Alfa(va_list arg)
{
	unsigned int num;
	char *str;
	int i = 0;

	num = va_arg(arg, unsigned int);
	str = convercion(num, 16, true);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		_printchar(str[i]);
		i++;
	}
	return (i);
}
