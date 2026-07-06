// Write a program to Check whether a number is palindrome.

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
    if(c == n){
        printf("The given number is a palindrome number");
    }else{
        printf("The given number is not a palindrome number");
    }

    return 0;
}