#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_hex(unsigned int n, unsigned int c);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
/**
 * struct code_format - Struct format
 *
 * @var: The specifiers
 * @func: The function associated
 */
typedef struct code_format
{
	char *var;
	int (*func)(va_list);
} find;
#endif
