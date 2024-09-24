#include <stdio.h>
#include <limits.h>

int optimalBST(int *p, int *q, int n) {
    int dp[n + 1][n + 1];
    for (int i = 0; i <= n; i++) dp[i][i] = q[i];

    for (int length = 2; length <= n + 1; length++) {
        for (int i = 0; i <= n - length + 1; i++) {
            int j = i + length - 1;
            dp[i][j] = INT_MAX;
            for (int r = i; r <= j; r++) {
                int cost = (r > i ? dp[i][r - 1] : 0) + (r < j ? dp[r + 1][j] : 0);
                for (int k = i; k <= j; k++) cost += q[k];
                if (cost < dp[i][j]) dp[i][j] = cost;
            }
        }
    }
    return dp[0][n];
}

int main() {
    int n;
    printf("Enter keys: ");
    scanf("%d", &n);
    int p[n], q[n + 1];
    printf("Enter probabilities:\n");
    for (int i = 0; i <= n; i++) scanf("%d", &q[i]);
    for (int i = 0; i < n; i++) scanf("%d", &p[i]);
    printf("Optimal cost: %d\n", optimalBST(p, q, n));
    return 0;
}
