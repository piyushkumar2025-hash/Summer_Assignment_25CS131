// Write a program to Create Student Record System using Arrays and Strings.

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Records\n");
    for(i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }

    return 0;
}