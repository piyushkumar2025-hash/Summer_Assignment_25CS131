// Write a program to Create Student Record Management System.

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student s;
    int c;
    printf("1. Add Student Record\n");
    printf("2. Display Student Record\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s.roll);

            printf("Enter Name: ");
            scanf("%s", s.name);

            printf("Enter Age: ");
            scanf("%d", &s.age);

            printf("Enter Marks: ");
            scanf("%f", &s.marks);

            printf("\nStudent record added successfully.\n");
            break;
        case 2:
            printf("\nStudent Details\n");
            printf("Roll Number : %d\n", s.roll);
            printf("Name        : %s\n", s.name);
            printf("Age         : %d\n", s.age);
            printf("Marks       : %.2f\n", s.marks);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}