#include <stdio.h>
#include <limits.h>
#define N 4
#define INF INT_MAX
int main() {
    int graph[N][N] = {
        {0, 1, 5, 2},
        {1, 0, 3, 5},
        {5, 5, 0, 0},
        {2, 5, 3, 0}
    };
    int dp[1 << N][N];
    for (int i = 0; i < (1 << N); i++) {
        for (int j = 0; j < N; j++) {
            dp[i][j] = INF;
        }
    }
    dp[1][0] = 0;
    for (int mask = 1; mask < (1 << N); mask++) {
        for (int node = 0; node < N; node++) {
            if ((mask & (1 << node))) {
                int prev_mask = mask ^ (1 << node);
                for (int prev_node = 0; prev_node < N; prev_node++) {
                    if ((prev_mask & (1 << prev_node))) {
                        dp[mask][node] = (dp[mask][node] < dp[prev_mask][prev_node] + graph[prev_node][node]) ?
                                         dp[mask][node] : dp[prev_mask][prev_node] + graph[prev_node][node];
                    }
                }
            }
        }
    }
    int min_cost = INF;
    for (int node = 1; node < N; node++) {
        int cost = dp[(1 << N) - 1][node] + graph[node][0];
        if (cost < min_cost) {
            min_cost = cost;
        }
    }
    printf("Optimal Cost: %d\n", min_cost);
    return 0;
}
