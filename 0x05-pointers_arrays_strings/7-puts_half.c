#include "main.h"
#include <stdio.h>

/**
* puts_half - a function that prints half of a string
* @str: input
*
* Return:void
*/

void puts_half(char *str)
{
	int r = 0;
	int d;

	while (str[r] != '\0')
	{
		r++;
	}
	if (r % 2 == 1)
	{
		d = (r - 1) / 2;
		d += 1;

	}
	else
	{
		d = r / 2;
	}
	for (; d < r; d++)
	{
		_putchar(str[d]);
	}
	_putchar('\n');
}
