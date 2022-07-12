#include "main.h"
/**
 * print_string - función que imprime una string de caracteres
 *
 * Return: posición inicial
 */
int print_string(va_list arg)
{
        char *str;
        int i = 0;

        str = va_arg(arg, char *);
        if (!str)
        {
                str = "(null)";
        }
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
        return (i);
}
/**
 * str_len - function that determines the length of a string
 *
 * Return: at start of iterator
 */
int str_len(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++);
	return(i);
}
/**
 * print_strev - function that prints strings in reverse
 *
 * Return: string length
 */
int print_strev(va_list arg)
{
	const char *str;
	int i, len;

	str = va_arg(arg, const char *);
	len = str_len(str);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	return (len);
}
