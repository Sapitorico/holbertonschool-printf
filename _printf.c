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
	while (format && format[constant])
	{
		for (; format[constant] != '%' && format[constant]; constant++)
		{
			_putchar(format[constant]);
			counter++;
		}
		/**printf("position char:[%c]\n", format[constant]);**/
		/**printf("position num:[%d]\n", counter);**/
		if (format[constant] == '%')
		{
			constant++;
			f = get_format(&format[constant]);
			if (f)
				counter += f(args);
			else
				counter += _putchar(format[constant]);
			constant++;
		}
	}
	va_end(args);
	return (counter);
}

/**
 * previous code - changes
 * printed well in some cases
 * errors:
 * - did not accept multiple formats
 * - took one character less than the long on
 *
 */
/**	while (format[constant])
	{
		for (; format[constant] != '%' && format[constant]; constant++)
		{
			_putchar(format[constant]);
			counter++;
		}
		*unnecessary exit condition*
		*conditioned by the while*
		if (!format[constant])
			return (counter);
		*format positioned in %, I made a check condition and incremented the constant within*
		f = get_format(&format[constant + 1]);
		if (f)
		{
			counter += f(args);
			constant += 2;
			continue;*execution resumes at the top of the loop with the evaluation of the loop test*
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
	*here limit the argument list, no longer used*
	return (counter);
**/
