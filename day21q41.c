#include <stdio.h>

int main()
{
    int num, first, last, middle, digits = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = temp;

    middle = (num % digits) / 10;

    num = last * digits + middle * 10 + first;

    printf("Number after swapping first and last digit = %d\n", num);

    return 0;
}