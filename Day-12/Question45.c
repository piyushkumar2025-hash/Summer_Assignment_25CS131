// Write a program to Write function for palindrome.

#include<stdio.h>
int palindrome(int n){
    int a,b,i,c;
    a = n;
    c = 0;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        c = c * 10 + b;
    }
    return c;
}
int main(){
    int n,c;
    printf("Enter any number: ");
    scanf("%d",&n);
    c = palindrome(n);
    if(c == n){
        printf("Yes, %d is a palindrome number",n);
    }else{
        printf("No, %d is not a palindrome number",n);
    }

    return 0;
}