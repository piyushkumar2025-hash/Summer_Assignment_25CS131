// Write a program to Find largest prime factor.

#include<stdio.h>
int main(){
    int n,i,j,a,z;
    printf("Enter any number: ");
    scanf("%d",&n);
    z = 1;
    for(i = 2 ; i <= n ; i++){
        if(n % i == 0){
            a = 0;

            for(j = 2; j < i; j++){
                if(i % j == 0){
                    a = 1;
                    break;
                }
            }
            if(a == 0){
                z = i;
            }
        }
    }
    printf("%d",z);

    

    return 0;
}