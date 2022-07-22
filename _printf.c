#include "main.h"

/**
 ** _printf - funcion print in console
 ** @format: string to print
 ** Return: 0
 **/

int _printf(const char *format, ...)
{
    va_list va_printf;
    int buf = 0, ch = 0;

    if (!format || !*format)
        return (-1);
    
    va_start(va_printf, format);

    for (; format[ch]; ch++, buf++)
    {
        if (format[ch] == '%')
        {
            if (format[ch + 1] == '%')
            {
                _printchar(format[ch]);
                ch++;
            }

            else if (format[ch + 1] == 'c' || format[ch + 1] == 's'
            || format[ch + 1] == 'd' || format[ch + 1] == 'i')
            {
                buf += get_function(&format[ch + 1])(va_printf);
                ch++;
            }

            else if (format[ch + 1] == '\0')
                return (-1);

            else
                buf += _printchar(format[ch]);
        }
        else
            _printchar(format[ch]);
    }
    va_end(va_printf);
    return (buf);
}
