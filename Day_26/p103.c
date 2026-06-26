#include <stdio.h>
int main() {
    int pin, choice;
    float balance = 10000.00, amount;
    printf("Enter PIN: ");
    scanf("%d", &pin);
    if (pin != 1234) {
        printf("Wrong PIN! Access denied.\n");
        return 0;
    }
    printf("PIN Accepted!\n");
    while (1) {
        printf("\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Balance: Rs. %.2f\n", balance);
        } else if (choice == 2) {
            printf("Enter deposit amount: ");
            scanf("%f", &amount);
            balance += amount;
            printf("New balance: Rs. %.2f\n", balance);
        } else if (choice == 3) {
            printf("Enter withdraw amount: ");
            scanf("%f", &amount);
            if (amount > balance)
                printf("Insufficient balance!\n");
            else {
                balance -= amount;
                printf("Remaining balance: Rs. %.2f\n", balance);
            }
        } else if (choice == 4) {
            printf("Thank you! Goodbye.\n");
            break;
        } else {
            printf("Invalid choice!\n");
        }
    }
    return 0;
}