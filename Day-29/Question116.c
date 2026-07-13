// Write a program to Create Inventory Management System.

#include <stdio.h>
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Product p;
    int c;
    printf("1. Add Product\n");
    printf("2. Display Product\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Product ID: ");
            scanf("%d", &p.id);

            printf("Enter Product Name: ");
            scanf("%s", p.name);

            printf("Enter Quantity: ");
            scanf("%d", &p.quantity);

            printf("Enter Price: ");
            scanf("%f", &p.price);

            printf("\nProduct added successfully.\n");
            break;
        case 2:
            printf("\nProduct Details\n");
            printf("Product ID   : %d\n", p.id);
            printf("Product Name : %s\n", p.name);
            printf("Quantity     : %d\n", p.quantity);
            printf("Price        : %.2f\n", p.price);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}