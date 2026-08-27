//: Create a string using double quotes and print its content using a loop.

#include <stdio.h>

int main(){
    // char str[] = {'a','b','c',\0};
    char st[] = "abc"; // same as doing char st[] = {'a','b','c','\0'};
    for (int i=0;i<3;i++){
        printf("character is %c \n",st[i]);
    }
    return 0;
}