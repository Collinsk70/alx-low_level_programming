#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "main.h"

int multiply(char *num1, char *num2);
int isNumeric(char *str);
int getLength(char *str);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    if (!isNumeric(num1) || !isNumeric(num2))
    {
        printf("Error\n");
        return (98);
    }

    int result = multiply(num1, num2);

    printf("%d\n", result);

    return (0);
}

int multiply(char *num1, char *num2)
{
    int length1 = getLength(num1);
    int length2 = getLength(num2);
    int resultLength = length1 + length2;
    int *result = calloc(resultLength, sizeof(int));

    if (result == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    int i, j, carry, prod;
    for (i = length1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = length2 - 1; j >= 0; j--)
        {
            prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i] = carry;
    }

    int finalLength = resultLength;
    while (finalLength > 0 && result[finalLength - 1] == 0)
    {
        finalLength--;
    }

    int finalResult = 0;
    for (i = 0; i < finalLength; i++)
    {
        finalResult = finalResult * 10 + result[i];
    }

    free(result);

    return (finalResult);
}

int isNumeric(char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

int getLength(char *str)
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return (length);
}

