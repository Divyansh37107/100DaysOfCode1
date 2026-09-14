#include <stdio.h>

int main()
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        if (num == 0)
        {
            printf("Zero\n");
        }
        else
        {
            printf("Positive number\n");
        }
    }
    else
    {
        printf("Negative number\n");
    }

    return 0;
}