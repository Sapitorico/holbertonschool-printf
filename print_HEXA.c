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
/**
 * print_address - prints memory addresses
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_address(va_list args)
{
	long int addr = va_arg(args, long int);

	write(1, "0x", 2);
	return (_puts(base_convert(addr, 16)));
}
