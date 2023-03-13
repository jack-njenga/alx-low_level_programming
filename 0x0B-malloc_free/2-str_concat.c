#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int n;
	char *cp;
	int len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1) + strlen(s2) + 1;
	cp = malloc(sizeof(char) * len);
	if (cp == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		cp[i] = s1[i];
	}
	for (n = 0; s2[n] != '\0'; n++)
	{
		cp[i] = s2[n];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
