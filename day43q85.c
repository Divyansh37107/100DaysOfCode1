#include <stdio.h>

int main()
{
    char str[100];
    char temp;
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%99[^\n]", str);

    // Calculate string length
    while(str[length] != '\0')
    {
        length++;
    }

    // Reverse the string
    for(i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}