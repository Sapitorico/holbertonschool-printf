#include "main.h"
/**
 */
int print_HEXA(va_list args)
{
	unsigned int HEXA = va_arg(args, unsigned int);

	return(_puts(string_toupper(base_convert(HEXA, 16))));
}
