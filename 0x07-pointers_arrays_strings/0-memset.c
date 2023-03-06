#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s:Memory location
 * @b:value to fill in the memory location
 * @n:Number of memory locations to be filled
 *
 * Return:Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
