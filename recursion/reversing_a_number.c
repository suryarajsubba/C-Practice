//REVERSE A NUMBER
//if n = 1234 then print 4321

#include<stdio.h>

void reverse(int n)
{
    if (n<10)
    {
        printf("%d", n);
    }

    else
    {
        int digit = n % 10;         //last digit

        printf("%d", digit);

        int remaining_digits = n/10;

        reverse(remaining_digits);
    }
}

/*
reverse(1234)
→ prints 4
→ reverse(123)

reverse(123)
→ prints 3
→ reverse(12)

reverse(12)
→ prints 2
→ reverse(1)

reverse(1)
→ prints 1
*/

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = ");
    reverse(n);

    return 0;
}