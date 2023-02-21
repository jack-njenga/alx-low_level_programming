#include "main.h"

/**
 * print_last_digit - prints the last digit of a nimber
 * @num: number to check
 *
 * Return: return the value of the last digit
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	while (last_digit < 0)
	{
	last_digit *= -1;
	_putchar(last_digit);
	return (last_digit);
	}
}
