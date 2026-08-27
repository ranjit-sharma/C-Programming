/*1. Write a program to read three integers from a file.*/

#include <stdio.h>
    
int main(){
    FILE *fptr;
    fptr = fopen("rs.txt","r");
    int num1,num2,num3;
    fscanf(fptr,"%d %d %d",&num1,&num2,&num3);
    printf("the values are %d %d %d \n",num1,num2,num3);
    
    fclose(fptr);
    
    return 0;
}