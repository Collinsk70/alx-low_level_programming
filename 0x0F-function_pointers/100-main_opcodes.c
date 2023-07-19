#include <stdio.h>
#include <stdlib.h>

/**
 * print_main_opcodes - Prints the opcodes of the main function.
 * @num_bytes: The number of bytes to print from the main function.
 */
void print_main_opcodes(int num_bytes)
{
    if (num_bytes <= 0)
    {
        printf("Error\n");
        exit(2);
    }

    // Create a function pointer to the main function
    void (*main_function)(void) = main;

    // Loop through the opcodes and print them
    for (int i = 0; i < num_bytes; i++)
    {
        printf("%02x ", ((unsigned char *)main_function)[i]);
    }
    printf("\n");
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 1 if incorrect number of arguments provided, 2 if num_bytes is negative.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);
    print_main_opcodes(num_bytes);

    return 0;
}

