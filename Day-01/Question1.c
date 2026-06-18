// Write a program to Calculate sum of first N natural numbers.

#include<stdio.h>
int main(){
    int n,i,sum;
    sum = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        sum = sum + i;
    }
    printf("Sum of first N natural numbers is %d",sum);

    return 0;
}