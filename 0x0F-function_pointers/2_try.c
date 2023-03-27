#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers to search for
 * @size: size of the array
 * @cmp: function to valitate
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
