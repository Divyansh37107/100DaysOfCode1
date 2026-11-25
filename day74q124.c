#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100];
    char destinationName[100];
    int ch;

    // Take filenames from the user
    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destinationName);

    // Open source file in read mode
    source = fopen(sourceName, "r");

    if (source == NULL)
    {
        printf("Error: Source file not found!");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destinationName, "w");

    if (destination == NULL)
    {
        printf("Error: Cannot create destination file!");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    // Close both files
    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationName);

    return 0;
}