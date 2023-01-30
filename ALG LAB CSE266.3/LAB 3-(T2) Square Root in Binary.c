#include <stdio.h>
#include <math.h>

int binarySearch(int num, int low, int high) {
   int mid;

   // Continue the search as long as low is less than or equal to high
   while (low <= high) {
      mid = (low + high) / 2;

      // If the square of mid is equal to num, return mid
      if (mid * mid == num) {
         return mid;
      }
      else if (mid * mid < num) {
         // If the square of mid is less than num, update low
         low = mid + 1;
      }
      else {
         // If the square of mid is greater than num, update high
         high = mid - 1;
      }
   }

   // Return the floor of the square root if the number is not a perfect square
   return floor(sqrt(num));
}

int main() {
   int num, result;

   // Get the number from the user
   printf("Enter a positive number: ");
   scanf("%d", &num);

   // Call the binary search function to find the square root of the number
   result = binarySearch(num, 0, num);

   // Print the result
   printf("The square root of %d is %d\n", num, result);

   return 0;
}
