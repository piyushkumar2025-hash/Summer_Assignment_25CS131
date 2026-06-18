// Write a program to Count set bits in a number.

#include <stdio.h>
int main() {
    int n,a,b;
    a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    b = n;
    while (n > 0) {
        if (n % 2 == 1) {
            a++;
        }
        n /= 2;
    }
    printf("Number of set bits in the number %d is %d.",b,a);

    return 0;
}