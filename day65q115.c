#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    int freq[26] = {0};
    int i;
    int isAnagram = 1;

    printf("Enter first string: ");
    scanf("%999s", s);

    printf("Enter second string: ");
    scanf("%999s", t);

    // Check whether both strings have equal length
    if (strlen(s) != strlen(t))
    {
        isAnagram = 0;
    }
    else
    {
        // Count characters in the first string
        for (i = 0; s[i] != '\0'; i++)
        {
            freq[s[i] - 'a']++;
        }

        // Subtract characters from the second string
        for (i = 0; t[i] != '\0'; i++)
        {
            freq[t[i] - 'a']--;
        }

        // Check whether all frequencies are zero
        for (i = 0; i < 26; i++)
        {
            if (freq[i] != 0)
            {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram == 1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not Anagram");
    }

    return 0;
}