#include "search_algos.h"

/**
 * _puts - uses putchar to print a string
 *
 * @str: the string to print.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		putchar(str[i]);
}
