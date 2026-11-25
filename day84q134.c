#include <stdio.h>
#include <string.h>

enum Status
{
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main()
{
    enum Status result;
    char input[20];

    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    scanf("%19s", input);

    if (strcmp(input, "SUCCESS") == 0)
    {
        result = SUCCESS;
    }
    else if (strcmp(input, "FAILURE") == 0)
    {
        result = FAILURE;
    }
    else if (strcmp(input, "TIMEOUT") == 0)
    {
        result = TIMEOUT;
    }
    else
    {
        printf("Invalid status!");
        return 0;
    }

    switch (result)
    {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}