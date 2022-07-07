#include "main.h"

int (*get_format(const char *format))(va_list arg)
{
	f_types_t funcs_ls[] = {        /*type_format_functions strunct*/
		{'c', print_char},
		{'s', print_string}
	};
	int i = 0;

	for (; funcs_ls[i].types; i++)
	{
		if (*format == funcs_ls[i].types)
			return (funcs_ls[i].f);
	}
	return (NULL);
}
  /*format functions*/
int print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);
	return (1);
}
int print_string(va_list arg)
{
	char *str;
	int i = 0;

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	for (; str[i]; i++)
	{
	_putchar(str[i]);
	}
	return (i);
}
