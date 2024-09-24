#include <stdio.h>
#define N 100
long long binomialCoeff(int n, int k) {
    long long C[N][N] = {0};
    int i,j;
    for (i = 0; i <= n; i++) {
        C[i][0] = C[i][i] = 1;
    }
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j < i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
    return C[n][k];
}
int main() {
    int n, k;
    printf("Enter values for n and k: ");
    scanf("%d %d", &n, &k);
    if (k > n) {
        printf("Error: k cannot be greater than n\n");
    } else {
        printf("Binomial Coefficient (%d choose %d) = %lld\n", n, k, binomialCoeff(n, k));
    }
    return 0;
}
