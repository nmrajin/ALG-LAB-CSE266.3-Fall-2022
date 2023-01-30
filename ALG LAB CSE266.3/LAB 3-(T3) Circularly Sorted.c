#include <stdio.h>

// Function to search an element in a circularly sorted array
int search(int arr[], int n, int x) {
    // Set low and high indices for binary search
    int low = 0, high = n - 1;
    
    // Loop until low index is less than or equal to the high index
    while (low <= high) {
        // Calculate the mid index
        int mid = (low + high) / 2;
        
        // Check if the mid element is equal to the target element
        if (arr[mid] == x)
            return mid;
        
        // Check if the right half of the array is sorted
        if (arr[mid] <= arr[high]) {
            // Check if the target element lies in the right half of the array
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        } else {
            // Check if the left half of the array is sorted
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
    }
    // Return -1 if the target element is not found
    return -1;
}

int main() {
    int n, x, result;
    // Take user input for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Take user input for the elements of the array
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Take user input for the target element
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    // Call the search function and store the result
    result = search(arr, n, x);
    // Print the result
    if (result == -1)
        printf("Element is not present in the array");
    else
        printf("Element is present at index %d", result);
    return 0;
}
