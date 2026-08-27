#include <stdio.h>

int sum(int*, int*);


//sum should change the value of x
int sum(int* a, int* b){
    *a = 6; //a=6; the sum function cannot change x using a bcz copy of x is provided to sum in a
    return *a + *b;
}

int main(){
    int x = 1, y = 6;
    printf("the sum of 1 and 6 is: %d\n", sum(&x, &y));// if we use & here then put * in int in line 6
    printf("the value of x is: %d\n", x);

    return 0;
}