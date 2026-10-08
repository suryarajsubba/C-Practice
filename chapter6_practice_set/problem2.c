// Write a program having a variable i . Print the address of i. Pass this variable to a function and print its address. Are these addresses the same? Why?

#include<stdio.h>

void check_address(int* x)
{
    printf("The address inside the function is %p\n", x);
}

int main()
{
    int i = 5;
    int* ptr = &i;
    printf("The address of i is %p\n", ptr);
    check_address(ptr);

    return 0;
}

// Yes, both addresses are the same because the address of i is passed to the function, so the function receives the address of the same memory location occupied by i.