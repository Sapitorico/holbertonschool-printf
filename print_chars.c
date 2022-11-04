#include "main.h"
/**
 */
int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	return (_putchar(character));
}
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	return (0);
}
int print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	return (_puts(str));
}
