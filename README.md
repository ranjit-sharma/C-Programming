# 🧑‍💻 C Programming

A complete collection of **C Programming concepts, examples, and practice programs** from beginner to advanced level.

This repository is created to learn **C Programming from scratch**, understand programming fundamentals, improve problem-solving skills, and prepare for coding interviews.

---

# 📚 Table of Contents

1. [Introduction to C](#1-introduction-to-c)
2. [First C Program](#2-first-c-program)
3. [Variables](#3-variables)
4. [Constants](#4-constants)
5. [Data Types](#5-data-types)
6. [Input and Output](#6-input-and-output)
7. [Type Casting](#7-type-casting)
8. [Operators](#8-operators)
9. [Conditional Statements](#9-conditional-statements)
10. [Loops](#10-loops)
11. [Pattern Programs](#11-pattern-programs)
12. [Functions](#12-functions)
13. [Recursion](#13-recursion)
14. [Arrays](#14-arrays)
15. [2D Arrays](#15-2d-arrays)
16. [Strings](#16-strings)
17. [Pointers](#17-pointers)
18. [Structures](#18-structures)
19. [Unions](#19-unions)
20. [Dynamic Memory Allocation](#20-dynamic-memory-allocation)
21. [File Handling](#21-file-handling)
22. [Preprocessor Directives](#22-preprocessor-directives)
23. [Searching](#23-searching)
24. [Sorting](#24-sorting)
25. [Common Practice Programs](#25-common-practice-programs)
26. [How to Run](#26-how-to-run)
27. [Learning Goals](#27-learning-goals)

---

# 1. Introduction to C

C is a **general-purpose, procedural programming language** developed by **Dennis Ritchie**.

C is widely used for:

* Operating Systems
* Embedded Systems
* System Programming
* Compilers
* Networking
* Application Development
* Learning Programming Fundamentals
* Data Structures and Algorithms

### Features of C

* Fast
* Portable
* Simple
* Procedural
* Structured
* Low-level memory access
* Supports pointers
* Efficient

---

# 2. First C Program

The basic structure of a C program is:

```c
#include <stdio.h>

int main() {

    printf("Hello, World!");

    return 0;
}
```

### Explanation

```c
#include <stdio.h>
```

Includes the Standard Input/Output library.

```c
int main()
```

The execution of the program starts from the `main()` function.

```c
printf()
```

Used to display output.

```c
return 0;
```

Indicates that the program executed successfully.

### Output

```text
Hello, World!
```

---

# 3. Variables

A variable is a named memory location used to store data.

### Syntax

```c
data_type variable_name = value;
```

### Example

```c
#include <stdio.h>

int main() {

    int age = 21;
    float salary = 25000.50;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Salary: %.2f\n", salary);
    printf("Grade: %c\n", grade);

    return 0;
}
```

### Output

```text
Age: 21
Salary: 25000.50
Grade: A
```

---

# 4. Constants

A constant is a value that cannot be changed during program execution.

### Using `const`

```c
#include <stdio.h>

int main() {

    const float PI = 3.14159;

    printf("PI = %.5f", PI);

    return 0;
}
```

### Output

```text
PI = 3.14159
```

---

# 5. Data Types

C provides different data types for storing different types of values.

| Data Type | Example | Format Specifier |
| --------- | ------- | ---------------- |
| `int`     | 10      | `%d`             |
| `float`   | 10.5    | `%f`             |
| `double`  | 10.5555 | `%lf`            |
| `char`    | 'A'     | `%c`             |
| `string`  | "Hello" | `%s`             |

### Example

```c
#include <stdio.h>

int main() {

    int number = 10;
    float price = 25.50;
    double value = 123.456789;
    char letter = 'A';

    printf("%d\n", number);
    printf("%.2f\n", price);
    printf("%lf\n", value);
    printf("%c\n", letter);

    return 0;
}
```

---

# 6. Input and Output

## `printf()`

Used to display output.

```c
printf("Hello");
```

## `scanf()`

Used to take input from the user.

### Example

```c
#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Your age is %d", age);

    return 0;
}
```

### Example Output

```text
Enter your age: 21
Your age is 21
```

---

# 7. Type Casting

Type casting is converting one data type into another.

### Example

```c
#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;

    float result = (float)a / b;

    printf("%.2f", result);

    return 0;
}
```

### Output

```text
3.33
```

---

# 8. Operators

C provides several types of operators.

## Arithmetic Operators

```text
+   Addition
-   Subtraction
*   Multiplication
/   Division
%   Modulus
```

### Example

```c
#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Remainder = %d\n", a % b);

    return 0;
}
```

---

## Relational Operators

```text
>    Greater than
<    Less than
>=   Greater than or equal
<=   Less than or equal
==   Equal
!=   Not equal
```

### Example

```c
#include <stdio.h>

int main() {

    int a = 10;
    int b = 20;

    printf("%d", a < b);

    return 0;
}
```

### Output

```text
1
```

`1` means true and `0` means false.

---

## Logical Operators

```text
&&   AND
||   OR
!    NOT
```

### Example

```c
#include <stdio.h>

int main() {

    int age = 20;

    if (age >= 18 && age <= 60) {
        printf("Eligible");
    }

    return 0;
}
```

---

## Increment and Decrement

```text
++   Increment
--   Decrement
```

### Example

```c
int x = 10;

x++;

printf("%d", x);
```

Output:

```text
11
```

---

# 9. Conditional Statements

Conditional statements are used to make decisions.

## if

```c
#include <stdio.h>

int main() {

    int age = 20;

    if (age >= 18) {
        printf("Adult");
    }

    return 0;
}
```

---

## if-else

```c
#include <stdio.h>

int main() {

    int number = 10;

    if (number % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}
```

### Output

```text
Even
```

---

## else-if

```c
#include <stdio.h>

int main() {

    int marks = 75;

    if (marks >= 90) {
        printf("A+");
    } 
    else if (marks >= 75) {
        printf("A");
    } 
    else if (marks >= 60) {
        printf("B");
    } 
    else {
        printf("C");
    }

    return 0;
}
```

---

## Nested if

```c
#include <stdio.h>

int main() {

    int age = 20;
    int hasID = 1;

    if (age >= 18) {

        if (hasID) {
            printf("Entry allowed");
        }
    }

    return 0;
}
```

---

## switch-case

Used when we have multiple fixed choices.

```c
#include <stdio.h>

int main() {

    int choice = 2;

    switch (choice) {

        case 1:
            printf("Addition");
            break;

        case 2:
            printf("Subtraction");
            break;

        case 3:
            printf("Multiplication");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
```

### Output

```text
Subtraction
```

---

# 10. Loops

Loops are used to execute a block of code repeatedly.

C has:

* `for`
* `while`
* `do-while`

---

## for Loop

### Syntax

```c
for(initialization; condition; increment) {
    // code
}
```

### Example

```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}
```

### Output

```text
1
2
3
4
5
```

---

## while Loop

```c
#include <stdio.h>

int main() {

    int i = 1;

    while(i <= 5) {

        printf("%d\n", i);
        i++;
    }

    return 0;
}
```

---

## do-while Loop

The `do-while` loop executes at least once.

```c
#include <stdio.h>

int main() {

    int i = 1;

    do {

        printf("%d\n", i);
        i++;

    } while(i <= 5);

    return 0;
}
```

---

## break

Used to stop a loop.

```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 10; i++) {

        if(i == 5) {
            break;
        }

        printf("%d ", i);
    }

    return 0;
}
```

Output:

```text
1 2 3 4
```

---

## continue

Skips the current iteration.

```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++) {

        if(i == 3) {
            continue;
        }

        printf("%d ", i);
    }

    return 0;
}
```

Output:

```text
1 2 4 5
```

---

# 11. Pattern Programs

Pattern programs are useful for improving logic and understanding nested loops.

## Square Pattern

```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 4; i++) {

        for(int j = 1; j <= 4; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
* * * *
* * * *
* * * *
* * * *
```

---

## Right Triangle

```c
#include <stdio.h>

int main() {

    for(int i = 1; i <= 5; i++) {

        for(int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
*
* *
* * *
* * * *
* * * * *
```

---

# 12. Functions

A function is a block of code designed to perform a particular task.

### Example

```c
#include <stdio.h>

void greet() {
    printf("Hello!");
}

int main() {

    greet();

    return 0;
}
```

---

## Function with Parameters

```c
#include <stdio.h>

void add(int a, int b) {

    printf("Sum = %d", a + b);
}

int main() {

    add(10, 20);

    return 0;
}
```

### Output

```text
Sum = 30
```

---

## Function with Return Value

```c
#include <stdio.h>

int add(int a, int b) {

    return a + b;
}

int main() {

    int result = add(10, 20);

    printf("%d", result);

    return 0;
}
```

---

# 13. Recursion

Recursion occurs when a function calls itself.

## Factorial Using Recursion

```c
#include <stdio.h>

int factorial(int n) {

    if(n == 0 || n == 1) {
        return 1;
    }

    return n * factorial(n - 1);
}

int main() {

    int result = factorial(5);

    printf("Factorial = %d", result);

    return 0;
}
```

### Output

```text
Factorial = 120
```

---

# 14. Arrays

An array stores multiple values of the same data type.

### Example

```c
#include <stdio.h>

int main() {

    int numbers[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
```

### Output

```text
10 20 30 40 50
```

---

## Find Largest Element

```c
#include <stdio.h>

int main() {

    int arr[] = {10, 50, 20, 80, 30};

    int largest = arr[0];

    for(int i = 1; i < 5; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest = %d", largest);

    return 0;
}
```

### Output

```text
Largest = 80
```

---

# 15. 2D Arrays

A two-dimensional array is commonly used to represent matrices.

```c
#include <stdio.h>

int main() {

    int matrix[2][2] = {
        {1, 2},
        {3, 4}
    };

    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

### Output

```text
1 2
3 4
```

---

## Matrix Addition

```c
#include <stdio.h>

int main() {

    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    int sum[2][2];

    for(int i = 0; i < 2; i++) {

        for(int j = 0; j < 2; j++) {

            sum[i][j] = a[i][j] + b[i][j];

            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
```

---

# 16. Strings

A string is a collection of characters ending with `\0`.

### Example

```c
#include <stdio.h>

int main() {

    char name[] = "Ranjit";

    printf("%s", name);

    return 0;
}
```

### Output

```text
Ranjit
```

---

## String Input

```c
#include <stdio.h>

int main() {

    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Hello %s", name);

    return 0;
}
```

---

## Common String Functions

Include:

```c
#include <string.h>
```

Important functions:

```text
strlen()  → Finds length
strcpy()  → Copies string
strcat()  → Joins strings
strcmp()  → Compares strings
```

### Example

```c
#include <stdio.h>
#include <string.h>

int main() {

    char str[] = "Hello";

    printf("Length = %zu", strlen(str));

    return 0;
}
```

### Output

```text
Length = 5
```

---

# 17. Pointers

A pointer is a variable that stores the memory address of another variable.

### Example

```c
#include <stdio.h>

int main() {

    int number = 10;

    int *ptr = &number;

    printf("Value = %d\n", number);
    printf("Address = %p\n", (void*)ptr);
    printf("Value using pointer = %d", *ptr);

    return 0;
}
```

### Important Symbols

```text
&  → Address of
*  → Dereference
```

---

## Pointer and Array

```c
#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30};

    int *ptr = arr;

    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 1));
    printf("%d\n", *(ptr + 2));

    return 0;
}
```

Output:

```text
10
20
30
```

---

# 18. Structures

A structure allows us to store different types of data together.

### Example

```c
#include <stdio.h>

struct Student {

    char name[50];
    int age;
    float marks;
};

int main() {

    struct Student student = {"Ranjit", 21, 85.5};

    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);

    return 0;
}
```

### Output

```text
Name: Ranjit
Age: 21
Marks: 85.50
```

---

# 19. Unions

A union is similar to a structure, but all members share the same memory location.

```c
#include <stdio.h>

union Data {

    int number;
    float value;
};

int main() {

    union Data data;

    data.number = 10;

    printf("%d", data.number);

    return 0;
}
```

---

# 20. Dynamic Memory Allocation

Dynamic memory is allocated during runtime.

Important functions:

```text
malloc()
calloc()
realloc()
free()
```

Include:

```c
#include <stdlib.h>
```

### malloc Example

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr;

    ptr = malloc(5 * sizeof(int));

    if(ptr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
```

### Output

```text
1 2 3 4 5
```

---

# 21. File Handling

C allows us to create, read, write, and modify files.

Important functions:

```text
fopen()
fclose()
fprintf()
fscanf()
fgets()
fputs()
```

---

## Write to a File

```c
#include <stdio.h>

int main() {

    FILE *file;

    file = fopen("data.txt", "w");

    if(file == NULL) {
        printf("Unable to open file");
        return 1;
    }

    fprintf(file, "Hello from C Programming!");

    fclose(file);

    return 0;
}
```

This creates:

```text
data.txt
```

---

## Read From a File

```c
#include <stdio.h>

int main() {

    FILE *file;
    char text[100];

    file = fopen("data.txt", "r");

    if(file == NULL) {
        printf("File not found");
        return 1;
    }

    fgets(text, sizeof(text), file);

    printf("%s", text);

    fclose(file);

    return 0;
}
```

---

# 22. Preprocessor Directives

Preprocessor directives begin with `#`.

Examples:

```c
#include
#define
#ifdef
#ifndef
#endif
```

### `#define`

```c
#include <stdio.h>

#define PI 3.14159

int main() {

    printf("%f", PI);

    return 0;
}
```

---

# 23. Searching

## Linear Search

Linear search checks each element one by one.

```c
#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int target = 30;
    int found = 0;

    for(int i = 0; i < 5; i++) {

        if(arr[i] == target) {

            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found");
    }

    return 0;
}
```

---

## Binary Search

Binary search works on a **sorted array**.

```c
#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};

    int target = 40;

    int left = 0;
    int right = 4;

    while(left <= right) {

        int mid = left + (right - left) / 2;

        if(arr[mid] == target) {

            printf("Found at index %d", mid);
            return 0;
        }

        if(arr[mid] < target) {
            left = mid + 1;
        } 
        else {
            right = mid - 1;
        }
    }

    printf("Not found");

    return 0;
}
```

---

# 24. Sorting

## Bubble Sort

Bubble sort repeatedly compares adjacent elements and swaps them if necessary.

```c
#include <stdio.h>

int main() {

    int arr[] = {5, 2, 8, 1, 3};

    int n = 5;

    for(int i = 0; i < n - 1; i++) {

        for(int j = 0; j < n - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                int temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
```

### Output

```text
1 2 3 5 8
```

---

# 25. Common Practice Programs

This repository also contains common C programming problems.

## Even or Odd

```c
#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if(n % 2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;
}
```

---

## Positive, Negative or Zero

```c
#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

    if(n > 0)
        printf("Positive");
    else if(n < 0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}
```

---

## Factorial

```c
#include <stdio.h>

int main() {

    int n;
    long long factorial = 1;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("%lld", factorial);

    return 0;
}
```

---

## Fibonacci Series

```c
#include <stdio.h>

int main() {

    int n;
    int a = 0;
    int b = 1;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        printf("%d ", a);

        int next = a + b;

        a = b;
        b = next;
    }

    return 0;
}
```

Example output:

```text
0 1 1 2 3 5 8 13
```

---

## Prime Number

```c
#include <stdio.h>

int main() {

    int n;
    int isPrime = 1;

    scanf("%d", &n);

    if(n < 2) {
        isPrime = 0;
    }

    for(int i = 2; i * i <= n && isPrime; i++) {

        if(n % i == 0) {
            isPrime = 0;
        }
    }

    if(isPrime)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
```

---

## Palindrome Number

```c
#include <stdio.h>

int main() {

    int n;
    int original;
    int reverse = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0) {

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n /= 10;
    }

    if(original == reverse)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
```

---

## Reverse a Number

```c
#include <stdio.h>

int main() {

    int n;
    int reverse = 0;

    scanf("%d", &n);

    while(n != 0) {

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        n /= 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
```

---

## Armstrong Number

```c
#include <stdio.h>

int main() {

    int n;
    int original;
    int sum = 0;

    scanf("%d", &n);

    original = n;

    while(n != 0) {

        int digit = n % 10;

        sum += digit * digit * digit;

        n /= 10;
    }

    if(sum == original)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
```

---

# 26. How to Run

## Step 1: Install GCC

Make sure GCC is installed on your system.

Check the installation:

```bash
gcc --version
```

---

## Step 2: Compile

Suppose your file is:

```text
hello.c
```

Compile it:

```bash
gcc hello.c -o hello
```

---

## Step 3: Run

### Windows

```bash
hello.exe
```

### Linux / macOS

```bash
./hello
```

---

# 📂 Repository Structure

```text
C-Programming/
│
├── 01-Basics/
│   ├── hello_world.c
│   ├── variables.c
│   ├── constants.c
│   ├── data_types.c
│   ├── input_output.c
│   └── type_casting.c
│
├── 02-Operators/
│   ├── arithmetic.c
│   ├── relational.c
│   ├── logical.c
│   └── increment_decrement.c
│
├── 03-Conditional-Statements/
│   ├── if.c
│   ├── if_else.c
│   ├── else_if.c
│   ├── nested_if.c
│   └── switch.c
│
├── 04-Loops/
│   ├── for_loop.c
│   ├── while_loop.c
│   ├── do_while.c
│   ├── break.c
│   └── continue.c
│
├── 05-Patterns/
│   ├── square.c
│   ├── triangle.c
│   └── number_pattern.c
│
├── 06-Functions/
│   ├── function.c
│   ├── parameters.c
│   └── return_value.c
│
├── 07-Recursion/
│   └── factorial.c
│
├── 08-Arrays/
│   ├── array.c
│   ├── largest.c
│   └── smallest.c
│
├── 09-2D-Arrays/
│   ├── matrix.c
│   └── matrix_addition.c
│
├── 10-Strings/
│   ├── string.c
│   ├── strlen.c
│   ├── strcpy.c
│   ├── strcat.c
│   └── strcmp.c
│
├── 11-Pointers/
│   ├── pointer.c
│   ├── pointer_array.c
│   └── pointer_function.c
│
├── 12-Structures/
│   ├── structure.c
│   └── array_structure.c
│
├── 13-Unions/
│   └── union.c
│
├── 14-Dynamic-Memory/
│   ├── malloc.c
│   ├── calloc.c
│   └── realloc.c
│
├── 15-File-Handling/
│   ├── write_file.c
│   └── read_file.c
│
├── 16-Searching/
│   ├── linear_search.c
│   └── binary_search.c
│
├── 17-Sorting/
│   └── bubble_sort.c
│
├── 18-Practice-Problems/
│   ├── even_odd.c
│   ├── factorial.c
│   ├── fibonacci.c
│   ├── prime.c
│   ├── palindrome.c
│   ├── reverse.c
│   └── armstrong.c
│
└── README.md
```

---

# 🎯 Learning Goals

The purpose of this repository is to:

* Learn C Programming from scratch
* Understand programming fundamentals
* Improve logical thinking
* Practice problem solving
* Understand memory and pointers
* Learn data structures using C
* Prepare for coding interviews
* Practice algorithms
* Build a strong programming foundation

---

# 📈 Learning Progress

* [x] C Basics
* [x] Variables & Data Types
* [x] Input & Output
* [x] Operators
* [x] Conditional Statements
* [x] Loops
* [x] Functions
* [x] Recursion
* [x] Arrays
* [x] Strings
* [x] Pointers
* [x] Structures
* [x] Unions
* [x] Dynamic Memory Allocation
* [x] File Handling
* [x] Searching
* [x] Sorting
* [x] Data Structures
* [ ] Advanced C Projects

---

# 🚀 Future Plans

I will continue adding:

* More C programming problems
* Data Structures using C
* Algorithms
* Competitive Programming
* Interview Questions
* Mini Projects
* Advanced C Concepts

---

# 👨‍💻 Author

**Ranjit Sharma**

This repository represents my journey of learning **C Programming**, improving problem-solving skills, and building a strong foundation in programming.

---

# ⭐ Support

If you find this repository useful, consider giving it a ⭐ on GitHub.

**Keep Learning. Keep Coding. 🚀**

---
