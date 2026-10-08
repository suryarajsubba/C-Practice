#include<stdio.h>

void pattern1(int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    pattern1(n);

    return 0;
}