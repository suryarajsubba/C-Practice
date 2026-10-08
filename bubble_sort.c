#include<stdio.h>

void sort(int numbers[], int size);

void sort(int numbers[], int size)
{
    int swapped;

    for (int i=0; i<size-1; i++)
    {
        swapped = 0;
        for (int j=0; j<(size-1)-i; j++)
        {
            if (numbers[j]>numbers[j+1])
            {
                int temp;
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                swapped = 1;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

void printArray(int [], int);

void printArray(int numbers[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

int main()
{
    int numbers[5] = {50, 10, 40, 20, 30};
    
    printArray(numbers, 5);
    sort(numbers, 5);
    printArray(numbers, 5);

    return 0;
}