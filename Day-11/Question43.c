// Write a program to Write function to check prime.

#include<stdio.h>
int prime(int a){
    int i,n;
    for(i = 2 ; i < a ; i++){
        if(a % i == 0){
            n = 1;
            break;    
        }else{
            n = 0;
        }
    }
    return n;
}
int main(){
    int a,c;
    printf("Enter any number: ");
    scanf("%d",&a);
    c = prime(a);
    if(c == 0){
            printf("%d is a prime number",a);
    }else{
        printf("%d is not a prime number",a);
    }

    return 0;
}