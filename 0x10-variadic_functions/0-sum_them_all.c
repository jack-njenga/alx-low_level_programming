#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parametes
 * @n: sum of parameters
 * Return: sum of it parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int x;
	unsigned int sum;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		if (i == 0)
		{
			sum = x;
		}
		else
		{
			sum = sum + x;
		}
	}
	return (sum);

	va_end(args);
}
