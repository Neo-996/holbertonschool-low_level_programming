#include "main.h"

/**
 * binary_to_uint - Converts binary to unsigned int.
 * @b: Binary number
 *
 * Return: The converted number,
 *	0 if fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 1;
	int len = 0, started = 0, start;

	if (b == NULL || !*b)
		return (0);
	while (*(b + len))
	{
		if (*(b + len) - '0' != 1 && *(b + len) - '0' != 0)
			return (0);
		if (*(b + len) - '0' == 1 && !started)
		{
			started = 1;
			start = len + 1;
		}
		len++;
	}
	while (start < len)
	{
		if (*(b + start) - '0' == 0)
			number *= 2;
		else
			number = number * 2 + 1;
		start++;
	}
	return (number);
}
