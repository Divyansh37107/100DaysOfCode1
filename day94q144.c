#include <stdio.h>

// Define structure
struct Student
{
    char name[50];
    int roll;
    int marks;
};

// Function accepting structure as parameter
void displayStudent(struct Student s)
{
    printf("Name: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll, s.marks);
}

int main()
{
    struct Student s;

    // Take student details
    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    // Pass structure to function
    displayStudent(s);

    return 0;
}