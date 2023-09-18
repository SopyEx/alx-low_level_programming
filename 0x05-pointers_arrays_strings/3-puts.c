#include"main.h"
/**
 * _puts - main function
 * @str: strings to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for(i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

