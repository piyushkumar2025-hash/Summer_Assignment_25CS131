// Write a program to Count digits in a number.

#include<stdio.h>
int main(){
    int n,i,a;
    i = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    while(a != 0){
        a = a/10;
        i = i + 1;
    }
    printf("Number of digits in %d is %d",n,i);

    return 0;
}