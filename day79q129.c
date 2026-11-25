#include <stdio.h>

int main()
{
    FILE *fp;
    int num;
    int sum = 0;
    int count = 0;
    float average;

    // Open file in read mode
    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("Error: File not found!");
        return 1;
    }

    // Read integers and calculate sum
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum = sum + num;
        count++;
    }

    // Close the file
    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found in the file.");
        return 0;
    }

    // Calculate average
    average = (float)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}