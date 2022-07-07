#include "main.h"
/**
 * _printf - functions printed formats
 *
 * @format: format by sring pirnted
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int const1 = 0, const2 = 0;
	int (*f)(va_list arg);

	va_start(args, format);		/*initialize arguments list*/
	if (!format)
		return (-1);
	while (format[const1] != '\0')	/*check and recognize the length of format*/
	{
		for (; format[const1] != '%' && format[const1]; const1++)
		{
			_putchar(format[const1]);
			const2++;
		}
		if (!format[const1])
		{
			return (const2);
		}
		f = get_format(&format[const1 + 1]);
		if (f != NULL)
		{
			const2 += f(args);
			const1 += 2;	/*print the following characters*/
			continue;
		}
		if (!format[const1 + 1])
		{
			return (-1);
		}
		_putchar(format[const1]);
		const2++;	/*print the string*/
		if (format[const1 + 1] == '%')
			const1 += 2;
		else
		const1++;
	}
	va_end(args);
	return (const2);	/*Returns the number of characters printed*/
}
