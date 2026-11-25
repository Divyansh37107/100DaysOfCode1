#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j, k;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows < 1 || rows > 10 || cols < 1 || cols > 10)
    {
        printf("Invalid matrix size.\n");
        return 0;
    }

    // Read matrix elements
    printf("Enter matrix elements:\n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Traverse diagonals
    for(k = 0; k < rows + cols - 1; k++)
    {
        if(k % 2 == 0)
        {
            // Traverse upward
            i = (k < rows) ? k : rows - 1;
            j = k - i;

            while(i >= 0 && j < cols)
            {
                printf("%d ", matrix[i][j]);
                i--;
                j++;
            }
        }
        else
        {
            // Traverse downward
            j = (k < cols) ? k : cols - 1;
            i = k - j;

            while(j >= 0 && i < rows)
            {
                printf("%d ", matrix[i][j]);
                i++;
                j--;
            }
        }
    }

    printf("\n");

    return 0;
}