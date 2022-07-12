#include "main.h"
/**
 * print_char - function that prints characters
 *
 * Return: always 1
 */
int print_char(va_list arg)
{
        char character;

        character = va_arg(arg, int);
        _putchar(character);
        return (1);
}
