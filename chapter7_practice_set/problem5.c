//Write a program containing a function which reverses the array passed to it

#include<stdio.h>

void reverse(int array[], int size);
void reverse(int array[], int size)
{
    int temp;

    for (int i = 0; i<(size/2); i++)
    {
        temp = array[0];
        array[i] = array[(size-1) - i];
        array[(size-1) - i] = temp;
    }
}

void printArray(int array[], int size);
void printArray(int array[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int numbers[5] = {10,20,30,40,50};

    printArray(numbers, 5);
    reverse(numbers, 5);
    printArray(numbers, 5);
    
    return 0;
}