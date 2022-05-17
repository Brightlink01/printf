#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - write output to stdout, the standard output stream
 * @format:  is a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null)
 */
int _printf(const char *format, ...)
{
	int i = 0, j = 0, output = 0;
	va_list arg;

	cf_t print[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;

			while (print[j].p != NULL)
			{
				if (format[j + 1] == print[j].print[0])
				{
					output = output + print[j].p(arg);
					i++;
				}
				j++;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar ('%');
			i++;
			output = output + 1;
		}
		else
		{
			_putchar (format[i]);
			output = output + 1;
		}
		i++;
	}
	va_end(arg);
	return (output);
}
