#include "main.h"

/**
 ** _printf - funcion print in console
 ** @format: string to print
 ** Return: 0
 **/

int _printf(const char *format, ...)
{
    va_list va_printf;
    int buf = 0, ch = 0, j = 0;
    char letters_for_functions[4] = {'d', 'i', 'c', 's', 'b'};

    if (!format || !*format)
        return (-1);
    
    va_start(va_printf, format);

    for (; format[ch]; ch++, buf++)
    {
        if (format[ch] == '%')
        {
            for(j = 0; letters_for_functions[j]; j++)
            {
                if (format[ch + 1] == letters_for_functions[j])
                {
                    ch++;
                    buf += get_function(&format[ch])(va_printf);
                    ch++;
                }
            }

            if (format[ch + 1] == '%')
            {
                _printchar(format[ch]);
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
