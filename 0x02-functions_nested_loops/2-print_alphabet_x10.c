#include <main.h>

/**
 * print_alphabet_x10 - prints lowercase alphabets 10X
 * Return:0
 */

void print_alphabet_x10(void)
{
	int n = 0;

	while (n < 10)
	{
		char ch;

		for (ch = 'a' ; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		n++;
	}
}
