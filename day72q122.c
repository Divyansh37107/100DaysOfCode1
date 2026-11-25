#include <stdio.h>

int main()
{
    FILE *fp;
    char line[200];

    // Open existing file in read mode
    fp = fopen("info.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File not found!");
        return 1;
    }

    // Read and display file contents
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}