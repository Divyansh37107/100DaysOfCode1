#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    int marks;
};

int main()
{
    struct Student s[100];
    int n, i;
    int highest = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students!");
        return 0;
    }

    // Input student details
    for (i = 0; i < n; i++)
    {
        printf("\nEnter name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    // Find student with highest marks
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    // Display topper
    printf("\nTopper: %s (Marks: %d)\n",
           s[highest].name, s[highest].marks);

    return 0;
}