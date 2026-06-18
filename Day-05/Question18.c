// Write a program to Check strong number.

#include<stdio.h>
int main(){
    int i,n,a,b,fact,z;
    printf("Enter any number: ");
    scanf("%d",&n);
    a = n;
    z = 0;
    while(a != 0){
        fact = 1;
        b = a % 10;
        a = a / 10;
        for(i = 1 ; i <= b ; i++){
            fact *= i;
        }
        z += fact;
    }
    if(z == n){
        printf("Yes, %d is a strong number",n);
    }else{
        printf("No, %d is not a strong number",n);
    }

    return 0;
}