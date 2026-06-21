//Write a program to Write function to find sum of two numbers.

#include<stdio.h>
int sum(int a, int b){
    return a + b;
}
int main(){
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("%d",c);

    return 0;
}