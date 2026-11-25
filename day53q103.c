
#include <stdio.h>

int main()
{
    int nums[100], n;
    int i, j;
    int totalSum = 0, leftSum = 0;
    int rightSum, pivot = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    for (i = 0; i < n; i++)
    {
        rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}
