
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Function to print a nam
 * @name: The name to be printed
 * @f: Pointer to a function that takes a char pointer
 *
 * This function takes a name and a function pointer
 * the function
 * effectively printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
