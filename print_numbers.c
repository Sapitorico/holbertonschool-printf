#include "main.h"
/**
 * print_inter - prints integer
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_inter(va_list args)
{
	int inter = va_arg(args, int);

	if (inter < 0)
	{
		inter = -inter;
		_putchar('-');
	}
	return (_puts(base_convert(inter, 10)));
}
/**
 * print_binary - prints unsigned numbers in binary
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_binary(va_list args)
{
	unsigned int bin = va_arg(args, unsigned int);

	return (_puts(base_convert(bin, 2)));
}
/**
 * print_unsigned - prints unsigned numbers
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_unsigned(va_list args)
{
	unsigned int unsig = va_arg(args, unsigned int);

	return (_puts(base_convert(unsig, 10)));
}
/**
 * print_octa - prints unsigned numbers in octal
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_octa(va_list args)
{
	unsigned int octa = va_arg(args, unsigned int);

	return (_puts(base_convert(octa, 8)));
}
/**
 * print_hexa - prints unsigned hexadecimal numbers
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_hexa(va_list args)
{
	unsigned int hexa = va_arg(args, unsigned int);

	return (_puts(base_convert(hexa, 16)));
}
