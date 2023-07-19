#include "function_pointers.h"

/**
 * print_name - Function to print a name using the function pointer
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char pointer argument and returns void
 *
 * This function takes a name and a function pointer as arguments. It then calls
 * the function pointed to by the function pointer with the provided name as an argument,
 * effectively printing the name.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
