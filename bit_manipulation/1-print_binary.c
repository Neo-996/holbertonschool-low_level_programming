#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number that should be converted
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	if (!n)
	{
		putchar(48);
	}
	print_num(n);
}

/**
 * print_num - Helper function.
 * @n: Number that should be converted.
 *
 * Return: void.
 */
void print_num(unsigned long int n)
{
	if (!n)
	{
		return;
	}
	print_num(n >> 1);
	putchar((n & 1) + 48);
}
