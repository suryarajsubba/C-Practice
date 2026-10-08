#include <stdio.h>
#include <string.h>

int main()
{
    char words[2][20] = {"silent", "listen"};

    int is_anagram = 1;

    int len1 = strlen(words[0]), len2 = strlen(words[1]);

    if (len1 != len2)
    {
        is_anagram = 0;
    }

    else
    {
        for (int i = 0; words[0][i] != '\0'; i++)
        {
            int count1 = 0; // count for string1
            int count2 = 0; // count for string2
            int already_counted = 0;

            // Have we already checked this character?
            for (int k = 0; k < i; k++)
            {
                if (words[0][i] == words[0][k])
                {
                    already_counted = 1;
                    break;
                }
            }

            if (already_counted)
                continue;

            // Count in first string
            for (int j = 0; words[0][j] != '\0'; j++)
            {
                if (words[0][i] == words[0][j])
                    count1++;
            }

            // Count in second string
            for (int j = 0; words[1][j] != '\0'; j++)
            {
                if (words[0][i] == words[1][j])
                    count2++;
            }

            if (count1 != count2)
            {
                is_anagram = 0;
                break;
            }
        }
    }

    if (is_anagram)
    {
        printf("anagram");
    }
    else
    {
        printf("not anagram");
    }

    return 0;
}