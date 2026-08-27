
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    // int arr[n]; // not allowed in c
    ptr[0] = 3;
    printf("%d", ptr[0]);
    free(ptr);// to free the memory after use //  //memory of ptr is released.

    return 0;
}

/*We can use free() function to deallocate the memory. The memory allocated using
calloc/malloc is not deallocated automatically.*/