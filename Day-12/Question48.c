// Write a program to Write function for Perfect number.

#include<stdio.h>
int perfectNo(int n){
    int i,a;
    a = 0;
    for(i = 1 ; i < n ; i++){
        if(n % i == 0){
            a += i;
        }
    }
    return a;
}
int main(){
    int n,a;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = perfectNo(n);

    if(a == n){
        printf("Yes, %d is a perfect number.",n);
    }else{
        printf("No, %d is not a perfect number.",n);
    }

    return 0;
}