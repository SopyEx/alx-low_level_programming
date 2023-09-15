#include"main.h"
#include<stdio.h>
/**
 * print_line - main function
 * @n: number of time printed
 */

void print_line(int n)
{
	int 1nChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (1nChr = 1; 1nChr <= n; 1nChr++)
			_putchar('_');
		_putchar('\n');
	}
}
