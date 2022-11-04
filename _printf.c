#include "main.h"
void module_check(const char *format, int constant);
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
		for (; format[constant] != '%' && format[constant]; constant++)
		{
			_putchar(format[constant]);
			counter++;
		}
		/**module_check(format, constant);**/
		f = get_format(&format[counter + 1]);
		if (f)
		{
			f(args);
			constant+=2;
			continue;
		}
		constant++;
	}
	return(counter);

}
/**void module_check(const char *format, int constant)
{
	if (format[constant + 1] == '%')
	{
		constant+=2;	
		_putchar(format[constant - 1]);
	}
}**/
