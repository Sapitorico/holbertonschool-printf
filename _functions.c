#include "main.h"
/**
 * get_format - function check the format
 * @format: wawawa wa wa wa
 * Return: NULL
 */
int (*get_format(const char *format))(va_list arg)
{
	f_types_t funcs_ls[] = {        /*type_format_functions strunct*/
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
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
/**
 * print_char - function print char
 * @arg: list argument
 * Return: 1
 */
int print_char(va_list arg)
{
	char character;

	character = va_arg(arg, int);
	_putchar(character);
	return (1);
}
/**
 * print_string - function print string
 * @arg: list argument
 * Return: position 0 of the string
 */
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
int print_int(va_list arg)
{
	int a[10];
	int i, m, n, sum, count;

	n = va_arg(arg, int);
	count = 0;
	m = 1000000000;
	a[0] = n / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (n / m) % 10;
	}
	if (n < 0)
	{
		_putchar('-');
		count++;
		for (i = 0; i < 10; i++)
			a[i] *= -1;
	}
	for (i = 0, sum = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum != 0 || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
