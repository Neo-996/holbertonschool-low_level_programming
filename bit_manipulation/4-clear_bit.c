#include "main.h"

/**
 * clear_bit - Sets the bit at specific index to 0;
 * @n: The number
 * @index: The index
 *
 * Return: 1,
 *	-1 if fails.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
