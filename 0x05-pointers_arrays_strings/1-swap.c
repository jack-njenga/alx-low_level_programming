#include "main.h"

/**
 * swap_int - swaps the values of integers a nd  b
 * @a: first integer
 * @b: second integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
