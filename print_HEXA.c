#include "main.h"
/**
 * print_HEXA - prints numbers in hexadecimal with uppercase letters
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_HEXA(va_list args)
{
	unsigned int HEXA = va_arg(args, unsigned int);

	return (_puts(string_toupper(base_convert(HEXA, 16))));
}
