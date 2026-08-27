#include <stdio.h>
#include <string.h>

int main()
{
    char s1[12] = "Hello";
    char s2[] = "Ranjit";
    char s3[] ="Bhai";

    strcat(s1, s2); // s1 now contains "helloharry" <no space in between> (merging both the string)
    strcat(s1,s3);
    printf("%s ", s1);

    return 0;
}

/*
--->The strcat() function in C is designed to concatenate two strings, not three. In your code, you are trying to pass three arguments (s1, s2, s3) to strcat(), which is invalid.
--->To concatenate s2 and s3 into s1, you need to call strcat() twice:
*/