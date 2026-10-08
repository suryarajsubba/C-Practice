#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';       //fixing the newline problem when pressing Enter

    //input validation
    int onlyspaces = 1;      //we assume that the input is only spaces i.e invalid input
    for (int i=0; name[i]!='\0'; i++)
    {
        if (name[i]!=' ')
        {
            onlyspaces = 0;     //our assumption was wrong i.e the input does not contain only spaces. So, valid input
            break;
        }
    }

    if (onlyspaces)
    {
        printf("Invalid input");
    }
    else
    {
        printf("Valid input");
    }

    return 0;
}