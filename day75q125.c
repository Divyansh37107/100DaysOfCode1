#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char text[500];

    // Open file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    // Take new text from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}