// Write a program to Check perfect number.

#include<stdio.h>
int main(){
    int n,i,a;
    a = 0;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i = 1 ; i < n ; i++){
        if(n % i == 0){
            a += i;
        }
    }
    if(a == n){
        printf("Yes, %d is a perfect number.",n);
    }else{
        printf("No, %d is not a perfect number.",n);
    }

    return 0;
}