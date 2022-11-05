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
