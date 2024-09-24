#include <stdio.h>
#define N 5
int graph[N][N] = {
    {0, 1, 1, 1, 0},
    {1, 0, 1, 1, 1},
    {1, 1, 0, 0, 1},
    {1, 1, 0, 0, 1},
    {0, 1, 1, 1, 0}
};
int path[N], visited[N];
int main() {
    int i, pos = 1;
    path[0] = 0; visited[0] = 1;
    while (pos < N) {
        for (i = 1; i < N; i++) {
            if (graph[path[pos - 1]][i] && !visited[i]) {
                path[pos] = i;
                visited[i] = 1;
                pos++;
                break;
            }
        }
        if (i == N) {
            visited[path[--pos]] = 0;
        }
    }
    if (graph[path[pos - 1]][path[0]]) {
        printf("Hamiltonian Circuit: ");
        for (i = 0; i < N; i++) printf("%d ", path[i]);
        printf("%d\n", path[0]);
    } else {
        printf("No Hamiltonian Circuit exists\n");
    }
    return 0;
}
