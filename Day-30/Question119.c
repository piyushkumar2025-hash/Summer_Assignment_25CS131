// Write a program to Create Mini Employee Management System.

#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    int age;
    float salary;
};
int main() {
    struct Employee e[3];
    int i;
    for(i = 0; i < 3; i++) {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf("%s", e[i].name);

        printf("Enter Employee Age: ");
        scanf("%d", &e[i].age);

        printf("Enter Employee Salary: ");
        scanf("%f", &e[i].salary);
    }
    printf("\nEmployee Records\n");
    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);
        printf("Employee ID     : %d\n", e[i].id);
        printf("Employee Name   : %s\n", e[i].name);
        printf("Employee Age    : %d\n", e[i].age);
        printf("Employee Salary : %.2f\n", e[i].salary);
    }

    return 0;
}