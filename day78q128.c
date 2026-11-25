#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    int ch;
    int vowels = 0;
    int consonants = 0;

    // Open file in read mode
    fp = fopen("text.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File not found!");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        ch = tolower((unsigned char)ch);

        if (ch >= 'a' && ch <= 'z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    // Close the file
    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}