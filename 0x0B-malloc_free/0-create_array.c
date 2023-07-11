#include <stdio.h>
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
    
    printf("Array contents: ");
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
    
    free(array);
    
    return 0;
}

