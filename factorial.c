// Write a program to calculate the factorial of a given number using a for loop.
// 5! = 5 x 4 x 3 x 2 x 1
#include<stdio.h>

int main()
{
    int n;
    int result = 1;
    

    printf("Enter a number: ");
    scanf("%d", &n);

    // for(int i = n; i>=1; i--)
    // {
    //     result = result * i;
    // }
    
    // Or this can be done with 'while' loop as done below

    int i = 1;
    while(i<=n)
    {
        result = result * i;
        i++;
    }

    printf("%d! = %d", n, result);
    
    return 0;
}

// I don't know how but it worked lol