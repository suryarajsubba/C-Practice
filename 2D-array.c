#include<stdio.h>

int main()
{
    int numbers[3][3];
    int sum = 0;

    for (int i=0; i<3; i++)         //rows
    {
        for (int j=0; j<3; j++)     //columns
        {
            printf("Enter an integer at index [%d][%d]: ", i, j);
            scanf("%d", &numbers[i][j]);
            sum += numbers[i][j];
        }
    }

    for (int i=0; i<3; i++)         //rows
    {
        for (int j=0; j<3; j++)     //columns
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    int largest = numbers[0][0];
    int smallest = numbers[0][0];
    int row_sum[3] = {0,0,0};
    int column_sum[3] = {0,0,0};
    int diagonal1_sum = 0;
    int diagonal2_sum = 0;

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            if (numbers[i][j]>largest)
            {
                largest=numbers[i][j];
            }

            if (numbers[i][j]<smallest)
            {
                smallest = numbers[i][j];
            }

            row_sum[i] += numbers[i][j];
            column_sum[i] += numbers[j][i];

            if (i==j)
            {
                diagonal1_sum += numbers[i][j];
            }

            if (i+j==2)         // General rule for N x N matrix is N-1. Here, N = 3, so N - 1 = 2.
            {
                diagonal2_sum += numbers[i][j];
            }
        }

        printf("Sum of row %d: %d\n", i, row_sum[i]);
        printf("Sum of column %d: %d\n", i, column_sum[i]);
    }

    printf("Sum: %d\n", sum);

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    printf("Sum of main diagonal: %d\n", diagonal1_sum);
    printf("Sum of secondary diagonal: %d\n", diagonal2_sum); 

    return 0;
}