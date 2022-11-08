#include "main.h"
/**
 * get_format - returns the function corresponding to the format
 * @s:format specifier
 *
 * Return: returns the corresponding function
 */
int (*get_format(const char *format_flag))(va_list)
{
	get_t functions[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_inter},
		{'i', print_inter},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octa},
		{'x', print_hexa},
		{'X', print_HEXA},
		{'r', print_rev},
		{'R', print_rot13ed},
		{'p', print_address},
		{'\0', NULL},
	};
	int iterator = 0;

	for (; functions[iterator].f_s; iterator++)
		if (*format_flag == functions[iterator].f_s)
			return (functions[iterator].f);
	return (0);
}
