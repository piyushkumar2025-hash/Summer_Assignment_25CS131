// Write a program to Create quiz application.

#include <stdio.h>
int main() {
    int a, score = 0;
    printf("\n1. Which header file is used for printf()?\n");
    printf("1. math.h\n2. stdio.h\n3. string.h\n4. stdlib.h\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if (a == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("\n2. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ,\n3. ;\n4. .\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if (a == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("\n3. Which function is used to take input in C?\n");
    printf("1. printf()\n2. scanf()\n3. puts()\n4. gets()\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if (a == 2) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("\n4. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if (a == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("\n5. Which data type is used to store decimal numbers?\n");
    printf("1. int\n2. char\n3. float\n4. void\n");
    printf("Enter your answer: ");
    scanf("%d", &a);
    if (a == 3) {
        printf("Correct!\n");
        score++;
    } else {
        printf("Wrong!\n");
    }
    printf("Your Final Score: %d/5\n", score);
    if (score == 5) {
        printf("Excellent!\n");
    } else if (score >= 3) {
        printf("Good Job!\n");
    } else {
        printf("Keep Practicing!\n");
    }

    
    return 0;
}