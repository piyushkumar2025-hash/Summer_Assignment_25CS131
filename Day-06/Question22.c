// Write a program to Convert binary to decimal.

#include <stdio.h>
int main() {
    int a,b,c,base,d;
    b = 0;
    base = 1;
    printf("Enter a binary number: ");
    scanf("%d", &a);
    d = a;
    while (a > 0) {
        c = a % 10;
        b += c * base;
        base *= 2;
        a /= 10;
    }

    printf("Decimal of Binary %d is: %d",d,b);

    return 0;
}