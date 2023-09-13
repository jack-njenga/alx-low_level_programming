#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search.
 *
 * Return: Returns the index where the value is at
 * on success, Otherwise -1 on failure.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right, mid;

	if (!array || size == 0)
		return (-1);
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * print_array - prints the current array.
 *
 * @arr: Array to print
 * @start: Where to start printing from.
 * @end: As the name suggests where to stop printing at.
 *
 * Return: This one shall return void.
 */
void print_array(int *arr, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
	printf("\n");
}
