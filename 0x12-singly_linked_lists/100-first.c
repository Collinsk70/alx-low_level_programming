#include <stdio.h>

/* The constructor function to print the message */
void before_main(void) __attribute__((constructor));

/**
 * before_main - Function executed before the main function.
 *
 * Description: This function is automatically executed before the main
 *              function when the program starts, and it prints the message.
 */
void before_main(void)
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
	/* The main function */
	printf("This is the main function.\n");

	return (0);
}

