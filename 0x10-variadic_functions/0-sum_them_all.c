#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of parameters passed.
 *		If n == 0, return 0.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sm;
	va_list args;

	va_start(args, n);
	for (i = 0, sm = 0; i < n; i++)
	{
		sm += va_arg(args, int);
	}
	va_end(args);

	return (sm);
}

