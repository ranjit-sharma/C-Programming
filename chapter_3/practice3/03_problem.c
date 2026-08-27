#include <stdio.h>

int main()
{
    int income;
    float tax = 0;

    printf("Enter income: \n");
    scanf("%d", &income);
    
    if (income <= 250000) {
        tax = 0; // No tax for income up to 2.5L
    } else if (income > 250000 && income <= 500000) {
        tax = 0.05 * (income - 250000); // 5% tax for income between 2.5L and 5.0L
    } else if (income > 500000 && income <= 1000000) {
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000); // Tax for both slabs
    } else {
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000); // Tax for all slabs
    }

    printf("The total tax you need to pay is: %.2f\n", tax);

    return 0;
}
