// Exercise 2: Sum of Elements in a Matrix
// Create a program that takes a 3x3 matrix of integers from the user
// and displays the sum of all elements in the matrix.

#include <stdio.h>

int main()
{
    int matrix[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nInsert a number for the matrix [%d] [%d]:", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf("\nMatrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}