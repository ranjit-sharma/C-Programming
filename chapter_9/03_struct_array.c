#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{

    struct employee facebook[100]; // an array of structures
    // we can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    // And so on
    struct employee ranjit ={100,72.45,"Ranjit"}; //initializing structure
    printf("%d %f %s",ranjit.code, ranjit.salary, ranjit.name);

    return 0;
}