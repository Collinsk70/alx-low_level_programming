#include <stdio.h>

/* The constructor function to print the message */
void print_message(void) __attribute__((constructor));

/**
 * print_message - Function executed before the main function.
 *
 * Description: This function is automatically executed before the main
 *              function when the program starts, and it prints the message.
 */
void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
	return (0);
}

