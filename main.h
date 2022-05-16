#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list arg);
int print_s(va_list arg);
int print_p(va_list arg __attribute__((unused)));

#endif
