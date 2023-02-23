#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 * Return: void
 */

void spaces(int a);
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
 * @a: integer
 * Return: void
 */
void spaces(int a)
{
	int s;

	for (s = 0; s < a; s++)
	{
		_putchar(' ');
	}
}
