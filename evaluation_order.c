#include<stdio.h>

int main()
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    // You thought this would print 4 5 5 right? But it won't! The evaluation order is from right to left.
    // first it will see a++ at the right end. So it will print 4 then increase it to 5.
    // then comes ++a. It will first increase it to 6 then print it.
    // at last is a. It will print the current value of a i.e 6.
    // So output becomes 6 6 4 

    return 0;
}