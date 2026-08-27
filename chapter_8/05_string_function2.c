#include <stdio.h>
#include <string.h>

int main() {
    char st[] = "Ranjit";

   // printf("%d", strlen(st));
   char target[30];
   strcpy(target,st); //target now contains "Ranjit"
   printf("%s %s",st,target);             
    
    return 0; 
}