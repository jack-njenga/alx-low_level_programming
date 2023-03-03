#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @str: string to be encodede
 * Return : str
 */
char *rot13(char *str)
{
	int i, n;
	char df[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encode[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; str[i] != '\0'; i++)
	{
		for (n = 0; n < 52; n++)
		{
			if (str[i] == df[n])
			{
				str[i] = encode[n];
				break;
			}
		}
	}
	return (str);
}
