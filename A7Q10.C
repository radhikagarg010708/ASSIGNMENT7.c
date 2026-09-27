//Write a C program to input two matrices of the same order. Calculate their sum and display the resulting matrix. If the matrices have different orders, display an appropriate message.
#include <stdio.h>

int main() {
    int mat1[100][100], mat2[100][100], sum[100][100];
    int rows1, cols1, rows2, cols2, i, j;

    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter %d elements for first matrix:\n", rows1 * cols1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &rows2, &cols2);

    printf("Enter %d elements for second matrix:\n", rows2 * cols2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Check if orders match
    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrix addition not possible: matrices have different orders.\n");
        return 0;
    }

    // Add the matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display the resulting matrix
    printf("Sum of the matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}