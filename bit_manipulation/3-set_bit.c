#include "main.h"

/**
 * set_bit - Sets the bit at specific index to 1;
 * @n: The number
 * @index: The index
 *
 * Return: 1,
 *	-1 if fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
