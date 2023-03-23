#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separator to be printed between the strings
 * @n: number of parameter
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s == NULL)
		{
			printf("nil");
		}
		if (separator != NULL)
		{
			printf("%s%s", s, (i == n - 1) ? "" : separator);
		}
	}
	printf("\n");
	va_end(args);
}
