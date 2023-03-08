#include "main.h"
/**
 * _pow_recursion - returns the value of x^y
 * @x: number to square
 * @y: power
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* base case: invalid input */
	}
	if (y == 0)
	{
		return (1); /*base case :x^o = 1 */
	}
	if (y == 1)
	{
		return (x); /* base case : x^1 = x*/
	}
	return (x * _pow_recursion(x, y - 1)); /*recursive case: x^y = x * x^(y-1) */
}
