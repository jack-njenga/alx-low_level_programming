#include "main.h"

/**
 * print_most_numbers - prints 0 to 9, then '\n' but not 2 and 4.
 * Returns:void
 */

void print_most_numbers(void);

void print_most_numbers(void)
{
	int n;

	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar('0' + n);
		}
		n++;
	}
	_putchar('\n');
}
