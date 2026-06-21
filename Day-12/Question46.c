// Write a program to Write function for Armstrong.

#include<stdio.h>
int armstrong(int n){
    int a,b,c;
    c = 0;
    a = n;
    while(a != 0){
        b = a % 10;
        a = a / 10;
        c += b*b*b;
    }
    return c;
}
int main(){
    int n,c;
     printf("Enter any number: ");
    scanf("%d",&n);
    c = armstrong(n);
    if(c == n){
        printf("Yes, %d is a armstrong number",n);
    }else{
        printf("No, %d is not a armstrong number",n);
    }

    return 0;
}