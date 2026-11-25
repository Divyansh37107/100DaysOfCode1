#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Print each character on a new line
    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}