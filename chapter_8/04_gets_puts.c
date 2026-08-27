#include <stdio.h>
    
int main(){
    
    char st[30];
    gets(st); // th eentered string is stored in st!

    //printf("%s",st); //if we use this then the courser will be in same line "hey"

    puts(st); // if we use this then the courser line will be changed
    printf("hey");

    return 0;
}

// but dont use gets recomanded to use fgets to avoid buffer