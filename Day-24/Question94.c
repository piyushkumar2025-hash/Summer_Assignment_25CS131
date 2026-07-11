// Write a program to Compress a string.

#include<stdio.h>
int main() {
    char str[100];
    int i, a = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        if(str[i] == str[i + 1]) {
            a++;
        }
        else {
            printf("%c%d", str[i], a);
            a = 1;
        }
    }

    return 0;
}