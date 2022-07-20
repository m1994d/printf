#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *_printch - function that prints a character
 *@arg: the character argument
 *Return: 0
 */
int _printch(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * _printstr - function that print a string
 * @arg: the string argument
 * Return: 0
 */
int _printstr(va_list arg)
{
	char *st = va_arg(arg, char *);
	int len = 0;

	if (!st)
		st = "(null)";

	while (st[len])
	{
		_putchar(st[len]);
		len++;
	}
	return (len);
}
/**
 * _printpercent - function that print a percentage symbol
 * @arg: percentage symbol
 * Return: 0
 */
int _printpercent(va_list arg)
{
	(void)arg;
	return (_putchar('%'));
}
