#include "main.h"

/**
 * more_numbers - prints 10 times numbers 0 to 14,then new line.
 * Return:void
 */

void more_numbers(void);

void more_numbers(void)
{
	int l, n

	for (l = 0; l < 10; l++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n > 9)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar(10);
	}
}
