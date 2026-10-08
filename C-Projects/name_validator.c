#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    int is_valid = 1;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    //checking buffer-full problem
    if (strchr(name, '\n') == NULL)
    {
        printf("Input is too long!\n");

        //clear the remaining characters
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {

        }

        return 0;
    }
    
    name[strcspn(name, "\n")] = '\0';       //fixing the newline problem when we press Enter after giving input

    //input validation
    //checking if every character is a letter or a space
    for (int i=0; name[i]!='\0'; i++)
    {
        if ((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
        {
            // valid
        }
        else if (name[i]==' ')
        {
            //valid
        }
        else
        {
            is_valid = 0;
            break;
        }
    }

    //checking if the user entered only spaces
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
        is_valid = 0;
    }

    //trimming leading spaces
    if (name[0]==' ')     
    {
        int start = 0;
        while (name[start] == ' ')
        {
            start++;
        }
        int i;
        for (i=0; name[start + i]!='\0'; i++)
        {
            name[i] = name[start + i];
        }
        name[i] = '\0';
    }

    //trimming trailing spaces
    int length = strlen(name);
    if (length == 0)
    {
        is_valid = 0;
    }
    else
    {
        int last_index = length - 1;
        if (name[last_index] == ' ')
        {
            while(last_index>=0 && name[last_index] == ' ')
                {
                    name[last_index] = '\0';
                    last_index--;
                }
        }
    }

    //checking repeated spaces between words
    for (int i=0; name[i]!='\0'; i++)
    {
        if (i>0 && name[i]==' ' && name[i-1]==' ')      
        {
            is_valid = 0;
            break;
        }
    }

    if (is_valid)       
    {
        printf("Valid input\n");

        //capitalise the first letter of each word
        for (int i=0; name[i]!='\0'; i++)
        {
            if (i==0 || name[i-1]==' ')
            {
                if (name[i]>='a' && name[i]<='z')
                {
                    name[i] -= 32;
                }
            }
        }     
        printf("Hello %s!\n", name);
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}