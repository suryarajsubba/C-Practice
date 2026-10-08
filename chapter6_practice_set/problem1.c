//Write a program to print the address of a variable. Use this address to get the value of the variable.

#include<stdio.h>

int main()
{
    int a = 10;
    printf("The address of a is %p\n", &a);
    printf("The value at address %p is %d\n", &a, *(&a));

    return 0;
}