// Write a program to Check whether a number is prime.

#include<stdio.h>
int main(){
    int n,i,a;
    a = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i = 2; i < n; i++){
        if(n % i == 0){
            a = 1;
            break;
        }else{
            a = 0;
        }
    }

    if(a == 1){
            printf("The given number is not a prime number.");
        }else{
            printf("The given number is a prime number.");
        }

    return 0;
}