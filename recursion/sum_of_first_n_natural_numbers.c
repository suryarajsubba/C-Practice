//sum of first n natural numbers

#include<stdio.h>

int sum(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return (n + sum(n-1));
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum(n);
    printf("Sum of first %d natural numbers = %d\n", n, result);

    return 0;
}