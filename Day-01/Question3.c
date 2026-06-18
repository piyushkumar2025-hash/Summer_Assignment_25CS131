// Write a program to Find factorial of a number.

#include<stdio.h>
int main(){
    int n,i;
    long int fact = 1;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i = 2 ; i <= n ; i++){
        fact =  fact*i; 
    }
    printf("Factorial of given number is %ld",fact);
    return 0;
}