#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Count characters
    while(str[count] != '\0')
    {
        count++;
    }

    printf("Number of characters = %d\n", count);

    return 0;
}