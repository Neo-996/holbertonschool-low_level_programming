#include "main.h"

/**
 * get_bit - Gets the bit at index.
 * @n: The number
 * @index: The index
 *
 * Return: Number at index,
 *	-1 if fails.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
