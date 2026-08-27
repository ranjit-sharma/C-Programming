/*Quick Quiz: Modify the program above to check whether the file exists or not before
opening the file.*/


#include <stdio.h>
    
int main(){
    
    FILE *ptr;
    ptr = fopen("ranjit.txt","r"); // r for read mode

    if(ptr==NULL){
        printf("the file does not exist sorry!\n");
    }

    else{

    int num;
    fscanf(ptr,"%d",&num);
    printf("the value of num is %d \n",num);

    fscanf(ptr,"%d",&num);
    printf("the value of num is %d\n",num);
    }
    fclose(ptr);  // use this to close the file 

    return 0;
}