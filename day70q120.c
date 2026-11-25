#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1000];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    str[strcspn(str, "\n")] = '\0';

    // Convert first letter of each word to uppercase
    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i - 1] == ' ')
        {
            str[i] = toupper((unsigned char)str[i]);
        }
        else
        {
            str[i] = tolower((unsigned char)str[i]);
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}