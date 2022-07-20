#include "main.h"
/**
 * print_bin - prints the binary of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */
int print_bin(va_list arg)
{
	unsigned int num;
	char *str;
	int i = 0;

	num = va_arg(arg, unsigned int);
	str = converter(num, 2, false);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
