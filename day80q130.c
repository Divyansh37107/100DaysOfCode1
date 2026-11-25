#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int roll, marks;
    int n, i;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error creating file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Take and store student records
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter name of student %d: ", i);
        scanf("%99s", name);

        printf("Enter roll number: ");
        scanf("%d", &roll);

        printf("Enter marks: ");
        scanf("%d", &marks);

        // Write record into file
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    // Close file after writing
    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display student records
    while (fscanf(fp, "%99s %d %d", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    // Close file
    fclose(fp);

    return 0;
}