#include "main.h"
/**
 * _puts - Prints a string
 * @s: The string to print
 * Return: (void)
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
