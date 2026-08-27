#include <stdio.h>
    
int main()
{
    //8! =1X2X3X4X5X6X7X8
    //5! =1X2X3X4X5
    //n! =1X2X3X4X5.....Xn
    //0! =1
//using for loop
    int product=1;
    int n =5;
    for(int i=1;i<=n;i++)
    {
        product *=i;
    }
    printf("the factorial is %d",product);
    return 0;
}
