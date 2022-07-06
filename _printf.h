#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/*PROTOTYPES*/
typedef struct f_types
{
	char types;
	int (*f)(va_list arg);
} f_types_t;

int _putchar(char c);

int _printf(const char *format, ...);

/*PROTOTPEYS FUNCTIONS*/

int print_char(va_list arg);
int print_string(va_list arg);
int print_indic(va_list arg);

#endif /*_PRINTF_H*/
