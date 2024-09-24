#include <stdio.h>
#define N 4
int main() {
    int graph[N][N] = {
        {0, 5, 10, 15},
        {5, 0, 3, 5},
        {10, 3, 0, 2},
        {15, 5, 2, 0}
    };
    for (int k = 0; k < N; k++) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (graph[i][k] + graph[k][j] < graph[i][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }
    printf("Shortest Distances:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}
