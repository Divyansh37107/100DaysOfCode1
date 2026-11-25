
#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int largest, secondLargest;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if(n < 2)
    {
        printf("Second largest element does not exist.");
        return 0;
    }

    largest = arr[0];
    secondLargest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] < largest)
        {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == largest)
    {
        printf("Second largest element does not exist.");
    }
    else
    {
        printf("Second largest element = %d", secondLargest);
    }

    return 0;
}
