#include <stdio.h>

#define MAX 10  // Maximum size for the matrices

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int rowFirst, int columnFirst, int rowSecond, int columnSecond) {
    int i, j, k;
    
    // Initialize the result matrix to 0
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnSecond; j++) {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnSecond; j++) {
            for (k = 0; k < columnFirst; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int column) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int first[MAX][MAX], second[MAX][MAX], result[MAX][MAX];
    int rowFirst, columnFirst, rowSecond, columnSecond;
    int i, j;

    // Input for the first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &rowFirst, &columnFirst);

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rowFirst; i++) {
        for (j = 0; j < columnFirst; j++) {
            scanf("%d", &first[i][j]);
        }
    }

    // Input for the second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &columnSecond);

    // Check if multiplication is possible
    if (columnFirst != rowSecond) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rowSecond; i++) {
        for (j = 0; j < columnSecond; j++) {
            scanf("%d", &second[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(first, second, result, rowFirst, columnFirst, rowSecond, columnSecond);

    // Print result
    printf("Resultant matrix:\n");
    printMatrix(result, rowFirst, columnSecond);

    return 0;
}

