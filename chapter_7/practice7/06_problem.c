/* 6. Write a program containing functions which counts the number of positive
integers in an array
*/

#include <stdio.h>

int count(int a[], int n)
{
    int no_of_positive = 0; // Initialize the counter for positive integers
    for (int i = 0; i < n; i++){ // Loop through the array
        if (a[i] > 0){                     // Check if the current element is positive
            no_of_positive++; // Increment the counter if positive
        }
    }
    return no_of_positive; // Return the count of positive numbers
}

int main()
{
    int a[] = {1, -2, 3, 4, -5, 6, 7, -8, 9, 10}; // Initialize the array with integers
    printf("The number of positive integers is %d", count(a, 10)); // Call count function and print result
    return 0; // Indicate successful program termination
}
