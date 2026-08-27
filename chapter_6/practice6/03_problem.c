/* 3. Write a program to change the value of a variable to ten times of its current
value.*/

#include <stdio.h>

int change_to_ten_times(int*a);

int change_to_ten_times(int*a){
    *a =*a*10;
}    
int main()
{
    int x= 45;
    printf("the value of x is %d\n", x);
    change_to_ten_times(&x);
    printf("the value of x is %d\n", x);
    return 0;
}