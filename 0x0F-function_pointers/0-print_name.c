#include "main.h"

/**
 * print_name - Function to print a name using the function pointer
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char pointer argument and returns void
 *
 * Return: An integer value, in this example, we return 42 (just for illustration purposes)
 */
int print_name(char *name, void (*f)(char *)) {
    f(name);
    return (0);
}

