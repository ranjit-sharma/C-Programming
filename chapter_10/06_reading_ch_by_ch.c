#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("ranjit5.txt", "r");
    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);
        // when all the content of a file has been read break
        if (ch == EOF) // end of file // agra ye last h to
        {
            break;
        }
    }
    return 0;
}

//in this code wt ever text and all are there in the txt file it will give the output
