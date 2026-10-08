//write a C program to accept a name and print all the characters placed on the even positions in uppercase and the odd positions in lowercase.

#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (i % 2 == 0)     //even
        {
            if (name[i] >= 'a' && name[i] <= 'z')
                printf("%c", name[i] - 32);
            else
                printf("%c", name[i]);
        }
        else                //odd
        {
            if (name[i] >= 'A' && name[i] <= 'Z')
                printf("%c", name[i] + 32);
            else
                printf("%c", name[i]);
        }
    }

    return 0;
}