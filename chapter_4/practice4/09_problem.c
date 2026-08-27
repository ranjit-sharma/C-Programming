#include <stdio.h>
    
int main()
{
    //8! =1X2X3X4X5X6X7X8
    //5! =1X2X3X4X5
    //n! =1X2X3X4X5.....Xn
    //0! =1
// using while loop
    int i=1;
    int product=1;
    int n =6;
    while(i<=n)
    {
        product *=i;
        i++;
    }
    printf("the factorial of %d is %d",n,product);
    return 0;
}