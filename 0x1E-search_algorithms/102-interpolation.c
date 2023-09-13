#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of
 * integers using the Interpolation search algorithm.
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search from the array.
 *
 * Return: Returns the first index where value is located otherwise -1.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low, sm;

	if (!array)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		sm = ((double)(high - low) / (array[high] - array[low]));
		pos = low + (sm * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
