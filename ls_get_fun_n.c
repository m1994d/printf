#include "main.h"

/**
 * _printdec - function that print decimal
 * @arg: decimal argument.
 * Return: 0
 */

int _printdec(va_list arg)
{
	int str, number, size = 1, result;

    str = va_arg(arg, int);

    if (str < 0)
    {
        _putchar('-');
        str = str * -1;
    }

    number = str;

    while (str > 9)
    {
        str = str / 10;
        size = size * 10;
    }

    while (size >= 1)
    {
        result += _putchar(((number / size) % 10) + '0');
        size = size / 10;
    }
    return (result);
}
