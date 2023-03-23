#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator:  the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int var;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		var = va_arg(args, const unsigned int);
		printf("%d%s", var, ((i != n - 1) ? separator : ""));
	}
	printf("\n");
	va_end(args);
}
