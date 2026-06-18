// Write a program to Recursive reverse number.

#include <stdio.h>
int reverse = 0;
void reverseNumber(int n) {
    if (n == 0){
        return;
    }else{
    reverse = reverse * 10 + (n % 10);
    reverseNumber(n / 10);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverseNumber(n);
    printf("Reversed number is: %d\n", reverse);

    return 0;
}