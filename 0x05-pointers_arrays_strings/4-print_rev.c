#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a given string in reverse
 * @s: string to be printed in rev
 *
 * Return:void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
