/*5. Write a program with a structure representing a complex number.*/

#include <stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex c = {1, 2};

    printf("the value of complex no. is %d + %di", c.real, c.imaginary);

    return 0;
}