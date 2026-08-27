/* 4. Write a function and pass the value by reference*/

#include <stdio.h>

void reference(int *r);

void reference(int *r){
    *r=*r*5;
}

int main(){
    int s = 20;
    printf("before:%d\n",s);
    reference(&s);
    printf("after:%d",s);
    return 0;
}