#include <stdio.h>
#include <string.h>

// Define a structure to hold employee details
struct employee {
    int code;         // Employee code
    float salary;     // Employee salary
    char name[30];    // Employee name
}; // Semicolon is important here

// Function prototype to display employee details
void show(struct employee e);

// Function definition: displays the details of an employee
void show(struct employee e) {
    printf("Employee Details:\n");
    printf("Code: %d\n", e.code);       // Print employee code
    printf("Salary: %.2f\n", e.salary); // Print employee salary with 2 decimal places
    printf("Name: %s\n", e.name);       // Print employee name
}

int main() {
    // Declare and initialize an employee structure
    struct employee e1; // Create an employee structure variable
    e1.code = 101;      // Assign code to the employee
    strcpy(e1.name, "Ranjit"); // Copy the name into the employee's name field
    e1.salary = 43432.43;      // Assign salary to the employee
  
    // Pass the structure to the show function to display its details
    show(e1);
   
    return 0;
}
