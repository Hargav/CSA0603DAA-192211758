#include <stdio.h>
#define N 3
int cost[N][N] = {
    {4, 1, 3},
    {2, 5, 2},
    {3, 2, 4}
};
int main() {
    int minCost = 999, assignment[N];
    int i, j, k;
    for (i = 0; i < N; i++) {
        int used[N] = {0};
        int costSoFar = 0;
        for (j = 0; j < N; j++) {
            int min = 999, col;
            for (k = 0; k < N; k++) {
                if (!used[k] && cost[i][k] < min) {
                    min = cost[i][k];
                    col = k;
                }
            }
            used[col] = 1;
            costSoFar += min;
            i++;
        }
        if (costSoFar < minCost) {
            minCost = costSoFar;
        }
        i--;
    }
    printf("Min Cost: %d\n", minCost);
    return 0;
}
