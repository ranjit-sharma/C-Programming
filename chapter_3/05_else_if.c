#include <stdio.h>
    
int main()
{
    int age =85;
      //if this is true then the "else if" condn will not checked
      //if this is false then the "else if" codn will be checked
      // in this only single condn will run which will be true
      // it is call ladder
    if (age>80){ 
        printf("you are old");
    }
    // there can be no. of "else if"
    else if (age>60){ 
        printf("you can drive you are a senior citizen");
    }
    else if(age>40){
        printf("you can drive you are an elder");
    }
    else if(age>18){
        printf("you can drive");
    }
    // this condn is optional "if this else condn will be removed still it will run"
    //only this condn will executed when all the codn will fail
    else{ 
        printf("you cannot drive");
    }
    return 0;
} 