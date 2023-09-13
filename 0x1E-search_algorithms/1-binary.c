#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search.
 *
 * Return: Returns the index where the value is at on success, Otherwise -1 on failure.
 */

int binary_search(int *array, size_t size, int value)
{
	int *arr = array, sz = (size / 2);

	if ((!array) || size == 0)
		return (-1);
	else
	{
		while (value != sz)
		{
			printf("sz = %d\n", sz);
			if (value < sz)
			{
				printf("%d is < %d -- %ld\n", value, sz, sizeof(arr));
				arr = divide_array(arr, sz, -1);
			}
			else if (value > sz)
			{
				printf("%d is > %d -- %ld\n", value, sz, sizeof(arr));
				arr = divide_array(arr, sz, 1);
			}
			else
			{
				printf("%d is == %d --%ld\n", value, sz, sizeof(arr));
				free(arr);
				return (sz);
			}
			sz = (size / 2);
			if (sizeof(arr) < 8)
				return (-1);
		}
	}
	return (-1);
}

int *divide_array(int *array, int sz, int i)
{
	int *new_arr = malloc(sz * sizeof(int));
	int n;
	
	if (i == -1)
	{
		for (n = 0; n < sz; n++)
		{
			new_arr[n] = array[n];
		}
	}
	else
	{
		for (n = 0; array[sz] != '\0'; n++)
		{
			new_arr[n] = array[sz];
			sz++;
		}
	}
	return (new_arr);
}
