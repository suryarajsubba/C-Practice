#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    fgets(name, 20, stdin);

    // printf("(Hello %s)", name);     // the fgets() function will also get the \n when we press Enter after giving input. So the ')' will be printed in a new line

    //Fix:
    name[strcspn(name, "\n")] = '\0';
    printf("(Hello %s)", name);
    
    return 0;
}