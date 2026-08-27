/*4. Take name and salary of two employees as input from the user and write them to
a text file in the following format:
i. Name1, 3300
ii. Name2, 7700*/

#include <stdio.h>
    
int main() {
    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;

    ptr = fopen("emp.txt", "w");
    if (ptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the name of employee 1: \n");
    scanf("%s", name1);

    printf("Enter the salary of employee 1: \n");
    scanf("%d", &salary1); // Corrected to use &salary1

    printf("Enter the name of employee 2: \n");
    scanf("%s", name2);

    printf("Enter the salary of employee 2: \n");
    scanf("%d", &salary2); // Corrected to use &salary2

    fprintf(ptr, "%s, %d\n", name1, salary1);
    fprintf(ptr, "%s, %d\n", name2, salary2);

    fclose(ptr); // Don't forget to close the file
    return 0;
}
