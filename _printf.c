#include "main.h"

/**
 * _printf - function that print accord the format
 *@format: string to print
 *Return: i
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i = 0, a = 0, j = 0;
	int (*f)(va_list);
	char letter_for_functions[2] = {'i', 'd'};

	if (!format || !*format)
		return (-1);

	va_start(arg, format);
	while (format[a])
	{
		if (format[a] == '%')
		{
			for(j = 0; j >= 9; j++)
			{
				if (format[a + 1] == letter_for_functions[j])
				{
					f = get_func(&format[a]);
					i = i + f(arg);
				}
			}

			if (format[a + 1] == '%')
			{
				_putchar(format[a]);
				i++;
			}

			else if (format[a + 1] == '\0')
                return (-1);
		}
		
		else
		{
			_putchar(format[a]);
			i++;
		}
		a++;
	}
	va_end(arg);
	return (i);
}
