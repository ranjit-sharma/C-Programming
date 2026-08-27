#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i; // l is a pointer to i (i is a character pointer )

    float k = 5.232;
    float *k1 = &k;
    printf("the adderess of i is %p\n", &i);
    printf("the adderess of i is %p\n", j);
    printf("the adderess of i is %p\n", k);

    printf("the value at address j is %d\n", *(&i));

    return 0;
}
