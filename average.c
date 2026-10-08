#include<stdio.h>

float average(float,float,float);

float average(float x, float y, float z)
{
    return (x+y+z)/3;
}

int main()
{
    float a,b,c;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);

    printf("The average is %.2f", average(a,b,c));

    return 0;
}