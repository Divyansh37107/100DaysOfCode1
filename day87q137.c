#include <stdio.h>
#include <string.h>

enum UserRole
{
    ADMIN,
    USER,
    GUEST
};

int main()
{
    enum UserRole role;
    char input[20];

    printf("Enter user role (ADMIN, USER, GUEST): ");
    scanf("%19s", input);

    if (strcmp(input, "ADMIN") == 0)
    {
        role = ADMIN;
    }
    else if (strcmp(input, "USER") == 0)
    {
        role = USER;
    }
    else if (strcmp(input, "GUEST") == 0)
    {
        role = GUEST;
    }
    else
    {
        printf("Invalid role!");
        return 0;
    }

    switch (role)
    {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}