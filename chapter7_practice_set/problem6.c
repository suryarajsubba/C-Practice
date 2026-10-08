//Write a program containing functions which counts the number of positive integers in an array

#include<stdio.h>

int count_positive(int array[], int size);
int count_positive(int array[], int size)
{
    int count = 0;
    for (int i=0; i<size; i++)
    {
        if (array[i]>0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int numbers[10] = {1, 3, 21, -12, -23, 33, 65, -3, 34, 4};

    printf("Number of positive integers: %d", count_positive(numbers, 10));

    return 0;
}