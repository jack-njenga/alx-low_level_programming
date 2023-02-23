#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14,then new line.
 * Return:void
 */

void more_numbers(void);

void more_numbers(void)
{
	int l;

	while (l < 10)
	{
		int n = 0;

		while (n < 15)
		{
			_putchar('0' + n);
			n++;
		}
		_putchar('\n');
	}
	l++
	_putchar('\n');
}
