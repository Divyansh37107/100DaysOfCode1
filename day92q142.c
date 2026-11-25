#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[5];
    int i;

    // Input details of 5 students
    printf("Enter details of 5 students:\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details of Student %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    // Display student details
    printf("\n========== STUDENT RECORDS ==========\n");
    printf("%-15s %-10s %-10s\n", "Name", "Roll", "Marks");
    printf("-------------------------------------\n");

    for (i = 0; i < 5; i++)
    {
        printf("%-15s %-10d %-10d\n",
               s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}