#include <stdio.h>

int main()
{
    int nums1[100], nums2[100], merged[200];
    int m, n;
    int i = 0, j = 0, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    if (m <= 0 || m > 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter first sorted array elements: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter second sorted array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    i = 0;
    j = 0;

    // Merge both sorted arrays
    while (i < m && j < n)
    {
        if (nums1[i] <= nums2[j])
        {
            merged[k] = nums1[i];
            i++;
        }
        else
        {
            merged[k] = nums2[j];
            j++;
        }

        k++;
    }

    // Copy remaining elements of first array
    while (i < m)
    {
        merged[k] = nums1[i];
        i++;
        k++;
    }

    // Copy remaining elements of second array
    while (j < n)
    {
        merged[k] = nums2[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");

    for (i = 0; i < k; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}