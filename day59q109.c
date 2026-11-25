
#include <stdio.h>

int main()
{
    int arr[100], n, k;
    int i, j, sum, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n)
    {
        printf("Invalid value of k");
        return 0;
    }

    maxSum = arr[0];

    for (i = 0; i <= n - k; i++)
    {
        sum = 0;

        for (j = i; j < i + k; j++)
        {
            sum = sum + arr[j];
        }

        if (sum > maxSum || i == 0)
        {
            maxSum = sum;
        }
    }

    printf("Maximum sum: %d", maxSum);

    return 0;
}
