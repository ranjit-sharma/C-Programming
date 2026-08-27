/*Quick Quiz: Write a program to demonstrate the usage of free() with malloc().*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n* sizeof(int));
    // int arr[n]; // not allowed in c
    ptr[0] = 3;
    free(ptr); // if we use before printf it wil give garbage value 
    printf("%d", ptr[0]);
    return 0;
}