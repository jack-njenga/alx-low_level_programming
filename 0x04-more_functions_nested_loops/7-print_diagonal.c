#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: an integer
 *
 * Return: returns void
 */

void print_diagonal(int n);

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			insert_spaces(i);
			_putchar('\\');
			_putchar('\n');
		}
	}
}

/**
 * insert_spaces - insert empty spaces
 * @k: an integer
 *
 * Return: returns void
 */
void insert_spaces(int k)
{
	int s;

	for (s = 0; s < k; s++)
	{
		_putchar(' ');
	}
}
