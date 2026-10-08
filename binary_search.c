#include <stdio.h>

int firstOccurrence(int numbers[], int size, int search)
{
    int low = 0;
    int high = size - 1;
    int first_index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (numbers[mid] == search)
        {
            first_index = mid;
            high = mid - 1;   // Keep searching left
        }
        else if (search > numbers[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return first_index;
}


int lastOccurrence(int numbers[], int size, int search)
{
    int low = 0;
    int high = size - 1;
    int last_index = -1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (numbers[mid] == search)
        {
            last_index = mid;
            low = mid + 1;    // Keep searching right
        }
        else if (search > numbers[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return last_index;
}


void printMatchingIndexes(int first_index, int last_index)
{
    if (first_index == -1)
    {
        printf("Number not found!");
        return;
    }

    printf("Number found at indexes: ");

    for (int i = first_index; i <= last_index; i++)
    {
        printf("%d ", i);
    }
}


int main()
{
    int numbers[7] = {10, 20, 20, 20, 30, 40, 50};
    int search;

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    int first_index = firstOccurrence(numbers, 7, search);
    int last_index = lastOccurrence(numbers, 7, search);

    printMatchingIndexes(first_index, last_index);

    return 0;
}