#include <stdio.h>
    
int main()
{
    int i = 6;
    int* j = &i;
    int** k= &j;

    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", *(&i));
    printf("the value of i is %d\n", **(&j));

    return 0;
}

/*We can even go further one level and create a variable ‘l’ of type int*** to store the
address of ‘k’. We mostly use int* and int** sometimes in real world programs.*/