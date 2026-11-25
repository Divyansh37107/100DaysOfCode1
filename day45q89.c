#include <stdio.h>

int main()
{
    char str[100];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);

    // Count character frequency
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }

        i++;
    }

    printf("%d\n", count);

    return 0;
}