#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the number to be cheched
 *
 * return:1 and print'+' if 'n' is positive, -1 & prints '-' if 'n' if negative, else 0  & prints 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar(0);
	return (0);
	}
}
