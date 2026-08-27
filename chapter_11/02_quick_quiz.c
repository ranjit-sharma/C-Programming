/*Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n=5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // float arr[n]; // not allowed in c
    ptr[0] = 3.34653;
    ptr[1] = 2.34653;
    ptr[2] = 5.34653;
    ptr[3] = 4.34653;
    ptr[4] = 9.34653;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);

    
    
    return 0;
}