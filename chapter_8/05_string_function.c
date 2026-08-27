#include <stdio.h>
#include <string.h> // Includes the library for string manipulation functions like strlen()

int main() {
    char st[] = "Ranjit"; // Declare and initialize a string (character array) with "Ranjit"

    printf("%d", strlen(st)); // Use strlen() to calculate the length of the string 
                              // and print it as an integer (%d)
    
    return 0; // Return 0 to indicate successful program termination
}
