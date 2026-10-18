#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = calloc(3, sizeof(int));      //allocate memory and initialise all integers to 0

    //check allocation failures
    if (ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    //assign values
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    int *temp = realloc(ptr, 5 * sizeof(int));
    if (temp==NULL)
    {
        printf("Failed to re-allocate memory\n");
        free(ptr);
        return 1;
    }
    else
    {
        ptr = temp;
    }

    ptr[3] = 40;
    ptr[4] = 50;

    //print the integers
    for (int i=0; i<5; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);      //free the allocated memory
    
    return 0;
}