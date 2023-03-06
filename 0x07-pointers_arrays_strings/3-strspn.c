#include "main.h"
/**
 * _strspn - gets the lenght of a prefix substring
 * @s:string
 * @accept:bytes
 * Return: number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c, f;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		f = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				f = 1;
			}
		}
		if (f == 0)
		{
			return (f);
		}
	}
	return (0);
}
