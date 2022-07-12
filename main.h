#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
/*PROTOTYPES*/
/**
 * struct f_types - format struct
 * @types: struct
 * @f: pinter to formats
 * @arg: formats
 */
typedef struct f_types
{
        char types;
        int (*f)(va_list arg);
} f_types_t;

int _putchar(char c);

int _printf(const char *format, ...);

/*PROTOTPEYS FUNCTIONS*/
int (*get_formatted_funct(const char *format))(va_list arg);

int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_decimal(va_list arg);
int print_unsig_deci(va_list arg);
/*int print_octa(va_list arg);*/
int print_strev(va_list arg);

/*int _convert(unsigned int num, int base);*/
int str_len(const char *str);
#endif /*MAIN_H*/
