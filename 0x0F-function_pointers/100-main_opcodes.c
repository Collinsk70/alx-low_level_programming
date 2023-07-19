#include <stdio.h>
#include <stdlib.h>
#include <udis86.h>

/**
 * print_opcodes - Function to print the opcodes of its own main function
 * @num_bytes: The number of bytes to print
 */
void print_opcodes(int num_bytes)
{
    int i;
    unsigned char *main_func = (unsigned char *)print_opcodes;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_func[i]);
        if (i < num_bytes - 1)
            printf(" ");
    }
    printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 for incorrect number of arguments, 2 for negative number of bytes.
 */
int main(int argc, char *argv[])
{
    int num_bytes;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes <= 0)
    {
        printf("Error\n");
        return 2;
    }

    print_opcodes(num_bytes);

    return 0;
}

