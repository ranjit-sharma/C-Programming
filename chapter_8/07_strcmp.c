#include <stdio.h>
#include <string.h>

int main(){

    int z = strcmp("far","far"); // if it is same it will return 0
    int a = strcmp("far","joke"); // Negative value
    int b = strcmp("joke","far"); // Positive value

   printf("value of a=%d\nvalue of b=%d\nvalue of z=%d\n",a,b,z);             
    
    return 0; 
}


/*
strcmp Function:

strcmp compares two strings character by character.
It returns:
A negative value if the first string is lexicographically less than the second string.
Zero if the two strings are equal.
A positive value if the first string is lexicographically greater than the second string.
*/