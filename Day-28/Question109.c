// Write a program to Create Library Management System.

#include <stdio.h>
struct Book {
    int id;
    char name[50];
    char author[50];
    float price;
};
int main() {
    struct Book b;
    int c;
    printf("1. Add Book\n");
    printf("2. Display Book\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &b.id);

            printf("Enter Book Name: ");
            scanf("%s", b.name);

            printf("Enter Author Name: ");
            scanf("%s", b.author);

            printf("Enter Book Price: ");
            scanf("%f", &b.price);

            printf("\nBook added successfully.\n");
            break;
        case 2:
            printf("\nBook Details\n");
            printf("Book ID     : %d\n", b.id);
            printf("Book Name   : %s\n", b.name);
            printf("Author Name : %s\n", b.author);
            printf("Book Price  : %.2f\n", b.price);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}