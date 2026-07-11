// Write a program to Find longest word.

#include<stdio.h>
int main() {
    char str[100];
    int i, a = 0, max = 0, start = 0, pos = 0;
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\n') {
            a++;
        }
        else{
            if(a > max) {
                max = a;
                pos = start;
            }
            a = 0;
            start = i + 1;
        }
    }
    printf("Longest word is: ");

    for(i = pos; i < pos + max; i++) {
        printf("%c", str[i]);
    }
    printf("\nLength = %d", max);


    return 0;
}