#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The product of num1 and num2.
 */
int multiply(char *num1, char *num2);

/**
 * isNumeric - Checks if a string is composed only of digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string is numeric, 0 otherwise.
 */
int isNumeric(char *str);

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!isNumeric(num1) || !isNumeric(num2)) {
        printf("Error\n");
        return 98;
    }

    int result = multiply(num1, num2);

    printf("%d\n", result);

    return 0;
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: The product of num1 and num2.
 */
int multiply(char *num1, char *num2)
{
    int length1 = 0;
    int length2 = 0;

    while (num1[length1] != '\0') {
        if (!isdigit(num1[length1])) {
            printf("Error\n");
            exit(98);
        }
        length1++;
    }

    while (num2[length2] != '\0') {
        if (!isdigit(num2[length2])) {
            printf("Error\n");
            exit(98);
        }
        length2++;
    }

    int resultLength = length1 + length2;
    int *result = calloc(resultLength, sizeof(int));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int i, j, carry, prod;
    for (i = length1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = length2 - 1; j >= 0; j--) {
            prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i] = carry;
    }

    int finalLength = resultLength;
    while (finalLength > 0 && result[finalLength - 1] == 0) {
        finalLength--;
    }

    int finalResult = 0;
    for (i = 0; i < finalLength; i++) {
        finalResult = finalResult * 10 + result[i];
    }

    free(result);

    return finalResult;
}

/**
 * isNumeric - Checks if a string is composed only of digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string is numeric, 0 otherwise.
 */
int isNumeric(char *str)
{
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

