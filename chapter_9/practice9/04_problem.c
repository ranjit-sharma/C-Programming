/*4. Write a program to illustrate the use of arrow operator → in C.*/

#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} Employee;

int main()
{
    Employee e1;
    Employee *ptr = &e1;

    //(*ptr).salary =32000;
    ptr->salary = 32000; //(*ptr).salary =32000; both are same
    ptr->score = 89.43;

    printf("the value of salary is %d and the value of score is %.2f \n", ptr->salary, ptr->score);

    return 0;
}