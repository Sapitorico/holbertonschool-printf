#include "main.h"
/**
 * _printf - function that prints a format string
 * @format: pointer to the constant string to be printed as the format
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	va_list args;	/*tructure type matrix for the various arguments*/
	int constant = 0, counter = 0;
	int (*f)(va_list agrs);

	va_start(args, format);/*initialize arguments list*/
	if (!format)	/*in case of receiving an empty argument returns error*/
		return (-1);
	while (format[constant])/*does not depend on the number of iterations*/
	{
		/*travels up to %, without taking it into account*/
		for (; format[constant] != 37 && format[constant]; constant++)
		{
			counter += _putchar(format[constant]);/*prints string*/
		}
		/*check if where it is positioned there is a % of*/
		if (format[constant] == 37)
		{
			constant++;
			/*checks in case of having received only % as argument*/
			if (!format[constant])
				return (-1);
			/*requests the function to print the format*/
			f = get_format(&format[constant]);
			if (f)
			{
				counter += f(args);
			}
			else
			{
				/*printed the % and character follow in case of no flag*/
				counter += _putchar(format[counter]);
				counter += _putchar(format[constant]);
			}
			constant++;
		}
	}
	va_end(args);
	return (counter);/*returns the number of characters printed*/
}
