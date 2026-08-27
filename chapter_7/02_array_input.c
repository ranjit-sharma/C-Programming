#include <stdio.h>
    
int main(){
    int marks[5];

    printf("Enter marks of 5 student \n");

    //scanf("%d", &marks[0]);
    //scanf("%d", &marks[1]);
    //scanf("%d", &marks[2]);
    //scanf("%d", &marks[3]);
    //scanf("%d", &marks[4]);  insted of this we can go for loop

    for (int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }

    for (int i=0;i<5;i++){
        printf("the value of marks at index %d is %d\n",i,marks[i]);
    }

   
    return 0;
}