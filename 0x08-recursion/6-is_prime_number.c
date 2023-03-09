#include "main.h"

int prime_helper(int n, int i);
/**
 * is_prime_number - checks if an integer is prime
 * @n: number to check
 * Return:1 os 0
 */
int is_prime_number(int n)
{
	int i = 2;

	return (prime_helper(n, i));
}
/**
 * prime_helper - helps is_prime_number function
 * @n: number to check
 * @i: recurvisive integer
 * Return: 1 or 0
 */
int prime_helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (n % i == 0 && i < n)
	{
		return (0);
	}
	if (i == n)
	{
		return (1);
	}
	else
	return (prime_helper(n, i + 1));
}
