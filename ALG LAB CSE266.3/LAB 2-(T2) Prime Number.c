#include <stdio.h>

int main() {
   int low, high, i, flag, temp;

   // Get the two numbers from the user
   printf("Enter two numbers (intervals): ");
   scanf("%d %d", &low, &high);

   // Swap the numbers if low is greater than high
   if (low > high) {
      temp = low;
      low = high;
      high = temp;
   }

   // Print the header for the prime numbers
   printf("Prime numbers between %d and %d are: ", low, high);

   // Loop through all the numbers between low and high
   while (low < high) {
      flag = 0;

      // Ignore numbers less than 2
      if (low <= 1) {
         ++low;
         continue;
      }

      // Check if the current number (low) is a prime number
      for (i = 2; i <= low / 2; ++i) {
         if (low % i == 0) {
            flag = 1;
            break;
         }
      }

      // If the current number is a prime number, print it
      if (flag == 0) {
         printf("%d ", low);
      }
      ++low;
   }

   return 0;
}
