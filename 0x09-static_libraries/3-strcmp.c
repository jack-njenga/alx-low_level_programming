#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2:string 2
 *
 * Return: either -1, 0, 1
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0;

	while (s1[l1] != '\0' && s2[l1] != '\0')
	{
		if (s1[l1] != s2[l1])
		{
			return (s1[l1] - s2[l1]);
		}
		l1++;
	}
	return (0);
}
