#include <stdio.h>

int change(int a);

int change(int a)
{
    a = 77; // Misnomer  // it only call the value does not change the value
    return 0;
}

int main()
{

    int b = 22;
    change(b);            // The value of b remains 22
    printf("b is %d", b); // Prints "b is 22

    return 0;
}