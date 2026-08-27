/*4. Write a function slice() to slice a string. It should change the original string such
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position
for slice*/

#include <stdio.h>

int slice(char str[], int m, int n)
{
    int i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';
    return str;
}
int main()
{
    char str[] = "ranjit";

    printf("%s", slice(str, 0, 6));
    return 0;
}
