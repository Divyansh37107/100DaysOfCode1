#include <stdio.h>

int main()
{
    int i, j;
    int stars[] = {4, 5, 3, 1};

    for (i = 0; i < 4; i++)
    {
        for (j = 1; j <= stars[i]; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}