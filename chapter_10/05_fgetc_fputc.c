#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("ranjit4.txt", "r");
    char c = fgetc(ptr);      // used to read a character from file
    printf("%c",c);
    fputc('c', ptr); // used to write character 'c' to the file

    return 0;
}

// this code is reading the first letter of the txt file