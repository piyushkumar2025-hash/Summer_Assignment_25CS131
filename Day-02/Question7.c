// Write a program to Find product of digits.

#include<stdio.h>
int main(){
    int n,a,b,product;
    product = 1;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        product *= b;
    }
    printf("product of digits of %d is %d",n,product);

    return 0;

}