// FACTORIAL OF A NUMBER
// 5! = 5 x 4 x 3 x 2 x 1 = 120
// 1! = 1    // 0! = 1
// n! = n x (n-1)!

#include<stdio.h>

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n-1));
    }
}

int main()
{
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    int result = factorial(n);
    printf("%d! = %d", n, result);

    return 0;
}