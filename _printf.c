#include "main.h"

/**
 * _printf - function that print accord the format
 *@format: string to print
 *Return: i
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i = 0, a = 0;
	int (*f)(va_list);

	if (!format || !*format)
		return (-1);

	va_start(arg, format);
	while (format[a])
	{
		if (format[a] == '%')
		{
			a++;
			if (format[a] != '%' && format[j] != 'd'
			&& format[a] != 'i' && format[j] != 'c'
			&& format[a] != 's' && format[j] != 'b'
			&& format[a] != 'u' && format[j] != 'o'
			&& format[a] != 'x' && format[j] != 'X')
			{
				if (format[a - 1] == '%' && format[a] == '\0')
					return (-1);

				i = i + _putchar(format[j - 1]);
				i = i + _putchar(format[j]);
			}
			else
			{
				f = get_func(&format[j]);
				i = i + f(arg);
			}
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
