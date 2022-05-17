#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct cformat - structure for the format
 *@print: - conversion specifiers
 *@p: - point to funcion
 */

typedef struct cformat
{
char *print;
int (*p)();
} cf_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list arg);
int print_s(va_list arg);
;

#endif
