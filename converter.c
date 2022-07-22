#include "main.h"
/**
 * converter - function to convert string.
 * @num: parameter number.
 * @base: parameter base.
 * @upp: uppercase.
 * Return: char*
 */
char *converter(unsigned long int num, int base, bool upp)
{
	static char *r;
	static char buffer[50];
	char *ptr;

	if (upp)
	{
		r = "0123456789ABCDEF";
	}
	else
	{
		r = "0123456789abcdef";
	}

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = r[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
