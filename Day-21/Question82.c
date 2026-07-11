// Write a program to Reverse a string.

#include<stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0' && str[i] != '\n'){
        i++;
    }

    i--;
    printf("Reverse of the string is: ");
    while(i >= 0){
        printf("%c", str[i]);
        i--;
    }

    return 0;
}