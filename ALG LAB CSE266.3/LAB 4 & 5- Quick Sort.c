#include<stdio.h>

// Function for QuickSort algorithm
void quicksort(int number[25],int first,int last){
    int i, j, pivot, temp;
    
    // Check if first index is less than last index
    if(first<last){
        pivot=first;  // Set pivot as first index
        i=first;      // Set i to first index
        j=last;       // Set j to last index

        // Loop until i is less than j
        while(i<j){
            // Move i forward while number at i is less than or equal to pivot
            while(number[i]<=number[pivot]&&i<last)
                i++;

            // Move j backward while number at j is greater than pivot
            while(number[j]>number[pivot])
                j--;

            // If i is less than j, swap numbers at i and j
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }

        // Swap pivot with number at j
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;

        // Recursively sort elements before pivot
        quicksort(number,first,j-1);

        // Recursively sort elements after pivot
        quicksort(number,j+1,last);
    }
}

// Main function
int main(){
    int i, count, number[25];
    
    // Ask user for number of elements
    printf("How many elements are you going to enter?: ");
    scanf("%d",&count);

    // Ask user to enter elements
    printf("Enter %d elements: ", count);
    for(i=0;i<count;i++)
        scanf("%d",&number[i]);

    // Sort elements using QuickSort algorithm
    quicksort(number,0,count-1);

    // Print sorted elements
    printf("Order of Sorted elements: ");
    for(i=0;i<count;i++)
        printf(" %d",number[i]);

    return 0;
}
