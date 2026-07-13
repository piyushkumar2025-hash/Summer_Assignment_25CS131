// Write a program to Create Employee Management System.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};
int main() {
    struct Employee e;
    int c;
    printf("1. Add Employee Record\n");
    printf("2. Display Employee Record\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &e.id);

            printf("Enter Employee Name: ");
            scanf("%s", e.name);

            printf("Enter Employee Age: ");
            scanf("%d", &e.age);

            printf("Enter Employee Salary: ");
            scanf("%f", &e.salary);

            printf("\nEmployee record added successfully.\n");
            break;
        case 2:
            printf("\nEmployee Details\n");
            printf("Employee ID     : %d\n", e.id);
            printf("Employee Name   : %s\n", e.name);
            printf("Employee Age    : %d\n", e.age);
            printf("Employee Salary : %.2f\n", e.salary);
            break;
        case 3:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}