#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 1
 */
int main(void)
{
    const char *message = "(and that piece of art is useful\" - Dora Korpar, 2015-10-19)\n";
    ssize_t len = strlen(message);
    ssize_t bytes_written = write(STDERR_FILENO, message, len);
    
    if (bytes_written != len)
    {
        return 1;
    }

    return 1;
}
