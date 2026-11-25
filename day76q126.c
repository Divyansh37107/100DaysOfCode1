#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Take filename from the user
    printf("Enter filename: ");
    scanf("%99s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    // Check whether file exists
    if (fp == NULL)
    {
        printf("Error: File does not exist!");
    }
    else
    {
        printf("File opened successfully.\n");

        // Read and display file content
        while ((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        // Close the file
        fclose(fp);
    }

    return 0;
}