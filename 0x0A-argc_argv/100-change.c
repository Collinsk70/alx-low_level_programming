#include <stdio.h>
#include "main.h"

/**
 * main - Calculates the minimum number of coins for change
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

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

	for (; cents >= 25; coins++)
		cents -= 25;

	for (; cents >= 10; coins++)
		cents -= 10;

	for (; cents >= 5; coins++)
		cents -= 5;

	for (; cents >= 2; coins++)
		cents -= 2;

	while (cents > 0)
	{
		cents -= 1;
		coins++;
	}

	printf("%d\n", coins);
	return (0);
}

