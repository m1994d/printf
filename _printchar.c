#include "main.h"

/**
 ** _printchar - writes the character c to stdout
 ** @c: The character to print
 ** Return: On success 1.
 ** On error, -1 is returned, and errno is set appropriately.
 **/

int _printchar(char f)
{
	return (write(1, &f, 1));
}
