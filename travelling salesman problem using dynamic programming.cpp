#include <stdio.h>
#include <limits.h>
#define N 4
#define INF INT_MAX
int graph[N][N] = {
    {0, 1, 5, 20},
    {10, 0, 5, 25},
    {15, 5, 0, 0},
    {20, 5, 0, 0}
};
int dp[1 << N][N];
int main() {
    for (int i = 0; i < (1 << N); i++)
        for (int j = 0; j < N; j++)
            dp[i][j] = INF;
    dp[1][0] = 0;
    for (int mask = 1; mask < (1 << N); mask++)
        for (int node = 0; node < N; node++)
            if ((mask & (1 << node))) {
                int prev_mask = mask ^ (1 << node);
                for (int prev_node = 0; prev_node < N; prev_node++)
                    if ((prev_mask & (1 << prev_node)))
                        dp[mask][node] = (dp[mask][node] < dp[prev_mask][prev_node] + graph[prev_node][node]) ?
                                         dp[mask][node] : dp[prev_mask][prev_node] + graph[prev_node][node];
            }
    int min_distance = INF;
    for (int node = 1; node < N; node++)
        if (dp[(1 << N) - 1][node] + graph[node][0] < min_distance)
            min_distance = dp[(1 << N) - 1][node] + graph[node][0];
    printf("Minimum Distance: %d\n", min_distance);
    return 0;
}
