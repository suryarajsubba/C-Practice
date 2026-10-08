// count the number of times a digit occurs in an integer
// e.g if n = 122324 and target = 2 
// then our target, i.e, '2' appears 3 times

#include<stdio.h>

int count_digit(int n, int target)
{
    if (n<10)
    {
        if (n==target)
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    }
    else
    {
        int last_digit = n % 10;
        int remaining = count_digit(n/10, target);

        if (last_digit == target)
        {
            return (1 + remaining);
        }
        else
        {
            return (0 + remaining);
        }
    }
}

int main()
{
    int n, target;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter target: ");
    scanf("%d", &target);

    printf("%d occurs %d times\n", target, count_digit(n, target));

    return 0;
}