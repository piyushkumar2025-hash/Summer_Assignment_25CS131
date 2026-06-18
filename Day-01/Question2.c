// Write a program to Print multiplication table of a given number.

#include<stdio.h>
int main(){
    int n,i,a;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("Multiplication table of %d.",n);
    for(i = 1 ; i <= 10 ; i++){
        a = n*i;
        printf("\n%d",a);
    }

    return 0;
}