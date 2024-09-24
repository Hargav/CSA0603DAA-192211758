#include <stdio.h>
void strassenMatrixMultiply(int n,int A[2][2], int B[2][2], int C[2][2]){
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return;
    }
    int i, j;
    int m = n / 2;
    int A11[m][m], A12[m][m], A21[m][m], A22[m][m];
    int B11[m][m], B12[m][m], B21[m][m], B22[m][m];
    int C11[m][m], C12[m][m], C21[m][m], C22[m][m];
    int P1[m][m], P2[m][m], P3[m][m], P4[m][m], P5[m][m], P6[m][m], P7[m][m];
    for (i = 0; i < m; i++) {
        for (j = 0; j < m; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + m];
            A21[i][j] = A[i + m][j];
            A22[i][j] = A[i + m][j + m];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + m];
            B21[i][j] = B[i + m][j];
            B22[i][j] = B[i + m][j + m];
        }
    }
    // P1 = A11 * (B12 - B22)
    // P2 = (A11 + A12) * B22
    // P3 = (A21 + A22) * B11
    // P4 = A22 * (B21 - B11)
    // P5 = (A11 + A22) * (B11 + B22)
    // P6 = (A12 - A22) * (B21 + B22)
    // P7 = (A11 - A21) * (B11 + B12)
}
int main() {
    int n = 2;
    int A[2][2] = {{1,1},{1,1}};
    int B[2][2] = {{1,1},{1,1}};
    int C[2][2];
    strassenMatrixMultiply(n, A, B, C);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d  ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

