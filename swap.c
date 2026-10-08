#include<stdio.h>

void swap(int* , int*);

void swap(int* x, int* y){
    int temp;               // temp means temporary variable
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 4;
    int b = 6;
    
    printf("The value of a is %d and the value of b is %d\n", a, b);

    swap(&a,&b);

    printf("The value of a is %d and the value of  b is %d\n", a, b);

    return 0;
}