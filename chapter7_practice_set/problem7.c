//Create an array of size 3 × 10 containing multiplication tables of the numbers 2, 7 and 9 respectively

#include<stdio.h>

int main()
{
    int arr[3][10];
    int numbers[3] = {2,7,9};
    
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