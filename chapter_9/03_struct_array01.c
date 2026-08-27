#include <stdio.h>

struct employee {
    int code;
    float salary;
    char name[10];
};

int main() {
    struct employee facebook[10]; // Create an array for 2 employees (for simplicity)

    // Input data for employees
    for (int i = 0; i < 10; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Code: ");
        scanf("%d", &facebook[i].code);
        printf("Salary: ");
        scanf("%f", &facebook[i].salary);
        printf("Name: ");
        scanf("%s", facebook[i].name); // Avoid spaces in names for simplicity
    }

    // Output the data for employees
    printf("\nEmployee Details:\n");
    for (int i = 0; i < 10; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Code: %d\n", facebook[i].code);
        printf("Salary: %.2f\n", facebook[i].salary);
        printf("Name: %s\n", facebook[i].name);
    }

    return 0;
}

