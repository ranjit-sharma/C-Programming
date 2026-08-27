/*2. Use the array in problem 1 to store 6 integers entered by the user.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    
    // Input 6 integers
    printf("Enter 6 integers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    
    // Output the entered integers
    printf("The entered integers are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }
    free(ptr); // Free allocated memory

    return 0;
}