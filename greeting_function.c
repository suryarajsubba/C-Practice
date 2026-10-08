#include<stdio.h>

void gmorning(char name[])
{
    printf("Good Morning, %s\n", name);
}
void gevening(char name[])
{
    printf("Good Evening, %s\n", name);
}
void gnight(char name[])
{
    printf("Good Night, %s\n", name);
}



int main()
{
    gmorning("Surya");
    gevening("Boss");
    gnight("Sir");

    return 0;
}