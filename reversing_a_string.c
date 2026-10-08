#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int last_index = strlen(name) - 1;
    int temp;           //temporary variable

    for (int i=0; i<(strlen(name)/2); i++)
    {
        temp = name[i];
        name[i] = name[last_index-i];
        name[last_index-i] = temp;
    }

    for (int i=0; i<strlen(name); i++)
    {
        printf("%c", name[i]);
    }

    return 0;
}