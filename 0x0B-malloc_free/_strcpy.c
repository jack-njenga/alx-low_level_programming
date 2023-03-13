#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copyies the contents of
 * a variable to another varaible
 * @to: where to copy
 * @from: from where to copy
 * Return: a pointer to the new copy
 */
char *_strcpy(char *to, char *from)
{
	int i;

	if (to == NULL)
	{
		return (NULL);
	}
	for (i = 0; from[i] != '\0'; i++)
	{
		to[i] = from[i];
	}
	to[i] = '\0';
	return (to);
}
