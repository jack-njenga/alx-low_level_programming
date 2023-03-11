#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area to copy the data
 * @src: the source of the data
 * @n: the amount of memory area to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
