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
		str = "(null)";
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
	return (_strlen(str));
}

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
 * print_rot13ed - prints an encrypted string in rot13
 * @args: list of arguments received from the varied function
 *
 * Return: number of characters printed
 */
int print_rot13ed(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	for (; *str;)
	{
		if ((*str >= 'a' && *str <= 'm') || (*str >= 'A' && *str <= 'M'))
			_putchar(*str + 13);
		else if ((*str >= 'n' && *str <= 'z') || (*str >= 'N' && *str <= 'Z'))
			_putchar(*str - 13);
		else
			_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
