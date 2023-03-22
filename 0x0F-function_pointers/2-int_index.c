#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array of integers to search
 * @size: size of the array
 * @cmp: pointer to the function which validates the search
 * Return: index of the firest element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i != size; i++)
	{
		if (cmp(array[i]) == 1)
		break;
	}
	if (i == size)
	{
		return (0);
	}
	return (i);
}
