#include<stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("ranjit.txt","r"); // r for read mode

    int num;
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d \n",num);

    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);

    fclose(ptr);

    return 0;

}