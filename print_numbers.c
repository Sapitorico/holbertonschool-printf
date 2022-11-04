#include "main.h"
char *base_convert(int num, int base)
{
	static char set[] = "0123456789ABCDEF";
	static char bufer[64];
	char *ptr = NULL;

	ptr = &bufer[63];
	*ptr = '\0';
	for (; num != 0;)
	{
		*--ptr = set[num % base];
		num /= base;
	}
	return (ptr);
}
/**
 */
int print_inter(va_list args)
{
	int inter;

	inter = va_arg(args, int);
	if (inter < 0)
	{
		inter -= inter;
		_putchar('-');
	}
	return (_puts(base_convert(inter, 10)));
}
int print_binary(va_list args)
{
	unsigned int bin;

	bin = va_arg(args, unsigned int);
	return(_puts(base_convert(bin, 2)));
}
int unsigned_int(va_list args)
{
	unsigned int u;

	u = va_arg(args, unsigned int);
	return (_puts(base_convert(u, 10)));
}
int print_octa(va_list args)
{
	int octa;

	octa = va_arg(args, int);
	return(_puts(base_convert(octa, 8)));
}
int print_hexa(va_list args)
{
	int hexa;

	hexa = va_arg(args, int);
	return (_puts(base_convert(hexa, 16)));
}
