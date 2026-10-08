#include<stdio.h>
#include<string.h>

int main()
{
    char name[30];
    
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int vowels = 0;
    int consonants = 0;

    for (int i=0; name[i]!='\0'; i++)
    {
        if (name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' || name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U')
        {
            vowels++;
        }
        else if ((name[i]>='a' && name[i]<='z') || (name[i]>='A' && name[i]<='Z'))
        {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}