#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read........................,
 * @filename: T..................,
 * @letters: Number................................,
 * Return: w - Actual........,
 *         0 w...................,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *text_buffer;
	ssize_t file_descriptor;
	ssize_t bytes_read;
	ssize_t bytes_written;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	text_buffer = malloc(sizeof(char) * letters);
	if (text_buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, text_buffer, letters);
	if (bytes_read == -1)
	{
		free(text_buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, text_buffer, bytes_read);

	free(text_buffer);
	close(file_descriptor);
	return (bytes_written);
}

