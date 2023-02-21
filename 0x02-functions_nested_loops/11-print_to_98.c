#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98 then '/n'
 * @n: starting number
 * return: void
 */

void print_to_98(int n)
{
	int a;
	int b;

	if (n == 98)
	{
		printf("98");
	}
	else if (n < 98)
	{
		for (a = n; b <= 98; a++)
		{
			if (a == 98)
			{
				printf("98");
			}
			else
			{
				printf("%d, ", a);
			}
		}
	}
	else if (n > 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b == 98)
			{
				printf("98");
			}
			else
			{
				printf("%d, ", b);
			}
		}
	}
	printf("\n");
}
