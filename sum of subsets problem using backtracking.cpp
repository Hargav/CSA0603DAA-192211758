#include <stdio.h>
int main() {
    int arr[] = {3, 3, 4, 2, 5, 2};
    int sum = 30;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0, subsetSum = 0;
    while (i < n) {
        if (subsetSum + arr[i] == sum) {
            printf("Subset found: %d\n", arr[i]);
            break;
        } else if (subsetSum + arr[i] < sum) {
            subsetSum += arr[i];
            printf("+%d ", arr[i]);
            i++;
        } else {
            subsetSum -= arr[i - 1];
            printf("-%d ", arr[i - 1]);
            i--;
        }
    }
    return 0;
}
