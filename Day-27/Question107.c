// Write a program to Create Salary Management System.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee e;
    int c;
    printf("1. Add Employee Salary\n");
    printf("2. Display Employee Salary\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &e.id);

            printf("Enter Employee Name: ");
            scanf("%s", e.name);

            printf("Enter Employee Salary: ");
            scanf("%f", &e.salary);

            printf("\nSalary record added successfully.\n");
            break;
        case 2:
            printf("\nEmployee Salary Details\n");
            printf("Employee ID     : %d\n", e.id);
            printf("Employee Name   : %s\n", e.name);
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