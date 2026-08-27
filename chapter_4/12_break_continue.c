#include <stdio.h>
    
int main()
{
     for (int i = 0; i<15 ; i++)
    {
        if(i==5){
           // break;//exit the loop now!
           continue;// exit this iteration now // IN THIS THE 5 WILL NOT BE PRINTED
           
        }
       printf("i is %d\n",i);
    }
    printf("for loop is done!");
    return 0;
}