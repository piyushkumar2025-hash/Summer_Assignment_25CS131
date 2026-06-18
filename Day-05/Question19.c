// Write a program to Print factors of a number.

#include<stdio.h>
int main(){
    int i,n,a;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++){
        if(n % i == 0){
            printf("%d ",i);
        }
    }

    return 0;
}