// Write a program to Create ATM simulation.

#include <stdio.h>

int main() {
    int p = 1234, n, c;
    float b = 5000, a;
    printf("Enter your PIN: ");
    scanf("%d", &n);
    if (n == p) {
        printf("\n1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Your balance is %.2f\n", b);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &a);

                b = b + a;

                printf("Deposit successful.\n");
                printf("Updated balance: %.2f\n", b);
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &a);

                if (a <= b) {
                    b = b - a;
                    printf("Withdrawal successful.\n");
                    printf("Remaining balance: %.2f\n", b);
                } else {
                    printf("Insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } else {
        printf("Incorrect PIN.\n");
    }

    return 0;
}