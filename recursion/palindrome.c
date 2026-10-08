#include<stdio.h>

int count_digits(int n)
{
    if (n<10)
    {
        return 1;
    }
    else
    {
        return (1+count_digits(n/10));
    }
}

int Pow(int n, int power)
{
    if (power==0)
    {
        return 1;
    }
    else
    {
        return (n * Pow(n, power-1));
    }
}

int reverse(int n)
{
    if (n<10)
    {
        return n;
    }

    else
    {
        int digit = n % 10;         //last digit
        int remaining_digits = n/10;
        int power = count_digits(n) - 1;

        return (digit * Pow(10, power) + reverse(remaining_digits));
    }
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number = %d\n", number);

    int reversed_number = reverse(number);
    printf("Reversed number = %d\n", reversed_number);

    if (number==reversed_number)
    {
        printf("PALINDROME\n");
    }
    else{
        printf("NOT PALINDROME\n");
    }

    return 0;
}