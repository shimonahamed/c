#include <stdio.h>
#include <string.h>

struct Account {
    int accountNumber;
    char name[50];
    float balance;
};

// Function declarations
void createAccount(struct Account *acc);
void deposit(struct Account *acc);
void withdraw(struct Account *acc);
void display(struct Account acc);

int main() {
    struct Account acc;
    int choice;

    while (1) {
        printf("\n===== Bank Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Display Account Info\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount(&acc);
                break;
            case 2:
                deposit(&acc);
                break;
            case 3:
                withdraw(&acc);
                break;
            case 4:
                display(acc);
                break;
            case 5:
                printf("Thank you for using our system!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}

// Function to create a new account
void createAccount(struct Account *acc) {
    printf("\nEnter Account Number: ");
    scanf("%d", &acc->accountNumber);
    printf("Enter Name: ");
    scanf("%s", acc->name);
    acc->balance = 0;
    printf("Account created successfully!\n");
}

// Function to deposit money
void deposit(struct Account *acc) {
    float amount;
    printf("\nEnter deposit amount: ");
    scanf("%f", &amount);
    if (amount > 0) {
        acc->balance += amount;
        printf("Deposit successful! New balance: %.2f\n", acc->balance);
    } else {
        printf("Invalid amount!\n");
    }
}

// Function to withdraw money
void withdraw(struct Account *acc) {
    float amount;
    printf("\nEnter withdraw amount: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrawal successful! Remaining balance: %.2f\n", acc->balance);
    } else {
        printf("Insufficient balance or invalid amount!\n");
    }
}

// Function to display account information
void display(struct Account acc) {
    printf("\n----- Account Information -----\n");
    printf("Account Number: %d\n", acc.accountNumber);
    printf("Name: %s\n", acc.name);
    printf("Balance: %.2f\n", acc.balance);
}
