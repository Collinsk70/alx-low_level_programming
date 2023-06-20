#include "main.h"

int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');

    return 0;
}

int _putchar(char c)
{
    /* Implementation of _putchar using the write syscall */
    if (write(1, &c, 1) == -1)
        return -1;
    return 0;
}

