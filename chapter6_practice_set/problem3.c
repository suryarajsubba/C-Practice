// Write a program to change the value of a variable to ten times its current value.

#include<stdio.h>

void change_to_ten_times(int* n){
*n = *n * 10;
}

int main()
{
    int a = 3;
    printf("The value of a is %d\n", a);    

    change_to_ten_times(&a);

    printf("The new value of a is %d\n", a);

    return 0;
}