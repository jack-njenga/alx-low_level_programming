#include "main.h"

/**
 * print_square - prints a square
 * @size: an integer
 * Return: returns void
 */
void print_square(int size);

void print_square(int size)
{
	int i;
	int j;
	int n = size;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
