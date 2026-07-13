// Write a program to Create Menu-Driven Calculator.

#include <stdio.h>
int main() {
    int c;
    float a, b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &c);
    switch(c) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a + b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a - b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result = %.2f\n", a * b);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (b != 0) {
                printf("Result = %.2f\n", a / b);
            } else {
                printf("Division by zero is not possible.\n");
            }
            break;
        case 5:
            printf("Thank you!\n");
            break;
        default:
            printf("Invalid Choice.\n");
    }

    return 0;
}