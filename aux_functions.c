#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _puts - prints a string
 * @str: pointer to the address of the first position of the string
 *
 * Return: the output value from write
 */
int _puts(char *str)
{
	return (write(1, str, _strlen(str)));
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 *
 * Return: all elements of the stirng
 */
int _strlen(char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: pointer to the string
 * Return: returns the position of the changed characters
 */
char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	return (str);
}
/**
 * base_convert - converts an integer to any base
 * @num: number to convert, dividend
 * @base: base, divider
 *
 * Return: pointer to the last remainder obtained in the buffer
 */
char *base_convert(long int num, int base)
{
	static const char set[] = "0123456789abcdef";
	static char bufer[64];
	char *ptr = NULL;
	int rest = 0;

	ptr = &bufer[63];
	*ptr = '\0';
	for (; num != 0;)
	{
		rest = num % base;
		*--ptr = set[rest];
		num = num / base;
	}
	return (ptr);
}
