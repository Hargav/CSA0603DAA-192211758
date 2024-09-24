#include <stdio.h>
int main(){
    int arr[] = {100, 23, 45, 90, 2, 67, 22, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    int stack[1000];
    int top = -1;
    top++; stack[top] = 0;
    top++; stack[top] = n - 1; 
    max = arr[0];
    min = arr[0];
    while (top >= 0) {
        int high = stack[top--];
        int low = stack[top--];
        if (low == high) {
            if (arr[low] > max) max = arr[low];
            if (arr[low] < min) min = arr[low];
        }
        else if (high == low + 1) {
            if (arr[low] > arr[high]) {
                if (arr[low] > max) max = arr[low];
                if (arr[high] < min) min = arr[high];
            } else {
                if (arr[high] > max) max = arr[high];
                if (arr[low] < min) min = arr[low];
            }
        }
        else {
            int mid = (low + high) / 2;
            top++; stack[top] = mid + 1;
            top++; stack[top] = high;
            top++; stack[top] = low;
            top++; stack[top] = mid;
        }
    }
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);
    return 0;
}
