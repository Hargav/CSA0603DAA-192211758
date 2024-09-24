#include <stdio.h>

int main() {
    int num1, num2, gcd;

    // Asking user for input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using Euclidean algorithm to find GCD
    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    // When num1 == num2, that value is the GCD
    gcd = num1;

    printf("GCD of the given numbers is: %d\n", gcd);

    return 0;
}

