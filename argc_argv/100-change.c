#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coins for amount of money
 *
 * @argc: argument count
 * @argv: arguments
 * Return: 1 if wrong number of arguments, 0 if negative number,
 * number of cents otherwise.
 */
int main(int argc, char *argv[])
{
int cents;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

printf("%d\n", get_min_coins(cents));
return (0);
}

int get_min_coins(int cents)
{
int coins[] = {25, 10, 5, 2, 1};
int num_coins = 0;
int i;

for (i = 0; i < 5; i++)
{
num_coins += cents / coins[i];
cents %= coins[i];
}
return num_coins;
}

int _putchar(char c)
{
return write(1, &c, 1);
}
