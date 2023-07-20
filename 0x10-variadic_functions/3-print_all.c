#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print arguments based on the provided format.
 * @format: A string containing the format characters for the arguments.
 *            c: char
 *            i: integer
 *            f: float
 *            s: char * (if the string is NULL, print (nil) instead)
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *str_arg;
	int int_arg;
	char char_arg;
	float float_arg;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_arg = va_arg(args, int);
				printf("%c", char_arg);
				break;
			case 'i':
				int_arg = va_arg(args, int);
				printf("%d", int_arg);
				break;
			case 'f':
				float_arg = va_arg(args, double);
				printf("%f", float_arg);
				break;
			case 's':
				str_arg = va_arg(args, char *);
				if (str_arg == NULL)
					str_arg = "(nil)";
				printf("%s", str_arg);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}

