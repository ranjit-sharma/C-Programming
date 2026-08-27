#include <stdio.h>
    
int main()
{
    int i = 1;      // Initialize i to 1
    int sum = 0;    // Initialize sum to 0
    while(i <= 10) { // Loop from 1 to 10
        sum += i;   // Add i to sum
        i++;        // Increment i by 1
    }
    printf("the sum of first 10 natural number is %d\n", sum); // Print the result
    
    return 0; // Indicate successful termination
}
