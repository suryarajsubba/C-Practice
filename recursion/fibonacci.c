// Fibonaaci Series : 0, 1, 1, 2, 3, 5, 8, 13, ...
// f(0)=0, f(1)=1
// f(2) = f(1) + f(0) = 1 + 0 = 1
// f(3) = f(2) + f(1) = 1 + 1 = 3

#include<stdio.h>

int fibonacci(int n)
{
    if (n==0 || n==1)
    {
        return n;
 
    }
    else
    {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main()
{
    int n;

    printf("Enter the position: ");
    scanf("%d", &n);

    printf("f(%d) = %d", n, fibonacci(n));

    return 0;
}