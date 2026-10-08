#include<stdio.h>

int main()
{
    int numbers[5]={10,20,30,40,50};
    int temp;           //temporary variable

    for (int i=0; i<(5/2); i++)
    {
        temp = numbers[i];
        numbers[i] = numbers[4-i];
        numbers[4-i] = temp;
    }

    for (int i=0; i<5; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}