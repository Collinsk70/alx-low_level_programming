#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_all_digits - checks if a string contains only digits
 * @str: input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_all_digits(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - Prints the sum of numbers passed as arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i;
	int str_to_int;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_all_digits(argv[i]))
		{
			str_to_int = atoi(argv[i]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

