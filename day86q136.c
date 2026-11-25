#include <stdio.h>
#include <string.h>

enum Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Operation choice;
    char operation[20];
    int a, b;

    printf("Enter operation and two numbers: ");
    scanf("%19s %d %d", operation, &a, &b);

    if (strcmp(operation, "ADD") == 0)
    {
        choice = ADD;
    }
    else if (strcmp(operation, "SUBTRACT") == 0)
    {
        choice = SUBTRACT;
    }
    else if (strcmp(operation, "MULTIPLY") == 0)
    {
        choice = MULTIPLY;
    }
    else
    {
        printf("Invalid operation!");
        return 0;
    }

    switch (choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}