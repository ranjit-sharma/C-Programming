#include <stdio.h>

int main()
{
    int i = 72;
    int *j = &i; // j is a pointer pointing to i (j is an integer pointer) it is storing the value of i 
    int k = 67;
    printf("the adderess of i is %p\n", &i); // insted of p u can be also used
    printf("the adderess of i is %p\n", j);
    printf("the adderess of i is %p\n", k);

    printf("the value at address j is %d\n", (&i));

    return 0;
}