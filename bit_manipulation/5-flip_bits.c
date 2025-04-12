#include "main.h"

/**
 * flip_bits - Finds the couunt of bits that differs.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of different bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int counter = 0, k = m ^ n;

	while (k)
	{
		if (k & 1)
			counter++;
		k >>= 1;
	}
	return ((unsigned int)counter);
}
