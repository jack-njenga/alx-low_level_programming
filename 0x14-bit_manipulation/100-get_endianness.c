#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	size_t i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
