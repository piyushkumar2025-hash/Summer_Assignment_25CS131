// Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
void input(struct Student s[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}
void display(struct Student s[], int n) {
    int i;
    printf("\nStudent Records\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number : %d\n", s[i].roll);
        printf("Name        : %s\n", s[i].name);
        printf("Marks       : %.2f\n", s[i].marks);
    }
}
int main() {
    struct Student s[3];
    input(s, 3);
    display(s, 3);

    return 0;
}