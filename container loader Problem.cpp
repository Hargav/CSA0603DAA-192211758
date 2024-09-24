#include <stdio.h>
#define N 5 
#define CAPACITY 10 
int main() {
    int weights[N] = {2, 3, 4, 5, 6}; 
    int loader = 0;
    int i = 0; 
    printf("Container Weights: ");
    for (int j = 0; j < N; j++) {
        printf("%d ", weights[j]);
    }
    printf("\n");
    while (i < N) {
        if (loader + weights[i] <= CAPACITY) {
            loader += weights[i];
            printf("Loaded Container %d (Weight: %d)\n", i + 1, weights[i]);
            i++;
        } else {
            printf("Cannot load Container %d (Weight: %d). Exceeds capacity.\n", i + 1, weights[i]);
            i++;
        }
    }
    printf("Total Weight Loaded: %d\n", loader);
    return 0;
}
