#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("ranjit3.txt", "a"); // a is for append mode 
    int num = 7482;
    fprintf(fptr, "%d", num);
    fclose(fptr);
  
    return 0;
}

// apend does not delete anything it continue writing in that file  