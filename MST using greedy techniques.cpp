#include <stdio.h>
int main() {
    int v, e;
    printf("Enter number of vertices: ");
    scanf("%d", &v);
    printf("Enter number of edges: ");
    scanf("%d", &e);
    int parent[v];
    for (int i = 0; i < v; i++) parent[i] = i;
    int edges[e][3];
    printf("Enter edges (source, destination, weight):\n");
    for (int i = 0; i < e; i++) {
        scanf("%d %d %d", &edges[i][0], &edges[i][1], &edges[i][2]);
    }
    for (int i = 0; i < e - 1; i++) {
        for (int j = i + 1; j < e; j++) {
            if (edges[i][2] > edges[j][2]) {
                int temp[3];
                temp[0] = edges[i][0];
                temp[1] = edges[i][1];
                temp[2] = edges[i][2];
                edges[i][0] = edges[j][0];
                edges[i][1] = edges[j][1];
                edges[i][2] = edges[j][2];
                edges[j][0] = temp[0];
                edges[j][1] = temp[1];
                edges[j][2] = temp[2];
            }
        }
    }
    printf("Edges in MST:\n");
    int edgeCount = 0;
    for (int i = 0; i < e; i++) {
        int x = edges[i][0];
        int y = edges[i][1];
        int weight = edges[i][2];
        if (parent[x] != parent[y]) {
            printf("%d - %d : %d\n", x, y, weight);
            parent[x] = parent[y];
            edgeCount++;
            if (edgeCount == v - 1) break;
        }
    }
    return 0;
}
