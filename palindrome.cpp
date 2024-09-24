#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100  // Maximum size for the string

// Function to check if a string is palindrome
int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // Ignore spaces and non-alphabet characters
        while (start < end && !isalnum(str[start])) {
            start++;
        }
        while (start < end && !isalnum(str[end])) {
            end--;
        }

        // Convert both characters to lowercase for case-insensitive comparison
        if (tolower(str[start]) != tolower(str[end])) {
            return 0;  // Not a palindrome
        }
        
        start++;
        end--;
    }

    return 1;  // It's a palindrome
}

int main() {
    char str[MAX];

    // Input string from the user
    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    // Remove trailing newline character if it exists
    str[strcspn(str, "\n")] = '\0';

    // Check if the string is palindrome
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

