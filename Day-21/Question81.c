// Write a program to Find string length without strlen().

#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        
    }
    printf("Length of the string is %d", i);

    return 0;
}