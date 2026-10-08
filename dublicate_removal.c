#include<stdio.h>

int main()
{
    char word[] = "surya raj subba";

    char result[30];        //this will contain the new string with removed dublicate characters
    int result_index = 0;   
    
    for (int i=0; word[i]!='\0'; i++)
    {
        
        if (word[i]==' ' || word[i]=='\n')      //ignore spaces and newline character
        {
            continue;
        }

        int already_found = 0;

        for (int j=0; j<i; j++)     //checking dublicates
        {

            if (word[j]==word[i])
            {
                already_found = 1;
                break;
            }

        }

        if (already_found)      //if dublicates found then skip the current character and check the next character
        {
            continue;
        }
        else
        {
            result[result_index] = word[i];     //else copy the non-dublicate character into another variable
            result_index++;
        }

    }
    
    result[result_index] = '\0';        //terminating the string

    printf("%s\n", word);           //original word
    printf("%s\n", result);         //word with non-dublicate characters

    return 0;
}