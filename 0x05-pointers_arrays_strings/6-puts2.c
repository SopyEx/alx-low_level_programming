#include"main.h"
/**
 * puts2 - main function
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (1 % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
