// Write a program to Create Mini Library System.

#include <stdio.h>
struct Book {
    int id;
    char name[50];
    char author[50];
};
int main() {
    struct Book b[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of Book %d\n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);
        printf("Enter Book Name: ");
        scanf("%s", b[i].name);
        printf("Enter Author Name: ");
        scanf("%s", b[i].author);
    }
    for(i = 0; i < 3; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].id);
        printf("Book Name   : %s\n", b[i].name);
        printf("Author Name : %s\n", b[i].author);
    }

    return 0;
}