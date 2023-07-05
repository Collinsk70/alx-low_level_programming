#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    /* Base cases */
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;

    /* Check if n is divisible by 2 or 3 */
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    /* Check for divisibility by numbers from 5 to sqrt(n) */
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

