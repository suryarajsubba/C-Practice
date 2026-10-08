#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    for (int i = 0; name[i] != '\0'; i++)
    {
        int count = 0;
        int already_counted = 0;

        if (name[i] == ' ' || name[i] == '\n')
            continue;

        // Check if this character was already counted
        for (int k = 0; k < i; k++)
        {
            if (name[i] == name[k])
            {
                already_counted = 1;
                break;
            }
        }

        if (already_counted)
            continue;

        // Count the character
        for (int j = 0; name[j] != '\0'; j++)
        {
            if (name[i] == name[j])
            {
                count++;
            }
        }

        printf("%c = %d\n", name[i], count);
    }

    return 0;
}