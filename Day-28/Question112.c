// Write a program to Create Contact Management System.

#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    struct Contact c1;
    int c;
    printf("1. Add Contact\n");
    printf("2. Display Contact\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Name: ");
            scanf("%s", c1.name);

            printf("Enter Phone Number: ");
            scanf("%s", c1.phone);

            printf("Enter Email: ");
            scanf("%s", c1.email);

            printf("\nContact added successfully.\n");
            break;
        case 2:
            printf("\nContact Details\n");
            printf("Name         : %s\n", c1.name);
            printf("Phone Number : %s\n", c1.phone);
            printf("Email        : %s\n", c1.email);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}