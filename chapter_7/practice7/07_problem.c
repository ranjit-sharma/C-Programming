/* 7. Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7
and 9 respectively*/

//GPT CODE

/* #include <stdio.h>

int main() {
    int tables[3][10]; // Create a 3 x 10 array

    // Populate the array with multiplication tables
    for (int i = 0; i < 10; i++) {
        tables[0][i] = 2 * (i + 1); // Multiplication table of 2
        tables[1][i] = 7 * (i + 1); // Multiplication table of 7
        tables[2][i] = 9 * (i + 1); // Multiplication table of 9
    }

    // Print the multiplication tables
    printf("Multiplication table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tables[0][i]);
    }
    printf("\n");

    printf("Multiplication table of 7:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tables[1][i]);
    }
    printf("\n");

    printf("Multiplication table of 9:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", tables[2][i]);
    }
    printf("\n");

    return 0;
}
*/

//HARRY CODE

#include <stdio.h>
    
int main(){
    int arr[3][10];
    int mul[]={2,7,9};
    for (int i= 0;i<3; i++){
        for(int j=0;j<10;j++){
            arr[i][j]=mul[i]*(j+1);
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<10;j++){
            printf("the value of arr[i][j] is %d\n",arr[i][j]);
        }
        printf(" \n");
    }
    return 0;
}