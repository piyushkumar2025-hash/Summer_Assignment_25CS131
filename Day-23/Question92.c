// Write a program to Find maximum occurring character.

#include<stdio.h>
#include<string.h>

int main() {
    char str[100], c;
    int i, j, a, max = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        a = 0;
        if(str[i] == '\n')
            continue;
        for(j = 0; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                a++;
            }
        }
        if(a > max) {
            max = a;
            c = str[i];
        }
    }
    printf("Maximum occurring character is '%c'\n", c);
    printf("It occurs %d times.\n", max);


    return 0;
}