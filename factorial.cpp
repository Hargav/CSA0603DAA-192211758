#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;  // Using `unsigned long long` to store large values

    // Asking user for input
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Handling case for negative numbers
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculating factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Printing the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

