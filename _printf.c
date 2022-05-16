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
	va_list arg;
	char cha;
	int output = 0, i = 0;

	va_start(arg, format);
	for (; format && format[i]; i++)
	{
		for (; format[i] && format[i] != '%'; i++, output++)
			_putchar(format[i]);
		if (!format[i])
			return (output);
		else if (format[i] == '%')
		{
			i++;
			cha = format[i];
			if (cha == '%')
				_putchar('%');
			else
				output += _conv(arg, cha);
			output++;
		}
		if (!format[i])
			return (output);
	}
	va_end(arg);

	return (output);
}

/**
 *_conv - handle the following conversion specifiers
 *@list: the argument list
 *@ch: character to process
 *
 *Return: number of characters printed
 */
void _conv(va_list list, char ch)
{
	int j = 0;
	int output = 0;
	print p[] = {
		{ 'c', print_c },
		{ 's', print_s },
		{ 0, NULL}
	};

	while (p[j].ch)
	{
		if (p[j].ch == ch)
		{
			output += p[j].print(list);
			break;
		}
		++j;
	}

	return (output);
}
