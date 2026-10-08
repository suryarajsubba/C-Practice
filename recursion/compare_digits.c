//find the largest digit of an integer. 
//ex. if n = 2153
//then print 5

#include<stdio.h>

int compare(int n)
{
    if (n<10)
    {
        return n;
    }
    else
    {
        int digit = n % 10;
        int remaining_digits = compare(n/10);
        
        if (remaining_digits > digit)
        {
            return remaining_digits;
        }
        else
        {
            return digit;
        }
    }
}

int main()
{
    int n;

    printf("Enter  a number: ");
    scanf("%d", &n);

    printf("Largest digit = %d", compare(n));

    return 0;
}