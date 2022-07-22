#include "main.h"

/**
 **
 ** 
 **/

int _printf_string(va_list va_printf)
{
    char *str;
    int ch = 0;

    str = va_arg(va_printf, char *);

    for (; str[ch] != '\0'; ch++)
        _printchar(str[ch]);
    
    return (ch);
}
