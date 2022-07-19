#include "main.h"

/**
 * _printf - function that print accord the format
 *@format: string to print
 *Return: i
 */
int _printf(const char *format, ...)
{
	va_list arg;
	unsigned int i = 0, j = 0;
	int (*f)(va_list);

	if (!format || !*format)
		return (-1);

	va_start(arg, format);
	while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			if (format[j] != '%' && format[j] != 'd'
			&& format[j] != 'i' && format[j] != 'c'
			&& format[j] != 's' && format[j] != 'b'
			&& format[j] != 'u' && format[j] != 'o'
			&& format[j] != 'x' && format[j] != 'X')
			{
				if (format[j - 1] == '%' && format[j] == '\0')
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
			_putchar(format[j]);
			i++;
		}
		j++;
	}
	va_end(arg);
	return (i);
}
