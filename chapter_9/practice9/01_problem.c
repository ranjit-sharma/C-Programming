// 1. Create a two-dimensional vector using structures in C

#include <stdio.h>

typedef struct vector
{
    int i;
    int j;
} Vec;

int main()
{
    Vec v = {1, 2};

    printf("the value of vector is %di + %dj", v.i, v.j);

    return 0;
}