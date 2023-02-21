#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the number to be cheched
 *
 * Return: 1 for positive num, -1 for negative num 0r 0 for anything else
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
	_putchar('0');
	return (0);
	}
}
