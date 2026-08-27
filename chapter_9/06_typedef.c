#include <stdio.h>
#include <string.h>

typedef struct employee {
    int code;        
    float salary;     
    char name[10];    
}Emp;
    
int main(){
    // typedef int Ranjit; // make ranjit as datatype like int (rename)
    // Ranjit a = 88;// now ranjit is also a datatype. if we write int then also it will work
    // printf("the value of ranjit is %d\n",a);
    // but insted of this mostly the structure way is used

    //typedef struct employee Emp;

    Emp e1; //struct employee e1; insted of this use "Emp e1;"
    Emp* ptr1=&e1;
    
    e1.code=53;
    strcpy(e1.name,"Ranjit");
    e1.salary= 4533.54;


    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", ptr1->code, ptr1->salary, ptr1->name);

    
    return 0;
}