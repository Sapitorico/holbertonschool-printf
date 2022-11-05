#include "main.h"
/**
 * _printf - prints formats
 * @format: received parameters
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;
	int constant = 0, counter = 0;
	int (*f)(va_list agrs);

	va_start(args, format);
	while (format[constant])
	{
		for (; format[constant] != '%' && format[constant]; constant++)
		{
			_putchar(format[constant]);
			counter++;
		}
		if (!format[constant])
			return (counter);
		f = get_format(&format[constant + 1]);
		if (f)
		{
			counter += f(args);
			constant += 2;
			continue;
		}
		if (!format[constant + 1])
			return (-1);
		_putchar(format[constant]);
		constant++;
		if (format[constant + 2] == '%')
			counter += 2;
		else
			constant++;
	}
	return (counter);
}
