//https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
#include <stdio.h>
    
int main()
{
/*Write a program to determine whether a character entered by the user is
lowercase or not.*/

    char ch='G';
    printf("the charecter is: %c\n",ch);
    printf("the value of character is %d\n",ch);
    //97,122
    if(ch>=97 && ch<=122){
        printf("tis character is lowercase\n");
    }
    else{
        printf("this character is not lowercase\n");
    }
    return 0;
}