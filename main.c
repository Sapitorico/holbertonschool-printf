#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Character:[%c]\n", 'S');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string de sapito !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("%!\n");
	_printf("%d \n",100);
	 _printf("Negative:[%d]\n", -762534);
        return (0);
}
