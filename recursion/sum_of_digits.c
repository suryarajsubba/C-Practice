// SUM OF DIGITS
// Enter a number: 215
// Sum of digits = 8    //(because 2+1+5)

#include<stdio.h>

int sum_of_digits(int n)
{
    if (n/10==0)        //this means if n is a single digit number i.e n<10
    {
        return n;
    }
    else
    {
        int digit = n % 10;          //last digit
        int remaning_digits = n/10;

        return (digit + sum_of_digits(remaning_digits));

        /*
        example if n=215: 
        sum_of_digits(215) = 5 + sum_of_digits(21)
                            = 5 + 1 + sum_of_digits(2)
                            = 5 + 1 + 2
                            = 8
        */
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int result = sum_of_digits(n);
    printf("Sum of digits = %d", result);

    return 0;
}