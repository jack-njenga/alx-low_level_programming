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
	int l2 = 0;
	int n;

	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (l1 < l2)
	{
		n = -1;
	}
	else if (l1 == l2)
	{
		n = 0;
	}
	else
	{
		n = 1;
	}
	return (n);
}
