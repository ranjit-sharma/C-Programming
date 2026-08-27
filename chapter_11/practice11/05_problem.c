/*5. Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to
make it store 15 number (from 7 x 1 to 7 x 15).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    printf("7x10 tak table:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    n = 15;
    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = 7 * (i + 1);
    }

    printf("7x15 tak ka table:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    free(ptr);

    return 0;
}