#include <stdio.h>

int main() {
    int n, i, largest;

    // Asking user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n]; // Declaring an array of size 'n'

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Assuming the first element is the largest
    largest = array[0];

    // Loop to find the largest element
    for (i = 1; i < n; i++) {
        if (array[i] > largest) {
            largest = array[i];
        }
    }

    // Printing the largest element
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}

