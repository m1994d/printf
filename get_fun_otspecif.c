#include "main.h"
/**
 * print_undec - prints unsigned decimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */
int print_undec(va_list arg)
{
	unsigned int num;
	char *str;
	int j = 0;

	num = va_arg(arg, unsigned int);
	str = converter(num, 10, false);
	if (str == NULL)
		return (0);
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	return (j);
}

/**
 * print_oct - prints the number octal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */
int print_oct(va_list arg)
{
	unsigned int num;
	char *str;
	int j = 0;

	num = va_arg(arg, unsigned int);
	str = converter(num, 8, false);
	if (str == NULL)
		return (0);
	while (str[j])
	{
		_putchar(str[j]);
		j++;
	}
	return (j);
}

/**
 * print_hex - prints hexadecimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */
int print_hex(va_list arg)
{
	unsigned int num;
	char *str;
	int i = 0;

	num = va_arg(arg, unsigned int);
	str = converter(num, 16, false);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}

/**
 * print_HEX - prints HEXadecimal of a unsigned int
 * @arg: integer pass by user
 * Return: characters printed
 */
int print_HEX(va_list arg)
{
	unsigned int num;
	char *str;
	int i = 0;

	num = va_arg(arg, unsigned int);
	str = converter(num, 16, true);
	if (str == NULL)
		return (0);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
