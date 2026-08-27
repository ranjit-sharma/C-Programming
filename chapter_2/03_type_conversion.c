#include <stdio.h>
    
int main()
{
    // int &int=int
    // int &float=float
    // float &float=float
    float a=9.0;
    int b=2;
    float c =a/b;
    //demotion takes place due to the float value
    int d=6.7;

    printf("the value of a/b is %f\n", c);
    printf("the value of d is %d\n",d);
    return 0;
}