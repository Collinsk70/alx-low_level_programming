#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in a string of any bytes in another string
 * @s: The string to be searched
 * @accept: The string containing bytes to search for
 *
 * Return: A pointer to the byte in `s` that matches one of the bytes in `accept`,
 *         or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
    char *s_ptr;
    char *a_ptr;

    for (s_ptr = s; *s_ptr != '\0'; s_ptr++)
    {
        for (a_ptr = accept; *a_ptr != '\0'; a_ptr++)
        {
            if (*s_ptr == *a_ptr)
                return s_ptr;
        }
    }

    return (NULL);
}

