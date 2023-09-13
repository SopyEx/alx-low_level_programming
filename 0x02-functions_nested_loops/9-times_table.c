#include "main.h"
/**
 * main - main function
 * Return: 0 always
 */

void times_table(void)
{
	int i, j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			result = i * j;
			printf("%d", result);
		}
	}
	printf('\n');
}
	
