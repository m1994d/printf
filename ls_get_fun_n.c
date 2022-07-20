#include "main.h"

/**
 * _print_int - writes integer
 * @arg: The character to print
 * Return: 0
 */

int _print_int(va_list arg)
{
	int size = 0;

	size = _printdec(arg);

	return (size);
}


/**
 * _printdec - function that print decimal
 * @arg: decimal argument
 * Return: 0
 */

int _printdec(va_list arg)
{
	int num;
	unsigned int p, size_d;
	unsigned int o_size_d = 1;
	unsigned int store = 0;

	num = va_arg(arg, int);
	if (num < 0)
	{
		store = store + _putchar('-');
		p = num - 1;
	}
	else
		p = num;

	size_d = p;
	while (size_d > 9)
	{
		size_d = size_d / 10;
		o_size_d = o_size_d * 10;
	}
	while (o_size_d >= 1)
	{
		store = store + _putchar(((p / o_size_d) % 10) + '0');
		o_size_d = o_size_d / 10;
	}
		return (store);
}
