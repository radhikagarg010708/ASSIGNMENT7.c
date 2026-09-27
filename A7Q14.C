//Write a C program to input a square matrix and calculate the sums of its main and secondary diagonal elements. Also determine whether the given matrix is upper triangular, lower triangular, diagonal, or none of these.
#include <stdio.h>

int main() {
    int mat[100][100], n, i, j;

    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Display the matrix
    printf("\nThe matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Calculate main diagonal sum
    int mainDiagSum = 0;
    for (i = 0; i < n; i++) {
        mainDiagSum += mat[i][i];
    }

    // Calculate secondary diagonal sum
    int secDiagSum = 0;
    for (i = 0; i < n; i++) {
        secDiagSum += mat[i][n - 1 - i];
    }

    printf("\nSum of main diagonal elements = %d\n", mainDiagSum);
    printf("Sum of secondary diagonal elements = %d\n", secDiagSum);

    // Check upper triangular: all elements below main diagonal are 0
    int isUpperTriangular = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i > j && mat[i][j] != 0) {
                isUpperTriangular = 0;
            }
        }
    }

    // Check lower triangular: all elements above main diagonal are 0
    int isLowerTriangular = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i < j && mat[i][j] != 0) {
                isLowerTriangular = 0;
            }
        }
    }

    // Diagonal matrix: both upper and lower triangular
    int isDiagonal = isUpperTriangular && isLowerTriangular;

    // Display the result
    printf("\nResult: ");
    if (isDiagonal) {
        printf("The matrix is a diagonal matrix.\n");
    } else if (isUpperTriangular) {
        printf("The matrix is upper triangular.\n");
    } else if (isLowerTriangular) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is neither upper triangular, lower triangular, nor diagonal.\n");
    }

    return 0;
}