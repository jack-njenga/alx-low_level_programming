#include "function_pointers.h"
/**
 * _puts - prints out a string to the stdout
 * @s: string tho print
 * Return:void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);	
	}
	_putchar('\n');
}
