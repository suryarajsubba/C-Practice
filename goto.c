#include<stdio.h>

int main()
{
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    if(n<0)
    {
        goto negative;
    }
    printf("Positive number\n");
    goto end;
    negative:
        printf("Negative number\n");
    end:
        return 0;
}