// Write a program to Create voting eligibility system.

#include <stdio.h>
int main() {
    char v, a;
    printf("Do you have a voter card? (Y/N): ");
    scanf(" %c", &v);
    printf("Are you 18 or above? (Y/N): ");
    scanf(" %c", &a);

    if ((v == 'Y' || v == 'y') &&
        (a == 'Y' || a == 'y')) {
        printf("You are eligible to vote.");
    } else {
        printf("You are not eligible to vote.");
    }

    return 0;
}