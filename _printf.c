#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * _printf - write output to stdout, the standard output stream
 * @format:  is a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int output = 0, i = 0;
	int (*func)();

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (func == NULL)
			{
				_putchar(format[i]);
				output++;
				i++;
			}
			else
			{
				output += func(arg);
				i += 2;
				continue;
			}
		}
		else
		{
			_putchar(format[i]);
			output++;
			i++;
		}
	}
	va_end(arg);
	return (output);
}
