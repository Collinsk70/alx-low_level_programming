#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int multiply(char *num1, char *num2);
int isNumeric(char *str);

int main(int argc, char *argv[])
{
    char *num1, *num2;
    int result, length1, length2, resultLength, i, j, carry, prod, finalLength, finalResult;

    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    if (!isNumeric(num1) || !isNumeric(num2)) {
        printf("Error\n");
        return 98;
    }

    length1 = 0;
    while (num1[length1] != '\0') {
        if (!isdigit(num1[length1])) {
            printf("Error\n");
            exit(98);
        }
        length1++;
    }

    length2 = 0;
    while (num2[length2] != '\0') {
        if (!isdigit(num2[length2])) {
            printf("Error\n");
            exit(98);
        }
        length2++;
    }

    resultLength = length1 + length2;
    int *result = calloc(resultLength, sizeof(int));
    if (result == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (i = length1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = length2 - 1; j >= 0; j--) {
            prod = (num1[i] - '0') * (num2[j] - '0') + carry + result[i + j + 1];
            carry = prod / 10;
            result[i + j + 1] = prod % 10;
        }
        result[i] = carry;
    }

    finalLength = resultLength;
    while (finalLength > 0 && result[finalLength - 1] == 0) {
        finalLength--;
    }

    finalResult = 0;
    for (i = 0; i < finalLength; i++) {
        finalResult = finalResult * 10 + result[i];
    }

    free(result);

    printf("%d\n", finalResult);

    return 0;
}

int isNumeric(char *str)
{
    while (*str) {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

