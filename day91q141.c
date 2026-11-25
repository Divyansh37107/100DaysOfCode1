#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    int marks;
};

int main()
{
    struct Student s;

    // Take student details
    printf("Enter student name: ");
    scanf("%49s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%d", &s.marks);

    // Display student details
    printf("\nName: %s | Roll: %d | Marks: %d\n",
           s.name, s.roll_no, s.marks);

    return 0;
}