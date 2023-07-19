#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @num_bytes: Number of bytes to print.
 *
 * Usage: ./main number_of_bytes
 * Output format:
 *     The opcodes should be printed in hexadecimal, lowercase.
 *     Each opcode is two characters long.
 *     The listing ends with a new line.
 *
 * Return: Nothing.
 * If the number of arguments is not correct, print "Error",
 * followed by a new line, and exit with status 1.
 * If the number of bytes is negative, print "Error",
 * followed by a new line, and exit with status 2.
 */
void print_opcodes(int num_bytes)
{
	// Check if the number of bytes is negative
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	// Get the address of the main function
	void *main_func_ptr = (void *)(&print_opcodes);

	// Use objdump to get the opcodes of the main function
	char command[100];
	sprintf(command, "objdump -d -j.text -M intel ./main | grep -A %d '<main>:' | awk '{print $2}'", num_bytes);
	FILE *fp = popen(command, "r");
	if (fp == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	// Read and print the opcodes in the desired format
	char opcode[3];
	while (fscanf(fp, "%2s", opcode) == 1)
	{
		printf("%s ", opcode);
	}
	printf("\n");

	// Close the file pointer
	pclose(fp);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 * If the correct number of arguments is not provided, print "Error",
 * followed by a new line, and exit with status 1.
 */
int main(int argc, char *argv[])
{
	// Check if the correct number of arguments is provided
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	// Convert the argument to an integer
	int num_bytes = atoi(argv[1]);

	// Print the opcodes of the main function
	print_opcodes(num_bytes);

	return (0);
}

