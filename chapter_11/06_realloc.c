#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    printf("%d", n);
    ptr = (int *)calloc(n, sizeof(int));
    ptr[0] = 3;
    printf("%d", ptr[0]);
    free(ptr);

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    free(ptr);
    return 0;
}