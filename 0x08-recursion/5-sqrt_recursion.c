#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * @i: parameter for _sqrt function
 * Return::natural square root
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
/**
 * _sqrt - recursive helper for function 1
 * @n: number to compute root
 * @i: current guess for square root
 * Return: natural root for n, or -1
 */
int _sqrt(int n, int i)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt(n, i + 1));
}
