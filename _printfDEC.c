#include "main.h"

/**
 **
 ** 
 **/

int _printfDEC(va_list va_printf)
{
    int str, number, size = 1, result;

    str = va_arg(va_printf, int);

    if (str < 0)
    {
        _printchar('-');
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
        result += _printchar(((number / size) % 10) + '0');
        size = size / 10;
    }
    return (result);
}
