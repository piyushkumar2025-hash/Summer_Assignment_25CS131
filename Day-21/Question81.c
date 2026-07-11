// Write a program to Find string length without strlen().

#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%99s", str);
    for(i = 0; str[i] != '\0'; i++) {
        
    }
    printf("Length of the string is %d",i-1);

    return 0;
}