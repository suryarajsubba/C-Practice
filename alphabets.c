#include<stdio.h>

int main()
{
    char ch;

    printf("Enter any letter of English alphabet: ");
    scanf("%c", &ch);

    printf("You entered \'%c\'.\n", ch);
    printf("Its ASCII value is %d.\n", ch);

    if(ch>=97 && ch<=122)
    {
        printf("It is in lowercase.\n");
    }
    else if (ch>=65 && ch<=90)
    {
        printf("It is in uppercase.\n");
    }
    else
    {
        printf("It is not a letter of English alphabet.\n");
    }

    return 0;
}