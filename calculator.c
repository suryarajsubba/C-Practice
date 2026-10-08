#include<stdio.h>

int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

float divide(float a, float b)
{
    if (b==0)
    {
        printf("ERROR! Cannot divide by zero.");
        return 0;
    }
    else
    {
        return a/b;
    }
}

int square(int a);     //function prototype

int main()
{
    printf("%d\n", add(2,3));
    printf("%d\n", subtract(9,5));
    printf("%d\n", multiply(3,7));
    printf("%.2f\n", divide(25,2));
    printf("%d", square(4));

    return 0;
}

int square(int a)     //function definition
{
    return a*a;
}