#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    
    printf("How many integers do you want to enter? ");
    scanf("%d", &n);

    int *ptr = malloc(n * sizeof(int));

    //user input
    for (int i=0; i<n; i++)
    {
        printf("Enter the integer: ");
        scanf("%d", &ptr[i]);
    }

    //print the integers
    for (int i=0; i<n; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    free(ptr);
    
    return 0;
}