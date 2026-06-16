// Write a program to Find x^n without pow().

#include<stdio.h>
int main(){
    int i,x,n,a;
    printf("To get the value of x^n\nEnter the value of x: ");
    scanf("%d",&x);
    a = 1;
    printf("Now, Enter the value of n: ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        a *= x;
    }
    printf("Now the value of x^n is %d",a);

    return 0;
}