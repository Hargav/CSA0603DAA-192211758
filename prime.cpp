#include <stdio.h>

int main() {
    int num, i, isPrime = 1; // Assuming the number is prime initially

    // Asking user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handling case for numbers less than 2
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Checking for factors from 2 to the square root of the number
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0; // If a factor is found, the number is not prime
            break;
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

