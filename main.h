#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*PROTOTYPES*/
typedef struct f_types
{
	char types;
	int (*f)(va_list arg);
} f_types_t;

int _putchar(char c);

int _printf(const char *format, ...);

/*PROTOTPEYS FUNCTIONS*/
int (*get_format(const char *format))(va_list arg);

int print_char(va_list arg);
int print_string(va_list arg);

#endif /*MAIN_H*/
