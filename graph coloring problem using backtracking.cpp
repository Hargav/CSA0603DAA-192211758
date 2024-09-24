#include <stdio.h>
#define N 4 
#define COLORS 3 
int graph[N][N] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 1},
    {1, 0, 1, 0}
};
int color[N];
int vertex = 0;
int main() {
    while (vertex < N) {
        for (int c = 1; c <= COLORS; c++) {
            int safe = 1;
            for (int i = 0; i < N; i++) {
                if (graph[vertex][i] && color[i] == c) {
                    safe = 0;
                    break;
                }
            }
            if (safe) {
                color[vertex] = c;
                vertex++;
                break;
            }
        }
        if (color[vertex - 1] == 0) {
            vertex--;
            if (vertex < 0) {
                printf("No solution exists\n");
                return 0;
            }
            color[vertex] = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("Vertex %d: Color %d\n", i, color[i]);
    }
    return 0;
}
