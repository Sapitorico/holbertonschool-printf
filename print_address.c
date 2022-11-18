#include "main.h"
/**
 * print_address - prints memory addresses
 * @args: list of arguments received from the varied function
 *
 * Return: the value returned from the returned function
 */
int print_address(va_list args)
{
	long int addr = va_arg(args, long int);

	if (addr == '\0')
		return (write(1, "(nil)", 5));
	return (write(1, "0x", 2) + _puts(addr_convert(addr, 16)));
}
/**
 * addr_convert - converts an address to hexa
 * @num: number to convert, dividend
 * @base: base, divider
 *
 * Return: pointer to the last remainder obtained in the buffer
 */
char *addr_convert(unsigned long int num, int base)
{
	static const char set[] = "0123456789abcdef";
	static char bufer[64];
	char *ptr = NULL;
	int rest = 0;

	ptr = &bufer[63];
	*ptr = '\0';
	if (num == 0)
	{
		*--ptr = '0';
	}
	for (; num != 0;)
	{
		rest = num % base;
		*--ptr = set[rest];
		num = num / base;
	}
	return (ptr);
}
/**
 * not implemented
 */
int Non_printable_char(va_list args)
{
	char *ASCII = va_arg(args, char *);
	int iterator = 0, j = 0, counter = 0;

	if (ASCII == NULL)
		return (write(1, "(null)", 6));
	for (; ASCII[iterator] ; iterator++)
	{
		if (ASCII[iterator] < 32 || ASCII[iterator] >= 127)
		{
			counter += write(1, "\\x", 2);
			j = 1;
			while (iterator + counter < iterator + 2)
			{
				counter += _putchar(string_toupper(addr_convert(ASCII[iterator], 16))[0]);
				counter += _putchar(string_toupper(addr_convert(ASCII[iterator], 16))[1]);
				j++;
			}
		}
		else
			counter += write(1, &ASCII[iterator], 1);
	}
	return (counter);
}
