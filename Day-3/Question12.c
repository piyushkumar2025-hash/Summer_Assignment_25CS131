// Write a program to Find LCM of two numbers.

#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);
    if(a > b){
        c = a;
    }else{
        c = b;
    }
    while(1){
        if(c%a == 0 && c%b == 0){
            d = c;
            break;
        }
        c++;
    }
    printf("LCM of given number is %d",d);

    return 0;
}