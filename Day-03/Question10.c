// Write a program to Print prime numbers in a range.

#include<stdio.h>
int main(){
    int i,a,b,n;
    n = 0;
    printf("Enter any two number to give range: ");
    scanf("%d%d",&a,&b);
    for(a ; a <= b ; a++){
        for(i = 2 ; i < a ; i++){
            if(a % i == 0){
                n = 1;
                break;    
            }else{
                n = 0;
            }
        }
        if(n == 0){
            printf("%d ",a);
        }
    }

    return 0;
}