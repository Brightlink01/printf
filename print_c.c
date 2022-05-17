#include <stdarg.h>
#include "main.h"
/**
 *print_c - prints a character
 *@arg: variable argument list
 *Return: (0);
 */
int print_c(va_list arg)
{
	char ch = va_arg(arg, int);

	_putchar(ch);
	return (0);
}
