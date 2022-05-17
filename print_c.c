#include <stdarg.h>
#include "main.h"
/**
 *print_c - prints a character
 *@list: variable argument list
 *Return: (0);
 */
int print_c(va_list list)
{
	char ch = va_arg(list, int);

	_putchar(ch);
	return (0);
}
