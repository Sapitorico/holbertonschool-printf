#include "main.h"
/**
 */
int (*get_format(const char *s))(va_list args)
{
	get_t functions[] = {
		{'c', print_char},
		{'\0', NULL}
	};
	int iterator = 0;

	for (; functions[iterator].f_s; iterator++)
		if (*s == functions[iterator].f_s)
			return (functions[iterator].f);
	return(0);
}