// Write a program to Find sum of digits of a number.

#include<stdio.h>
int main(){
    int n,a,b,sum;
    sum = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        sum += b;
    }
    printf("sum of digits of %d is %d",n,sum);

    return 0;
}