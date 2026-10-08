#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    //user input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';       //removing newline character when pressing Enter after giving input

    char original[20];
    strcpy(original, name);     //preserving the original name
    printf("Original name: %s\n", original);

    int length = strlen(name);      //length of name
    int last_index = length - 1;

    int temp;           //temporary variable

    for (int i=0; i<(length/2); i++)        //reversing
    {
        temp = name[i];
        name[i] = name[last_index-i];
        name[last_index-i] = temp;
    }
    printf("Reversed name: %s\n", name);

    int x = strcmp(original, name);     //comparing the original name and the reversed name //will return 0 if both are equal
    if (x==0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    
    return 0;
}