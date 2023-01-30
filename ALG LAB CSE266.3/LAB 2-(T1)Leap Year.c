#include <stdio.h>

int main() {
    int startYear, endYear, i, leapYearCount = 0;

    // Print a message about the program
    printf("Print leap years between two given years \n");

    // Get the start year from the user
    printf("Enter Start year: ");
    scanf("%d", &startYear);

    // Get the end year from the user
    printf("Enter End year: ");
    scanf("%d", &endYear);

    // Print the header for the leap years
    printf("Leap years:\n");

    // Loop through all the years between the start year and end year
    for (i = startYear; i <= endYear; i++) {
        // Check if the current year (i) is a leap year
        if ((0 == i % 4) && (0 != i % 100) || (0 == i % 400)) {
            // If it is a leap year, print it and increment the leap year count
            printf("%d\n", i);
            leapYearCount++;
        }
    }

    // Check if there were any leap years
    if (!leapYearCount) {
        printf("None\n");
    }

    return 0;
}
