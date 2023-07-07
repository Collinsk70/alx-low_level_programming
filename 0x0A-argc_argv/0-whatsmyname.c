#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	print_program_name(argv[0]);
	return 0;
}

/**
 * print_program_name - Prints the program name
 * @program_name: The name of the program
 */
void print_program_name(char *program_name)
{
	printf("%s\n", program_name);
}

