
#include <stdio.h>

int main()
{
    int n, x;
    int totalSum, leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    totalSum = n * (n + 1) / 2;

    for (x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = totalSum - (x * (x - 1) / 2);

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
