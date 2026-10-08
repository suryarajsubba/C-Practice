//Repeat problem 7 for a custom input given by the user.

#include<stdio.h>

int main()
{
    int arr[3][10];
    int numbers[3];

    for (int i=0; i<3; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
    }
    
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<10; j++)
        {
            arr[i][j] = numbers[i] * (j+1);
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}