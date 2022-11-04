#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
typedef struct get_formats
{
	char f_s;
	int (*f)(va_list args);
} get_t;

int _putchar(char c);

int print_char(va_list args);
int print_inter(va_list args);
int print_string(va_list args);
int print_binary(va_list args);
int unsigned_int(va_list args);
int print_octa(va_list args);
int print_hexa(va_list args);
int _printf(const char *format, ...);
int _puts(char *str);

int (*get_format(const char *s))(va_list args);

#endif
