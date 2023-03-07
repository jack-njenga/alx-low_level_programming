#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboar
 * @a: nested array holding playing area and pieces
 *
 * Return: returns nothing
 */
void print_chessboard(char(*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar(10);
	}
}
