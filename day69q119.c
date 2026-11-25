#include <stdio.h>

int main()
{
    int arr[100], freq[101] = {0};
    int n, i;
    int repeated = -1;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements (0 to 100): ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // Check whether the element appeared before
        if (freq[arr[i]] == 1)
        {
            repeated = arr[i];
        }
        else
        {
            freq[arr[i]] = 1;
        }
    }

    if (repeated != -1)
    {
        printf("Repeated element: %d", repeated);
    }
    else
    {
        printf("No repeated element found");
    }

    return 0;
}