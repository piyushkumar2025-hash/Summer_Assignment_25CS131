// Write a program to Reverse a number.

#include<stdio.h>
int main(){
    int a,b,i,n,c;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    c = 0;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        c = c * 10 + b;
    }
    printf("Reverse of %d is %d",n,c);

    return 0;
}