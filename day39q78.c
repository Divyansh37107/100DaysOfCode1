#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols)
    {
        printf("Matrix must be square.\n");
        return 0;
    }

    printf("Enter matrix elements:\n");

    // Read matrix elements
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate main diagonal sum
    for(i = 0; i < rows; i++)
    {
        sum = sum + matrix[i][i];
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}