#include<stdio.h>

int main()
{
    int numbers[5];
    int sum = 0;

    for (int i=0; i<5; i++)
    {
        printf("Enter the integer at index %d: ", i);
        scanf("%d", &numbers[i]);
    }

    // for (int i=0; i<5; i++)
    // {
    //     printf("%d\n", numbers[i]);
    // }

    // for (int i=0; i<5; i++)
    // {
    //     sum = sum + numbers[i];
    // }

    // int largest = numbers[0];

    // for (int i=0; i<5; i++)
    // {
    //     if (numbers[i]>largest)
    //     {
    //         largest = numbers[i];
    //     }
    // }

    // int smallest = numbers[0];
    // for (int i=0; i<5; i++)
    // {
    //     if (numbers[i]<smallest)
    //     {
    //         smallest = numbers[i];
    //     }
    // }
    
    // printf("Sum: %d\n", sum);
    // printf("Average: %.2f\n", sum/5.0);
    // printf("Largest: %d\n", largest);
    // printf("Smallest: %d\n", smallest);
    
    int search;
    int found = 0;
    int index[5];

    printf("Enter the number you want to search: ");
    scanf("%d", &search);

    for (int i=0; i<5; i++)
    {
        if (numbers[i]==search)
        {
            index[found] = i;
            found++;
            
        }
    }
    if (found)
    {
        for (int i=0; i<found; i++)
        {
            printf("Number found at index %d\n", index[i]);
        }
        printf("The number %d appears %d times", search, found);
    }
    else
    {
        printf("Number not found!");
    }
    
    return 0;
}