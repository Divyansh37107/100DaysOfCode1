#include <stdio.h>

int main()
{
    int matrix[10][10];
    int rows, cols, i, j;
    int distinct = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols)
    {
        printf("False\n");
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

    // Check diagonal elements
    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(matrix[i][i] == matrix[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
        {
            break;
        }
    }

    if(distinct == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}