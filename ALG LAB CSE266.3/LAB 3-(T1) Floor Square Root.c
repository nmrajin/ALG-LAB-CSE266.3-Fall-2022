#include <stdio.h>

// Function to find the floor of the square root of `x`
int findSqrt(int x) {
    // Initialize `i` to 1
    int i = 1;
    // Keep incrementing `i` until `i^2` is greater than `x`
    while (i*i <= x) {
        i++;
    }
    // Return `i - 1` as the floor of the square root
    return i - 1;
}

int main() {
    // Declare variable to store user input
    int x;
    // Prompt user to enter a number
    printf("Enter a number: ");
    // Read the number and store it in `x`
    scanf("%d", &x);
    // Call the `findSqrt` function to find the floor of the square root of `x`
    int result = findSqrt(x);
    // Print the result
    printf("The floor of the square root of %d is %d\n", x, result);
    return 0;
}
