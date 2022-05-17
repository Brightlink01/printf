#include <stdarg.h>
#include "main.h"

/**
 *print_s - prints a string to standard
 *
 *@list: variable argument list
 *
 *Return: number of character printed
 */
int print_s(va_list list)
{
	char *result = va_arg(list, char*);
	int length;

	length = 0;

	while (*(result + length))
	{
		_putchar(*(result + length));
		++length;
	}
	return (length - 1);
}
