#include"main.h"

/**
 * nurlength - returns the length of string
 * @num: operand number
 * Return: number of digits
 */
int nurlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 * Description: prints the first 98 fibonnacci numbers
 *       starting with 1 and 2 followed by a new line
 * Return: 0 always
 */
int main(void)
{
	int count, initial0s;
	unsigned long f1 = 1, f2 = 2, sum, nx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		inital0s = nurlength(nx) - 1 - nurlength(f1);

		while (f1o > 0 && initial0s > 0)
		{
			printf("%d", 0);
			initial0s--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % nx;
		sumo = f1o + f2o + (f1 + f2) / nx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
