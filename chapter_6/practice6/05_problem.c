/* 5. Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().*/

#include <stdio.h>


    
void sum(int a,int b){
    int sum =a+b;
  printf("the sum is %d\n",sum);
}

void avrage(int a, int b){
    float avg= (a+b)/2.0;
    printf("the average of %.2f\n",avg);
}

int main()
{
    int r =10;
    int s= 20;

    sum(r,s);
    avrage(r,s);
    
    return 0;
}