#include "main.h"
#include <stdio.h>

/**
* puts2 - Prints every other character of a string
* @str: string to print
*
* Return:(void)
*/

void puts2(char *str)
{
	int len = 0;
	int z = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	z = len - 1;
	for (o = 0 ; o <= z ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
