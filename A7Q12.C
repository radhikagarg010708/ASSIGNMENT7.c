//Write a C program to input an m by n matrix. Calculate and display the sum of the elements in each row and each column.
#include <stdio.h>

int main() {
    int mat[100][100], rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter %d elements:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Display the matrix
    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Calculate and display row-wise sums
    printf("\nRow-wise sums:\n");
    for (i = 0; i < rows; i++) {
        int rowSum = 0;
        for (j = 0; j < cols; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum);
    }

    // Calculate and display column-wise sums
    printf("\nColumn-wise sums:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum);
    }

    return 0;
}