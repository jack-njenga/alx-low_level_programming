#include "main.h"
/**
 * _strlen - tells the length of a string
 * @s: string to check the legth
 *
 * Return:length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
