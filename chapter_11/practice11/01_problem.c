/*1. Write a program to dynamically create an array of size 6 capable of storing 6
integers.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 51;
    ptr[1] = 75;
    ptr[2] = 65;
    ptr[3] = 54;
    ptr[4] = 43;
    ptr[5] = 83;

    printf("%d %d %d %d %d %d\n", ptr[0], ptr[1], ptr[2], ptr[3], ptr[4], ptr[5]);
    free(ptr);

    return 0;
}