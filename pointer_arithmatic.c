#include<stdio.h>

int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;

    while(p<=&numbers[4])        //or we can write p<numbers+5
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");

    p = numbers;
    while(p<numbers+5)
    {
        *p *= 2;
        printf("%d ", *p);
        p++; 
    }
    return 0;
}