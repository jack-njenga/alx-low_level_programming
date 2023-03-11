#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0; /*initialize i and n to 0*/

	while (dest[i] != '\0')
	{
		i++; /* find out the end of string 1 */
	}
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
