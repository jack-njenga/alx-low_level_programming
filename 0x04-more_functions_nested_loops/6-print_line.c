#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: integer
 * Returns: void
 */

void print_line(int n);

void print_line(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;

		for (t = 0; t < n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
