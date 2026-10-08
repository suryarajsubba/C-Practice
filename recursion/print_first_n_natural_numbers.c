//print first n natural numbers

#include<stdio.h>

void printNumbers(int n)
{
    if (n==1)
    {
        printf("%d\n",n);
    }
    else
    {
        printNumbers(n-1);
        printf("%d\n", n);
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printNumbers(n);

    return 0;
}