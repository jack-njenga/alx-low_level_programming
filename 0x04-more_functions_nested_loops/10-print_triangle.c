#include "main.h"
void insert_spaces(int k);
void insert_tags(int l);

/**
 * print_triangle - prints a triangle
 * @size: an integer
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int n = size;
	int spaces = n - 1;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			insert_spaces(spaces--);
			insert_tags(i + 1);
			_putchar('\n');
		}
	}
}

/**
 * insert_spaces - insert empty spaces
 * @k: an integer
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

/**
 * insert_tags - insert hash tags
 * @l: an integer
 * Return: returns void
 */

void insert_tags(int l)
{
	int t;

	for (t = 0; t < l; t++)
	{
		_putchar('#');
	}
}
