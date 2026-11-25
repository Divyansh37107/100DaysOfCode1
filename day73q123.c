#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fp;
    char ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int inWord = 0;
    int lastChar = '\0';

    // Open file in read mode
    fp = fopen("sample.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File not found!");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF)
    {
        characters++;
        lastChar = ch;

        // Count words
        if (isspace((unsigned char)ch))
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            words++;
            inWord = 1;
        }

        // Count newline characters
        if (ch == '\n')
        {
            lines++;
        }
    }

    // Count the last line if it does not end with newline
    if (characters > 0 && lastChar != '\n')
    {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}