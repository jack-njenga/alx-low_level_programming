#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: The destination string to append to
 * @src: The source string to append from
 * @n: The maximum number of characters to append
 *
 * Return: A pointer to the resulting string @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
