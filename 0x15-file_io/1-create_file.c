#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - Creates a file with specified content.
 * @filename: Name of the file to create.
 * @text_content: Content to write into the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
    int file_descriptor, bytes_written = 0;

    if (filename == NULL)
        return (-1);

    file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL)
    {
        while (text_content[bytes_written])
            bytes_written++;

        bytes_written = write(file_descriptor, text_content, bytes_written);
        if (bytes_written == -1)
        {
            close(file_descriptor);
            return (-1);
        }
    }

    close(file_descriptor);
    return (1);
}

