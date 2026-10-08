#include<stdio.h>
#include<string.h>

int main()
{
    char name[25];
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int words = 0;
    if (name[0]!='\0')
    {
        words = 1;
    }
    
    for (int i=0; name[i]!='\0'; i++)
    {
        if (name[i]==' ')
        {
            words++;
        }
    }

    printf("Words: %d", words);

    return 0;
}