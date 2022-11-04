#include "main.h"
/**
 */
int print_char(va_list args)
{
	char character;

	character = va_arg(args, int);
	return (putchar(character));
}

int print_percentage(va_list args)
{
	putchar('%');
}

int print_string(va_list args)
{
	char string[] = va_arg(args, int);
	int i;

	for(i = 0; *string; i++)
	{
		putchar(string[i]);
	}
	return(*string);
}

