#include <stdio.h>

void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp; // Store the value pointed to by 'a' (value of variable a) in temp
    temp = *a;  // Assign the value pointed to by 'b' (value of variable b) to the location pointed by 'a'
    *a = *b;  // Assign the value stored in temp to the location pointed by 'b'
    *b = temp;
}

int main()
{
    int a = 4, b = 6; // a is 4 and b is 6
    swap(&a, &b);
    printf("the value of a is:%d and the value of b is:%d", a, b);
    return 0; // now a is 6 and b is 4
}
