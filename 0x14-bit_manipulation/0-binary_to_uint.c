#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary s stored in a string
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	size_t num, ans = 0;

	if (b == NULL)
		return (0);

	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] != '0' && b[num] != '1')
		{
			return (0);
		}
	}
	for (num = 0; b[num] != '\0'; num++)
	{
		ans <<= 1;
		ans += (b[num] - '0');
	}

	return (ans);
}
