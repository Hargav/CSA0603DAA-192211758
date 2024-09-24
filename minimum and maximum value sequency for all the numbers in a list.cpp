#include <stdio.h>
#include <limits.h>
int main() {
    int arr[] = {10, 50, 2, 100, 40, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Minimum Value: %d\n", min);
    printf("Maximum Value: %d\n", max);
    return 0;
}
