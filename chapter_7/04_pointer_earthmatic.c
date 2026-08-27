#include <stdio.h>

int main()
{

    // POINTER ARITHEMATIC USING INTEGER POINTER
    //  int a =5;  //int will increment 4 byte memon=ry
    // int *ptr=&a;
    // printf("the address of a is %u\n",&a);
    // printf("the address of a is %u\n",ptr);
    // ptr++;
    // printf("the value of ptr is %u\n",ptr);

    char a = 'A'; // char will only increment 1 byte memory
    char *ptr = &a;

    printf("the address of a is %u\n", &a);
    printf("the address of a is %u\n", ptr);
    ptr++;

    printf("the value of ptr is %u\n", ptr);

    return 0;
}
  