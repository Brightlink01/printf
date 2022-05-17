#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct printer - structure for the conversion specifier
 *@ch: format specifier
 *@print: pointer to function takes variable retun intiger
 *
 */
typedef struct printer
{
	char ch;
	int (*print)(va_list arg);
} printer_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _conv(va_list arg, char ch);
int print_c(va_list arg);
int print_s(va_list arg);
int print_p(va_list arg __attribute__((unused)));
int print_b(va_list arg);
int _puts(char *stg);
#endif
