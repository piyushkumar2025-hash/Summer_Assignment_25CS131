// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA

#include<stdio.h>
int main(){
    int i,j;
    char n = 65;
    for(i = 1 ; i <= 5 ; i++){
        for(j = 1 ; j <= 5 - i ; j++){
            printf("  ");
        }

        for(j = 1 ; j <= i ; j++,n++){
            printf("%c ",n);
        }

        for(j = 0 ; j < i - 1 ; j++){
            char a = (63 + i) - j;
            printf("%c ",a);
        }
        printf("\n");
        n = 65;
    }

    return 0;
}