
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    // Print initials of first and middle names
    for (i = 0; i < lastSpace; i++)
    {
        if (i == 0 || name[i - 1] == ' ')
        {
            if (name[i] != ' ')
            {
                printf("%c.", name[i]);
            }
        }
    }

    // Print surname in full
    if (lastSpace != -1)
    {
        printf(" %s", name + lastSpace + 1);
    }
    else
    {
        printf("%s", name);
    }

    return 0;
}
