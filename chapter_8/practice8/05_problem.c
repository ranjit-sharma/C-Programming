/*  5. Write your own version of strcpy function from <string.h>
 */

#include <stdio.h>

// Custom string length function
int srtlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }

    count = i - 1;
    return count;
}

// Custom string copy function
void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < srtlen(source); i++)
    {
        target[i] = source[i];
    }
    target[srtlen(source)] = '\0'; // Null-terminate the target string
}

int main()
{
    char source[] = "Ranjit";
    char target[30];
    mystrcpy(target, source); // Copy source into target

    printf("%s %s", source, target); // Print both strings
    return 0;
}
