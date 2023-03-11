#include "main.h"
/**
 * _strchr - locates a character in astring
 * @s:string
 * @c: character to search
 * Return: pointer to first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
