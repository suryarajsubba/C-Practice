#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("How many integers do you want to enter? ");
    scanf("%d", &n);

    int *ptr = calloc(n, sizeof(int));      //allocate memory and initialise all integers to 0

    //check allocation failures
    if (ptr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // //user input
    // for (int i=0; i<n; i++)
    // {
    //     printf("Enter the integer: ");
    //     scanf("%d", &ptr[i]);
    // }

    //print the integers
    for (int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);      //free the allocated memory
    
    return 0;
}