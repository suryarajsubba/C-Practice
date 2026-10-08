#include<stdio.h>

int main()
{
    int i = 17;
    int *j = &i;        // j is a pointer pointing towards i. It is a variable that stores the address of i.

    // printf("The address of i is %p\n", &i);      // or this can be done as below
    printf("The address of i is %p\n", j);          // we can write %u instead of %p to see the address in numbers (It converts the address which is in hexadecimal to decimal)
    printf("The value at address j is %d\n", *(j));     // instead of j(after *) we can also write &i

    int *k = j;
    printf("%p", k);

    return 0;
}