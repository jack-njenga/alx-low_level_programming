#include <stdio.h>

/**
 * reset_to_98 - updates the value it points to to 98
 *
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
	putchar(*n);
	putchar('\n');
}