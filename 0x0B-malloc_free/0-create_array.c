#include <stdio.h>
#include <stdlib.h>  // Add this line to include <stdlib.h> header
#include "main.h"

int main(void)
{
    unsigned int size = 10;
    char c = 'A';
    char *array = create_array(size, c);
    
    if (array == NULL)
    {
        printf("Failed to create array.\n");
        return 1;
    }
    
    unsigned int i;  // Move the declaration of 'i' outside the loop
    
    printf("Array contents: ");
    for (i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
    
    free(array);
    
    return 0;
}

