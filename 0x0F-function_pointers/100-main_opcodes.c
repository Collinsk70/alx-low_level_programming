#include <stdio.h>
#include <stdlib.h>

/**
 * print_main_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print from the main function.
 */
int main(int a, char *b[])
{
	int bts, i;

	if (a != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bts = atoi(b[1]);

	if (bts < 0)
	{
		printf("Error\n");
		exit(2);
	}

	/* Print the opcodes of the main function */
	unsigned char *adrs = (unsigned char *)&main;
	for (i = 0; i < bts; i++)
	{
		printf("%02x", adrs[i]);
		if (i < bts - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

