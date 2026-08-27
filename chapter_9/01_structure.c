#include <stdio.h>
#include <string.h>

struct employee
{
    int code; //this decleres a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important 
    
int main(){
    struct employee e1, e2;
    e1.code=34546;
    strcpy(e1.name, "Ranjit");
    e1.salary=54.44;

    printf(" %d\n %f\n %s\n",e1.code,e1.salary,e1.name);
    
    return 0;
}