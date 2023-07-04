#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to find
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
    char *h_ptr, *n_ptr;

    if (*needle == '\0')
        return haystack;

    while (*haystack != '\0')
    {
        h_ptr = haystack;
        n_ptr = needle;

        while (*n_ptr != '\0' && *h_ptr == *n_ptr)
        {
            h_ptr++;
            n_ptr++;
        }

        if (*n_ptr == '\0')
            return haystack;

        haystack++;
    }

    return NULL;
}

