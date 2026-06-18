// Write a program to Print Armstrong numbers in a range.

#include<stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,x,y,digits,temp;
    printf("Enter any number in range: ");
    scanf("%d%d",&x,&y);

    for(a = x ; a <= y ; a++ ){
        d = e = temp = a;
        c = 0;
        digits = 0;

        while (e != 0) {
        digits++;
        e /= 10;
        }

        while(temp != 0){
            b = temp % 10;
            temp = temp / 10;
            c += pow(b,digits);
        }
        if(c == d){
            printf("%d ",d);
            }
    }
    return 0;
}