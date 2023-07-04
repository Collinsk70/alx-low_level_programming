#include <stdlib.h>
#include "main.h"

/**
 * _strpbrk - Locates the first occurrence in a string
 * @s: The string to be searched
 * @accept: The string containing bytes to search for
 *
 * Return: A pointer to the byte in `s`,
 *         or NULL
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
                return (s_ptr);
        }
    }

    return (NULL);
}

