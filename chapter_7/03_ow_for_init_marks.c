#include <stdio.h>
    
int main(){
    float marks[] = {33, 40}; //if the 2 is not given in the [2] then also it will run
     
    for(int i=0;i<2;i++){
        printf("the marks of %d is %.2f\n",i,marks[i]);
    } 
    return 0;
}