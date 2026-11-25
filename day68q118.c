#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, sum = 0;
    int expectedSum, missingNumber;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    // Calculate the expected sum from 0 to n
    expectedSum = n * (n + 1) / 2;

    // Find the missing number
    missingNumber = expectedSum - sum;

    printf("Missing number: %d", missingNumber);

    return 0;
}