// Write a program to Print character triangle.
// A
// AB
// ABC
// ABCD
// ABCDE

#include<stdio.h>
int main(){
    char n = 65;
    int i,j;
    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= i ; j++,n++){
            printf("%c ",n);
        }
        printf("\n");
        n = 65;
    }

    return 0;
}