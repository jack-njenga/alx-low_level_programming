#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 *
 * @array: A pointer of the first element of the array to search.
 * @size: size of the array
 * @value: value to search in the array.
 *
 * Return: Returns the first index where value is located otherwise -1.
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, left = 0, right, i;

	if (!array)
		return (-1);
	jump = sqrt(size);
	right = jump;

	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right = right + jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (i = left; i < right && i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
