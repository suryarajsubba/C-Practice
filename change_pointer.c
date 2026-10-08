#include<stdio.h>

void changePointer(int **pp, int *new_address);
void changePointer(int **pp, int *new_address)
{
    //pp = address of p
    //*pp = value of p = address of a

    *pp = new_address;      //now *pp = address of b
}

int main()
{
    int a = 10, b = 20;
    int *p = &a;

    printf("%d\n", *p);
    changePointer(&p, &b);      //we want p = &b so that *p = 20
    printf("%d\n", *p);

    return 0;
}