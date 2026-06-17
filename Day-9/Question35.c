// Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include<stdio.h>
int main(){
    char n = 65;
    int i,j;
    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= i ; j++){
            printf("%c ",n);
        }
        printf("\n");
        n++;
    }

    return 0;
}