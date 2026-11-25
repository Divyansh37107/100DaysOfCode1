#include <stdio.h>
#include <string.h>

// Define enum for gender
enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

// Define structure
struct Person
{
    enum Gender gender;
};

int main()
{
    struct Person p;
    char input[20];

    printf("Enter gender (MALE, FEMALE, OTHER): ");
    scanf("%19s", input);

    if (strcmp(input, "MALE") == 0)
    {
        p.gender = MALE;
    }
    else if (strcmp(input, "FEMALE") == 0)
    {
        p.gender = FEMALE;
    }
    else if (strcmp(input, "OTHER") == 0)
    {
        p.gender = OTHER;
    }
    else
    {
        printf("Invalid gender!");
        return 0;
    }

    switch (p.gender)
    {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;

        case OTHER:
            printf("Other");
            break;
    }

    return 0;
}