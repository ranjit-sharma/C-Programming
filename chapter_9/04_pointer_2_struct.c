#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
    
int main(){
    struct employee e1;
    e1.code =56; // Initialize a Field:
    struct employee *ptr; // Declare a Pointer to the Structure:
    ptr = &e1;
    //now we can print structure elements using:

    // printf("%d", (*ptr).code);
    printf("%d", ptr->code); // Exactly same as(*ptr).code

    return 0;
}