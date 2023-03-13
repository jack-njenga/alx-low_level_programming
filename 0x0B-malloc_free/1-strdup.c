#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to the str
 * @str: string to use
 * Return: pointer to str or NULL
 */

char *_strdup(char *str)
{
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * sizeof(str));
	if (s == NULL)
	{
		return (NULL);
	}
	strcpy(s, str);
	return (s);
}
