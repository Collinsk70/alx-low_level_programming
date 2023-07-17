#include <stdio.h>
#include "main.h"

/**
 * printFileName - Prints the name of the file it was compiled from.
 */
void printFileName(void)
{
    printf("Compiled from: %s\n", __FILE__);
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    printFileName();
    return 0;
}

