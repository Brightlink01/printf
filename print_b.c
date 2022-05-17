#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_b - convert to binary
* @arg: argument list
* Return: number of chars printed
*/
int print_b(va_list arg)
{
	unsigned int len, powten, j, digit, n, num;
	int output = 0;

	n = va_arg(arg, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = n / powten;
			_putchar(digit + '0');
			output++;
			n -= digit * powten;
			powten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (output);
}
