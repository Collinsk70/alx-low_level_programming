#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
	const char *message =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = 59;
	ssize_t bytes_written;

	bytes_written = write(STDERR_FILENO, message, len);

	if (bytes_written != len)
		return (1);

	return (1);
}
