// Write a program to Check Armstrong number.

#include<stdio.h>
int main(){
    int n,a,b,c;
    c = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        c += b*b*b;
    }
    if(c == n){
        printf("Yes, %d is an armstrong number.",n);
    }else{
        printf("No, %d is not an armstrong number.",n);
    }

    return 0;
}