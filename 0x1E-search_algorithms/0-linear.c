#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the Linear search algorithm.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search.
 *
 * Return: Returns -1 on failure otherwise the index of value on success.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if ((!array) | (!value))
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
