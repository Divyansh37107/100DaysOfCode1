#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int age;

    // Open file in write mode
    fp = fopen("info.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    // Take user details
    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write data into the file
    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fp);

    printf("File created successfully! Data written to info.txt");

    return 0;
}