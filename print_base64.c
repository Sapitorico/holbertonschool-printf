#include "main.h"
/**
 */
char *base_convert64(unsigned long int num, int base)
{
	static const unsigned char set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz012345679+/";
	static char aux[65];
	int rest = 0;
	char *ptr = NULL;

	ptr = &aux[64];
	*ptr = '\0';
	for (; num != 0;)
	{
		rest = num % base;
		*--ptr = set[rest];
		num = num / base;
	}
	return (ptr);
}
/**
 */
int print_base64(va_list args)
{
	unsigned int base64 = va_arg(args, unsigned int);

	return (_puts(base_convert64(base64, 64)));
}
/**
 */
int print_module(__attribute__ ((unused)) va_list args)
{
	return (_putchar('%'));
}
