//Write a C program to input two matrices. Check whether they can be multiplied. If multiplication is possible, calculate and display the product matrix; otherwise, display an appropriate message.
#include <stdio.h>

int main() {
    int mat1[100][100], mat2[100][100], product[100][100];
    int rows1, cols1, rows2, cols2, i, j, k;

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

    // Check if multiplication is possible (cols of first must equal rows of second)
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible: number of columns of first matrix must equal number of rows of second matrix.\n");
        return 0;
    }

    // Multiply the matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
            for (k = 0; k < cols1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Display the resulting matrix
    printf("Product of the matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}