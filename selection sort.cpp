#include <stdio.h>

int main() {
    int n, i, j, minIndex, temp;

    // Asking user for the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n]; // Declaring an array of size 'n'

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }


    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current element is the minimum

        // Find the index of the minimum element in the remaining unsorted array
        for (j = i + 1; j < n; j+0+) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }
    }

    // Printing the sorted array
    printf("Sorted array: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

