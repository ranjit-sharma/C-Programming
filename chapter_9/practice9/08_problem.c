/*8. Create a structure representing a bank account of a customer. What fields did
you use and why?*/

#include <stdio.h>

// Define the structure for a bank account
typedef struct BankAccount {
    int accountNumber;      // Unique identifier for the account
    char accountHolder[100]; // Name of the account holder
    char accountType[20];    // Type of account (e.g., Savings, Current)
    float balance;           // Current balance in the account
    char phone[15];          // Contact number of the account holder
    char email[100];         // Email address of the account holder
} BankAccount;

int main() {
    BankAccount cust = {342873530, "Ranjit Sharma", "Savings", 5000.75, "7482869029", "ranjitsharma76088@gmial.com"};

    printf("Account Number: %d\n", cust.accountNumber);
    printf("Account Holder: %s\n", cust.accountHolder);
    printf("Account Type: %s\n", cust.accountType);
    printf("Balance: %.2f\n", cust.balance);
    printf("Phone: %d\n", cust.phone);
    printf("Email: %s\n", cust.email);

    return 0;
}
