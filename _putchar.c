#include <unistd.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_puts - prints a string to out
 *@str: charater pointer that prints out
 *Return: number of char written out
 *
 */
int _puts(char *str)
{
register int i;
for (i = 0; str[i]; i++)
_putchar(str[i]);
return (i);
}
