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
	size_t num = 0, ans = 0;

	if (b == NULL || !*b)
		return (0);

	while (b[ans])
	{
		if (b[ans] > 49)
			return (0);
		else if (b[ans] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		ans++;
	}
	return (num);
}
