#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}

int _putchar(char c)
{
	/* Implementation of _putchar using the write syscall */
	if (write(1, &c, 1) == -1)
		return -1;
	return 0;
}

int main(void)
{
	print_alphabet();
	return 0;
}
