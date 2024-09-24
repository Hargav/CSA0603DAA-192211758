#include <stdio.h>

#define MAX 100  // Maximum size for the string

// Function to copy one string to another
void copyString(char source[], char destination[]) {
    int i = 0;

    // Copy each character from source to destination
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';  // Add null terminator to the end of destination
}

int main() {
    char source[MAX], destination[MAX];

    // Input source string from the user
    printf("Enter the source string: ");
    fgets(source, MAX, stdin);

    // Remove the trailing newline character from the input
    source[strcspn(source, "\n")] = '\0';

    // Call the function to copy the string
    copyString(source, destination);

    // Output the copied string
    printf("Source String: %s\n", source);
    printf("Copied String: %s\n", destination);

    return 0;
}

