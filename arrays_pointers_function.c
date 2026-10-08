#include<stdio.h>

void modify(int [], int);
void modify(int numbers[], int size)
{
    int *p = numbers;

    // while (p<numbers+size)       //1st method
    // {
    //     *p *= 2;
    //     p++;
    // }

    for (int i=0; i<size; i++)      //2nd method
    {
        *p *= 2;
        p++;
    }
}

void printArray(int [], int);
void printArray(int numbers[], int size)
{
    int *p = numbers;
    
    // for (int i=0; i<size; i++)       //1st method
    // {
    //     printf("%d ", numbers[i]);
    // }

    while (p<numbers+size)              //2nd method
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
}


int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};

    printArray(numbers, 5);
    modify(numbers, 5);
    printArray(numbers, 5);

    return 0;
}