#include <stdio.h>

// Define structure
struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function to find and return top student
struct Student findTopper(struct Student s[], int n)
{
    int i;
    int highest = 0;

    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[highest].marks)
        {
            highest = i;
        }
    }

    return s[highest];
}

int main()
{
    struct Student s[100];
    struct Student topper;
    int n, i;

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
        printf("\nEnter student name: ");
        scanf("%49s", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks: ");
        scanf("%d", &s[i].marks);
    }

    // Receive returned structure
    topper = findTopper(s, n);

    // Display topper details
    printf("\nTop Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll, topper.marks);

    return 0;
}