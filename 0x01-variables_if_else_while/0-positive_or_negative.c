#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 success
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > o)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is nagetive", n);
	printf("\n")
	return (0);
}
