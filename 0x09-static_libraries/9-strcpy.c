#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src:  string
 *
 * Return: returns the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n;

	while (1)
	{
		if (src[i])
		{
			i++;
		}
		else if (!src[i])
		{
			break;
		}
	}
	/* printf("\n\nsrc has %d charachters\n\n", i); */

	for (n = 0; n < i; n++)
	{
		/* printf("\nAddress for src[%d] is %p\n", n, &(src[n])); */
		dest[n] = src[n];
		/* printf("\nAddress for dest[%d] is %p\n", n, &(dest[n])); */
	}
	dest[n] = '\0';
	return (dest);
}
