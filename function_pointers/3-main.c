#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Performs simple operations based on user input
 * @argc: The number of arguments
 * @argv: The array of argument strings
 *
 * Return: 0 on success, exit with status codes on errors
 */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
