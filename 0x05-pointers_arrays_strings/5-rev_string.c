#include "main.h"
#include <stdio.h>

/**
 * re_string - reveres a given string
 * @s: string to be reversed
 *
 * Return:void
 */

void rev_string(char *s)
{
	int len = 0, n =0;
	char tmp;

	while (s[n++])
	{
		len++;
	}
	for (n = len - 1; n >= len / 2; n--)
	{
		tmp = s[n];
		s[n] = s[len -n -1];
		s[len - n -1] = tmp;
	}
}
