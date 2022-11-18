#include "main.h"
/**
 * get_format - providing the function to print the requested format
 * @format_flag: pointer to the requested format type
 *
 * Return: returns the function to print the formati, 0 if not found
 */
int (*get_format(const char *format_flag))(va_list)
{
	get_t functions[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_inter},
		{'i', print_inter},
		{'%', print_module},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_octa},
		{'x', print_hexa},
		{'X', print_HEXA},
		{'r', print_rev},
		{'R', print_rot13ed},
		{'p', print_address},
		{'S', Non_printable_char},
		{'B', print_base64},
		{'\0', NULL},
	};
	int iterator = 0;

	for (; functions[iterator].f_s; iterator++)
		/*looks for a match with the format structure*/
		if (*format_flag == functions[iterator].f_s)
			return (functions[iterator].f);
	return (0);
}
