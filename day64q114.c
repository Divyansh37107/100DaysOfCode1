#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int i, j;
    int length, maxLength = 0;
    int repeated;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    // Remove newline character
    s[strcspn(s, "\n")] = '\0';

    length = strlen(s);

    for (i = 0; i < length; i++)
    {
        int count = 0;

        for (j = i; j < length; j++)
        {
            repeated = 0;

            // Check whether character is already present
            for (int k = i; k < j; k++)
            {
                if (s[k] == s[j])
                {
                    repeated = 1;
                    break;
                }
            }

            if (repeated == 1)
            {
                break;
            }

            count++;
        }

        if (count > maxLength)
        {
            maxLength = count;
        }
    }

    printf("Length of longest substring: %d", maxLength);

    return 0;
}