#include "main.h"
#include <stddef.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 *_conv - process conversion specifier
 *@arg: list of variable argument
 *@ch: character process
 *Return: number of characters printed
 */

int _conv(va_list arg, char ch)
{
	int j = 0;
	int output = 0;
	printer_t p[] = {
		{'c', print_c},
		{'s', print_s},
		{'b', print_b},
		{0, NULL}
	};
	while (p[j].ch)
	{
		if (p[j].ch == ch)
		{
			output += p[j].print(arg);
			break;
		}
		++j;
	}
	return (output);
}


/**
 * _printf - write output to stdout, the standard output stream
 * @format:  is a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null)
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int output = 0, i = 0;
	char c;

	va_start(arg, format);

	for (; *format && *(format + i); i++)
	{
		for (; *(format + i) && *(format + i) != '%'; i++, output++)
			_putchar(*(format + i));
		if (!format[i])
			return (output);
		else if (*(format + i) == '%')
		{
			i++;
			c = *(format + i);
			if (c == '%')
				_putchar('%');
			else
				output += _conv(arg, c);
			output++;
		}
		if (!format[i])
			return (output);
	}
	va_end(arg);
	return (output);
}
