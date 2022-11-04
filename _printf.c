#include "main.h"
/**
 */
int _printf(const char *format, ...)
{
	va_list args;
	int constant = 0, counter = 0;
	int (*f)(va_list agrs);

	va_start(args, format);
	while (format[constant])
	{
		for (; format[constant] != '%'; counter++)
		{
			putchar(format[constant]);
			counter++;
		}
		f = get_format(&format[counter + 1]);
		f(args);
		constant+=2;
		counter++;
	}
	return(counter);

}
