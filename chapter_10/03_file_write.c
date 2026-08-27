#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("ranjit2.txt", "w"); // w is for write mode 
    int num = 74828690;
    fprintf(fptr, "%d", num);
    fclose(fptr);
  
    return 0;
}
// if anything there in file before it self 
// in this mode the file gets empty then the assign value is stored