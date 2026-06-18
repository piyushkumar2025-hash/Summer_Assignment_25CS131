// Write a program to Convert decimal to binary.

#include <stdio.h>
int main() {
    int n,i,x;
    int a[64];
    i = 0;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    x = n;
    if (n == 0) {
        printf("Binary of 0 is 0.");
    }else{
        while (n > 0) {
            a[i] = n % 2;
            n = n / 2;
            i++;
        }
        printf("Binary of decimal %d is: ",x);
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", a[j]);
        }
    }
    
    return 0;
}