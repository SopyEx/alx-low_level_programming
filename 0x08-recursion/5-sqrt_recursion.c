#include"main.h"
/**
 *  _sqrt_recursion - main funcxtion
 *  @n: number to cal
 *  Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * @n: number to cal the sqr
 * @i: itreator
 * Return: resulting sqr
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * 1 > n)
		return (-1);
	if (i * i == n)
		return (1);
	return (actual_sqrt_recursion(n, i + 1));
}
