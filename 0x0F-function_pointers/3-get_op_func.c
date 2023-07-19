#include "3-calc.h"

/**
 * get_op_func - Function to get the appropriate function for the operator
 * @s: The operator passed as an argument to the program
 *
 * Return: A pointer to the function that corresponds to the operator given as a parameter.
 *         If s does not match any of the 5 expected operators (+, -, *, /, %), return NULL.
 */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op)
    {
        if (*(ops[i].op) == *s)
            return (ops[i].f);
        i++;
    }

    return (NULL);
}

