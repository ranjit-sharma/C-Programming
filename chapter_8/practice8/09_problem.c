/* 9. Write a program to check whether a given character is present in a string or not.*/

#include <stdio.h>
#include <string.h>

int main(){
    char c='d';
    int contains = 0;
    char str[]= "zoom zee";
    for (int i =0; i<strlen(str);i++)
    {
       if (str[i] == c){
         contains = 1;
         break;
       }
    }
    if (contains){
        printf("yes it contains\n");
    }
    else {
        printf("does not contains\n");
        
    }

    return 0;
}

// this programm checks wether it cointains the d letter in the string or not 
