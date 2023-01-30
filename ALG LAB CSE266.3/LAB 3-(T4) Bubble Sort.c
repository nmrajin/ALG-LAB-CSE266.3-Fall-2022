#include <stdio.h>

// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
int i, j, temp;

// Loop through n-1 elements
for (i = 0; i < n-1; i++) {
int flag = 0;
// Last i elements are already sorted, so inner loop should only go through n-i-1 elements
for (j = 0; j < n-i-1; j++) {
// Swap elements if they are in the wrong order
if (arr[j] > arr[j+1]) {
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
flag = 1;
}
}
// If no elements were swapped, the array is already sorted
if (flag == 0) {
break;
}
}
}

int main() {
int n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
bubbleSort(arr, n);
printf("Sorted Array: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}