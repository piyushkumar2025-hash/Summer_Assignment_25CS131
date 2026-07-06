// Write a program to Convert lowercase to uppercase.

#include<stdio.h>
int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0'){
        if(str[i] > 96){
            str[i] -= 32;
        }
        printf("%c",str[i]);
        i++;
    }
    
    return 0;
}