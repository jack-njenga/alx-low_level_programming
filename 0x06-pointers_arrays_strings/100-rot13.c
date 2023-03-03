#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encodede
 * Return : str
 */
char *rot13(char *s)
{
	int i, n;
	char df[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (s[i] == df[n])
			{
				s[i] = encode[n];
				break;
			}
		}
	}
	return (s);
}
