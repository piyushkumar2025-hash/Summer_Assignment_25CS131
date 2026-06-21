// Write a program to Write function for Fibonacce.

#include<stdio.h>
int fib(int n){
    int i,a,b,c;
    a = 0;
    b = 1;
    if(n == 1){
        printf("%d",a);
    }else if(n >= 2){
        printf("%d %d",a,b);
    } 

    if(n > 2){
        for(i = 1 ; i <= n-2 ; i++){
            c = a + b;
            printf(" %d",c);
            a = b;
            b = c;
        }
    }
}
int main(){
    int n;
    printf("Enter number of terms in the series: ");
    scanf("%d",&n);
    fib(n);

    return 0;
}
