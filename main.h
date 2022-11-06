#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>/*contains the macro definitions*/
#include <unistd.h>/*defines constants and symbolic types*/
#include <stdarg.h>/*allows them to accept any number of arguments*/
#include <limits.h>/*limit the values of several types of variables*/
/*printf function prototype*/
int _printf(const char *format, ...);

/*prototype of auxiliary functions*/
int _putchar(char c);
int _puts(char *str);
int _strlen(char *s);
char *string_toupper(char *str);

/*prototype of the base converter*/
char *base_convert(unsigned int num, int base);

/*prototype of the function that returns the function corresponding to the format*/
int (*get_format(const char *s))(va_list args);

/**
 * struct get_format - contains the formats
 * @f_s: format specifier
 * @f: pointer to formatting functions
 */
typedef struct get_formats
{
	char f_s;
	int (*f)(va_list args);
} get_t;

/*format prototypes*/
int print_char(va_list args);

int print_string(va_list args);

int print_inter(va_list args);

int print_binary(va_list args);

int print_unsigned(va_list args);

int print_octa(va_list args);

int print_hexa(va_list args);

int print_HEXA(va_list args);

int print_rev(va_list args);

#endif /*main.h*/
