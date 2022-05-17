#include <stdarg.h>
#include "main.h"

/**
 *print_s - prints a string to standard
 *
 *@arg: variable argument list
 *
 *Return: number of character printed
 */
int print_s(va_list arg)
{
	char *result = va_arg(arg, char*);
	int length;

	length = 0;

	while (*(result + length))
	{
		_putchar(*(result + length));
		++length;
	}
	return (length - 1);
}
