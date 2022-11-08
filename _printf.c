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
	if (!format)
		return (-1);
	while (format && format[constant])
	{
		for (; format[constant] != 37 && format[constant]; constant++)
		{
			_putchar(format[constant]);
			counter++;
		}
		if (format[constant] == 37)
		{
			constant++;
	/**		if (!format[constant])
				return (-1);**/
			f = get_format(&format[constant]);
			if (f)
			{
				counter += f(args);
			}
			else if (format[constant] == 37)
				counter += _putchar(37);
			else
			{
				counter += _putchar(format[counter]);
				counter += _putchar(format[constant]);
			}
			constant++;
		}
	}
	va_end(args);
	return (counter);
}
