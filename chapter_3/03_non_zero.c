#include <stdio.h>
    
int main()
{
    if(1){
        printf("this if is executed!\n");
    }
    if(2345){
        printf("this if is also executed!\n");
    }
    if(2.74){
        printf("this if is also executed!\n");
    }
    if('c'){
        printf("this if is also executed!\n");
    }
    if(0){
        printf("i'm zero i'm not executed!\n");
    }
    return 0;
}