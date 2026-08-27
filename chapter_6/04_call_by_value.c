#include <stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int main()
{
    int r = 1, s = 6;
    printf("the sum of 1 and 6 is: %d", sum(r, s));
    return 0;
}