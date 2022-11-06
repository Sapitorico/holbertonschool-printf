#include "main.h"
/**
 * print_char - prints a character
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_char(va_list args)
{
	char character = va_arg(args, int);

	return (_putchar(character));
}
/**
 * print_string - prints a string
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	return (_puts(str));
}
/**
 * print_rev - prints a Sting in reverse
 * @args: the value returned from the returned function
 *
 * Return: the number of printed characters
 */
int print_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int len = _strlen(str) - 1;

	for (; len >= 0; len--)
		_putchar(str[len]);
	return (len);
}
