// Write a program to Find nth Fibonacci term.

#include<stdio.h>
int main(){
    int i,n,a,b,c;
    printf("Enter the nth term to find in the series: ");
    scanf("%d",&n);
    a = 0;
    b = 1;
    if(n == 1){
        printf("%d",a);
    }else if(n == 2){
        printf("%d %d",a,b);
    }
     if(n > 2){
        for(i = 1 ; i <= n-2 ; i++){
            c = a + b;
            a = b;
            b = c;
        }
     }
    printf("%dth term of series is: %d",n,c);

    return 0;
}