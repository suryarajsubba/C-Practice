//Repeat problem 3 for a general input provided by the user using an array. 9 respectively. scanf .

#include<stdio.h>

int main()
{
    int arr[10];
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i=0; i<10; i++)
    {
        
        arr[i] = n * (i+1);
        printf("%d\n", arr[i]);
    }

    return 0;
}