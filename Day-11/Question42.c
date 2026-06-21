// Write a program to Write function to find maximum.

#include<stdio.h>
int max(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
}
int main(){
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d%d",&a,&b);
    c = max(a,b);
    printf("%d",c);

    return 0;
}