#include"main.h"
/**
 * _puts - main function
 * @str: strings
 * Return: nothing
 */

void _puts(char *str)
{
	for (str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
