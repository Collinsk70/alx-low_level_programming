#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of the main function.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Print the opcodes of the main function */
	unsigned char *address = (unsigned char *)&main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", address[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

