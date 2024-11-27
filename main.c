#include <stdio.h>

#define SIZE 3 // Size of the matrix

void printMatrix(int matrix[SIZE][SIZE], const char* name) {
    printf("\n%s:\n", name);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], matrix3[SIZE][SIZE], matrix4[SIZE][SIZE];

    // Input for the first matrix
    printf("Enter elements for the first 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for the second matrix
    printf("\nEnter elements for the second 3x3 matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the sum of matrix1 and matrix2 to form matrix3
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Calculate the transpose of matrix3 to form matrix4
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix4[j][i] = matrix3[i][j];
        }
    }

    // Print all matrices
    printMatrix(matrix1, "Matrix 1");
    printMatrix(matrix2, "Matrix 2");
    printMatrix(matrix3, "Matrix 3 (Sum of Matrix 1 and Matrix 2)");
    printMatrix(matrix4, "Matrix 4 (Transpose of Matrix 3)");

    return 0;
}
