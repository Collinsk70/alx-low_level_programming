#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    if (n == 0) {
        _putchar('0');
        return;
    }

    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    int temp = n;

    while (temp != 0) {
        divisor *= 10;
        temp /= 10;
    }

    while (divisor > 1) {
        divisor /= 10;
        _putchar((n / divisor) + '0');
        n %= divisor;
    }

    _putchar(n + '0');
}
