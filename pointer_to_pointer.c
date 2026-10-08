#include<stdio.h>

int main()
{
    int i = 17;
    int *p = &i;
    int **pp = &p;

    printf("i = %d\n", i);
    printf("&i = %p\n", &i);        //address of i
    printf("p = %p\n", p);          //address of i
    printf("*p = %d\n", *p);        //value of i
    printf("&p = %p\n", &p);        //address of p
    printf("pp = %p\n", pp);        //address of p
    printf("*pp = %p\n", *pp);      //value of p, i.e, address of i
    printf("**pp = %d\n", **pp);    //value of i

    return 0;
}