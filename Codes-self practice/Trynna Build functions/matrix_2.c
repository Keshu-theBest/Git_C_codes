#include <stdio.h>
#include "../../my_signature.h"


int main(void)
{
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows and columns (e.g., 3 4): ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) // Validate input by checking return value of scanf
    {
        printf("Invalid size.\n");
        return 1;
    }

    // Declare the matrix in a 2D array
    int matrix[rows][cols];

    // Input matrix elements
    for (int i = 0; i < rows; i++)
    {
        // Input each element of the row
        for (int j = 0; j < cols; j++)
        {
            // Prompt for each element
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1)
            {
                // Handle invalid input
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Print the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < rows; i++)
    {
        // Print each element of the row
        for (int j = 0; j < cols; j++)
        {
            // Print element with a tab space
            printf("%d\t", matrix[i][j]);
        }
        printf("\n\n\n");
    }

    signature();
    return 0;
}