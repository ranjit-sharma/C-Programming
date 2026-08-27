#include <stdio.h>

int main(){
    // char str[] = {'a','b','c',\0};
    char st[] = "abc"; // same as doing char st[] = {'a','b','c','\0'};
    
    /*
    for (int i=0;i<3;i++){
        printf("%c",st[i]);
    }
    */
    // insteed of using for loop we can directly print with this method

    printf("%s",st);

    return 0;
}