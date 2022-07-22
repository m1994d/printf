#include "main.h"

/**
 * print_bin - prints the binary of a unsigned int.
 * @arg: integer pass by user
 * Return: characters printed
 */

int _printf_binary(va_list arg)
{
	unsigned int num;
	char *str;
	int j = 0;

	num = va_arg(arg, unsigned int);
	str = convercion(num, 2, false);
	if (str == NULL)
		return (0);
	while (str[j])
	{
		_printchar(str[j]);
		j++;
	}
	return (j);
}
