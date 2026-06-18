// Write a program to Generate Fibonacci series.

#include<stdio.h>
int main(){
    int i,n,a,b,c;
    printf("Enter number of terms in the series: ");
    scanf("%d",&n);
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

    return 0;
}