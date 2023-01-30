#include <stdio.h>

// merge function to merge two sorted arrays
void merge(int arr[], int p, int q, int r) {
  // n1 is the size of the left subarray
  int n1 = q - p + 1;
  // n2 is the size of the right subarray
  int n2 = r - q;
  // L is the left subarray
  int L[n1], R[n2];
  // copy elements from arr to L
  for (int i = 0; i < n1; i++) {
    L[i] = arr[p + i];
  }
  // copy elements from arr to R
  for (int j = 0; j < n2; j++) {
    R[j] = arr[q + 1 + j];
  }

  // merge the elements back to arr
  int i = 0, j = 0, k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k++] = L[i++];
    } else {
      arr[k++] = R[j++];
    }
  }

  // copy the remaining elements from L
  while (i < n1) {
    arr[k++] = L[i++];
  }
  // copy the remaining elements from R
  while (j < n2) {
    arr[k++] = R[j++];
  }
}

// mergeSort function to sort the array recursively
void mergeSort(int arr[], int l, int r) {
  // base case
  if (l < r) {
    int m = l + (r - l) / 2;
    // sort the left subarray
    mergeSort(arr, l, m);
    // sort the right subarray
    mergeSort(arr, m + 1, r);
    // merge the two sorted subarrays
    merge(arr, l, m, r);
  }
}

// function to print an array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// main function
int main() {
  int size;
  // prompt user to enter the number of elements
  printf("Enter the number of elements: ");
  scanf("%d", &size);

  int arr[size];
  // prompt user to enter the elements
  printf("Enter the elements: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  // sort the array
  mergeSort(arr, 0, size - 1);
  // print the sorted array
  printf("Sorted array: \n");
  printArray(arr, size);

  return 0;
}
