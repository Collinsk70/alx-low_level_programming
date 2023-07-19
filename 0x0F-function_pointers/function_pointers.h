#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib>

 /* Function prototype for the function to print a name using the function pointer */
void print_name(char *name, void (*f)(char *));

#endif /* MAIN_H */

