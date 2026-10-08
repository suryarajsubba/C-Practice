#include<stdio.h>

// Celsius to Fahrenheit --> F = (C x 9/5) + 32
// Fahrenheit to Celsius --> C = (F - 32) x 5/9

float fahrenheit(float);

float fahrenheit(float c)
{
    return (c * 9/5) + 32;
}

int main()
{
    float c;

    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);

    printf("The temperature in fahrenheit is %.2f", fahrenheit(c));

    return 0;
}