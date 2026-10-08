#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    int guessed_number;
    int attempts = 0;

    printf("\n==================== NUMBER GUESSING GAME ====================\n\n");

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        attempts += 1;
        if (guessed_number == randomNumber)
        {
            printf("\nCONGRATULATIONS!\nYou guessed the number %d in %d attempts!\n", randomNumber, attempts);
        }
        else
        {
            if (guessed_number<randomNumber)
            {
                printf("Higher number please.\n\n");
            }
            else
            {
                printf("Lower number please.\n\n");
            }
        }
    } while (guessed_number != randomNumber);
    

    return 0;
}