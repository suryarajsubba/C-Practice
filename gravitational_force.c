#include<stdio.h>

float gforce(float);

float gforce(float m)
{
    return m*9.8;
}

int main()
{
    float m;
    
    printf("Enter mass: ");
    scanf("%f", &m);

    printf("Gravitational Force = %.2f N", gforce(m));

    return 0;
}