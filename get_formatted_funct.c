#include "main.h"
/**
 * get_formatted_funct - determines the function to use according to the type of format of the received matriz
 * @format: matriz or parameters received
 *
 * Return: returns the function valid or null
 */
int (*get_formatted_funct(const char *format))(va_list arg)
{
        f_types_t funcs_ls[] = {        /*structure functions of format types*/
                {'c', print_char},
                {'s', print_string},
                {'i', print_int},
                {'d', print_decimal},
		{'u', print_unsig_deci},
		/*{'o', print_octa},*/
		{'r', print_strev}
        };
        int i = 0;

        for (; funcs_ls[i].types; i++)  /*loop through my array structure*/
                if (*format == funcs_ls[i].types)       /*compare the argument with my structure*/
                        return (funcs_ls[i].f);
        return (NULL);
}
