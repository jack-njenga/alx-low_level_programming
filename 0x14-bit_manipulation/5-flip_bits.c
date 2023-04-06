#include "main.h"
/**
 * flip_bits - calculates how many number of bits
 * you would need to flip to get from one number to another.
 * @n: integer
 * @m: integer
 * Return: returns the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}
	return (count);
}
