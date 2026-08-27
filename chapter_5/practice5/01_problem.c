// 1. Write a program using function to find average of three numbers
#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c)
{
    return (a + b + c) / 3.0; // we should divide this with int nd float then only ull get the right ans
}

int main()
{
    int a = 3, b = 6, c = 5;
    printf("the averge of a , b and c ia %f\n", average(a, b, c));

    return 0;
}