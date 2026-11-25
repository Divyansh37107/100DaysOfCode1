#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    // Read matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of all elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("Sum of all matrix elements = %d\n", sum);

    return 0;
}