#include "variadic_functions.h"

/**
 * print_char - Print a character.
 * @arg_list: Argument list containing the character to print.
 */
void print_character(va_list arg_list)
{
    printf("%c", va_arg(arg_list, int));
}

/**
 * print_integer - Print an integer.
 * @arg_list: Argument list containing the integer to print.
 */
void print_integer(va_list arg_list)
{
    printf("%d", va_arg(arg_list, int));
}

/**
 * print_floating - Print a floating-point number.
 * @arg_list: Argument list containing the floating-point number to print.
 */
void print_floating(va_list arg_list)
{
    printf("%f", va_arg(arg_list, double));
}

/**
 * print_string - Print a string.
 * @arg_list: Argument list containing the string to print.
 */
void print_string(va_list arg_list)
{
    char *str = va_arg(arg_list, char *);

    if (!str)
    {
        printf("(nil)");
        return;
    }
    printf("%s", str);
}

/**
 * print_all - Print any combination of characters, integers, floats, and strings.
 * @format: A string containing format characters representing the types of arguments.
 *           c: character
 *           i: integer
 *           f: float
 *           s: string (if the string is NULL, print (nil) instead)
 */
void print_all(const char * const format, ...)
{
    print_format format_list[] = {
        {"c", print_character},
        {"i", print_integer},
        {"f", print_floating},
        {"s", print_string},
        {NULL, NULL}
    };
    va_list args;
    char *separator = "";
    int i = 0;
    int j = 0;

    va_start(args, format);
    while (format && format[i])
    {
        while (format_list[j].format_char)
        {
            if (*format_list[j].format_char == format[i])
            {
                printf("%s", separator);
                format_list[j].print_func(args);
                separator = ", ";
            }
            ++j;
        }
        j = 0;
        ++i;
    }
    printf("\n");
    va_end(args);
}

