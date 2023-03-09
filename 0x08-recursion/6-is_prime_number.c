#include "main.h"
/**
 * is_prime_number - checks if an integer is prime
 * @n:number to check
 * Return:1 os 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if ((n > 2 && n % 2 == 0) || (n > 3 && n % 3 == 0))
	{
		return (0);
	}
	else
	return (1);
}
