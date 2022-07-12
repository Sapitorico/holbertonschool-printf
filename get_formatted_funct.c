#include "main.h"
/**
 * get_formatted_funct - determines the function to use
 * @format: parametrer
 * Return: function value
 */
int (*get_formatted_funct(const char *format))(va_list arg)
{
	f_types_t funcs_ls[] = {        /*structure functions of format types*/
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_decimal},
		{'u', print_unsig_deci},
		{'r', print_strev}
	};
	int i = 0;

	for (; funcs_ls[i].types; i++)  /*loop through my array structure*/
		if (*format == funcs_ls[i].types)
			return (funcs_ls[i].f);
	return (NULL);
}
