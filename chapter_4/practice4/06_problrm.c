#include <stdio.h>
    
int main()
{
    // using 'do while' loop
    
    /*int i=1;
    int sum=0;
    do{
        sum +=1;
        i++;
    }while(i<=10);*/


    //using 'for loop'
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum+=i;
    }
    printf("the sum offirst 10 natural is %d",sum);
    return 0;
}