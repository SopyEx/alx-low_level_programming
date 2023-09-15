#include"main.h"
/**
 * print_line - main function
 * @n: number of time printed
 */

void print_line(int n)
{
	int 1nchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (1nchr = 1; 1nchr <= n; 1nchr++)
			_putchar('_');
		_putchar('\n');
	}
}
