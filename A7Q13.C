//Write a C program to input a square matrix and find its transpose. Compare the original matrix with its transpose and determine whether the matrix is symmetric, skew-symmetric, or neither. Display the transpose and the result.
#include <stdio.h>

int main() {
    int mat[100][100], transpose[100][100], n, i, j;

    printf("Enter order of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    // Compute the transpose
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    // Display the transpose
    printf("\nTranspose matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    // Check symmetric and skew-symmetric properties
    int isSymmetric = 1, isSkewSymmetric = 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (mat[i][j] != transpose[i][j]) {
                isSymmetric = 0;
            }
            if (mat[i][j] != -transpose[i][j]) {
                isSkewSymmetric = 0;
            }
        }
    }

    // Display the result
    printf("\nResult: ");
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else if (isSkewSymmetric) {
        printf("The matrix is skew-symmetric.\n");
    } else {
        printf("The matrix is neither symmetric nor skew-symmetric.\n");
    }

    return 0;
}