// Write a program to Find GCD of two numbers.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);
    while(b != 0){
        c = b;
        b = a % b;
        a = c;
    }
    printf("GCD of the given number is %d",a);

    return 0;
}