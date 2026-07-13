// Write a program to Create Bank Account System.

#include <stdio.h>
struct Account {
    int accNo;
    char name[50];
    float balance;
};
int main() {
    struct Account a;
    int c;
    printf("1. Create Account\n");
    printf("2. Display Account\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Account Number: ");
            scanf("%d", &a.accNo);

            printf("Enter Account Holder Name: ");
            scanf("%s", a.name);

            printf("Enter Balance: ");
            scanf("%f", &a.balance);

            printf("\nAccount created successfully.\n");
            break;
        case 2:
            printf("\nAccount Details\n");
            printf("Account Number : %d\n", a.accNo);
            printf("Account Holder : %s\n", a.name);
            printf("Balance        : %.2f\n", a.balance);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}